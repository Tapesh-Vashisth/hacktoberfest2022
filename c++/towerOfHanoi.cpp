#include <iostream>
using namespace std;
void tower_of_hanoi(int n, char init, char aux, char target)
{
    if (n == 1)
    {
        cout << "Moving disk " << n << " from " << init << " to " << target << endl;
        return;
    }
    else
    {
        tower_of_hanoi(n - 1, init, target, aux);
        cout << "Moving Disk " << n << " from " << init << " to " << target << endl;
        tower_of_hanoi(n - 1, aux, init, target);
    }
}
int main()
{
    int n;
    cout << "\nNo. of disks :";
    cin >> n;
    cout << endl;
    tower_of_hanoi(n, 'A', 'B', 'C');
    cout << "\nTower of Hanoi is solved" << endl;
    return 0;
}