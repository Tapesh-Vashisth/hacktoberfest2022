import java.util.*;

public class NQueens {
    public static void main(String[] args) {
        int n = 6;
        helper(new ArrayList<String>(), 0, new boolean[n], new boolean[2 * n - 1], new boolean[2 * n - 1], n);
    }

    private static void helper(List<String> board, int row, boolean[] cols, boolean[] upperDiognal, boolean[] lowerDiognal, int n) {
        if (row == n) {
            System.out.print(board + " ");
        }
        for (int col = 0; col < n; col++) {
            int fillUpperDiognal = col - row + n - 1;
            int fillLowerDiognal = col + row;
            if (!cols[col] && !upperDiognal[fillUpperDiognal] && !lowerDiognal[fillLowerDiognal]) {
                char[] r = new char[n];
                Arrays.fill(r, '.');
                r[col] = 'Q';
                board.add(new String(r));
                cols[col] = true;
                upperDiognal[fillUpperDiognal] = true;
                lowerDiognal[fillLowerDiognal] = true;
                helper(board, row + 1, cols, upperDiognal, lowerDiognal, n);
                board.remove(board.size() - 1);
                cols[col] = false;
                upperDiognal[fillUpperDiognal] = false;
                lowerDiognal[fillLowerDiognal] = false;
            }
        }
    }
}