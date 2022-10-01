#include<bits/stdc++.h>
using namespace std ;



bool help(int arr[][10],int i,int j,int n){
    // ab check krenge ki us row mai koi queen to nahi hai 
    for(int row =0 ;row<i;row++){
        if(arr[row][j]==1){
            return false;
        }
    } 
    int x=i;int y=j;
    // checking left diagonal
    while(x>=0&&y>=0){
        if(arr[x][y]==1){
            return false;
        }

        x--;y--;
    }
    x=i;y=j;
    // checking the right diaognal
    while(x>=0&&y<n){
        if(arr[x][y]==1){
            return false;
        }
        x--;y++;
    }
    return true;
}
int c=0;
bool solve(int arr[][10],int n,int i,string s){
    if(i==n){
        arr[n][n]=1;
        c++;
        cout<<"CASE : "<<c<<endl;
        cout<<endl;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // arr[i][j]=1;
                if(arr[i][j]==1){
                    cout<<" Q ";
                }
                else{
                    cout<<" _ ";
                }

            }
            cout<<endl;
        }
        cout<<endl;
        
        return false ;
    }


    // ab check karenge har column ke liye 
    // kyuki ki ye obvious hai ki har row mai ek hi queen hogi 
    for(int j =0 ;j<n;j++){
        if(help(arr,i,j,n)){
            arr[i][j]=1;
            // now we will chec kcan we put in next 
            bool can_we=solve(arr,n,i+1,s+"a");
            if(can_we){
                return true;
            }
            // agar vo position sahi nahi hai to 
            arr[i][j]=0; // yaha humne backtrck kar liya hai 
            
            }

    }

// agar kahi nahi rakh pa rahe 
return false ;

}





int main(){
    int n;
    cin >>n;
    int arr[10][10]={0};
    string s;
    solve(arr,n,0,s);

} 