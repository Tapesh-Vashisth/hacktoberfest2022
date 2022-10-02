#include<iostream>
using namespace std;

int main(){
   int i, j, temp, pass=0;
   int a[10]={10,2,0,14,43,25,18,1,5,45};
   cout<<"Input list ...\n";

   for(i=0; i<10; i++) 
      cout <<a[i]<<"\t";
   
   cout<<endl;

   for(i=0; i<10; i++){
      for(j = i+1; j<10; j++)
         if(a[j] < a[i]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      
      pass++;
   }

   cout <<"Sorted Element List ...\n";

   for(i=0; i<10; i++)
      cout <<a[i]<<"\t";

   cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;

   return 0;
}

// 2nd method
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array "<<endl;
    cin>>n;
    int arr[n],i,j,pass;
    cout<<"Enter the elements"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Original Array : "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
           if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        pass++;
    }
    cout<<"New Array : "<<endl;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Number of pass "<<pass;
    return 0;
}
