#include<iostream>
using namespace std;

void selectionsort (int arr[],int n)
{
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

    void printarr(int arr[],int n)
    {
        for(int i=0; i<n; i++){
            cout<<arr[i]<<endl;
        }
    }

int main(){
    int arr[]={5,2,6,9,8,7};
    int n=6;

     selectionsort(arr,n);
     printarr(arr,n);

    return 0;

}
