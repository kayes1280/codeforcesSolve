//insertionsort
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=1; i<n; i++){             //step 1: 9 5 1 4 3
        int current=arr[i];                 //5 9 1 4 3
    int j=i-1;
    while(arr[j]>current && j>=0){  //step 2:5 1 9 4 3
        arr[j+1]=arr[j];                    //1 5 9 4 3
        j--;                        //step 3:1 5 4 9 3
    }                                       //1 4 5 9 3
    arr[j+1]=current;
    }                               //step 4:1 4 5 3 9---1 4 3 5 9
    for(i=0; i<n; i++){                     //1 3 4 5 9
        cout<<arr[i]<<" ";
    }


    return 0;
}

