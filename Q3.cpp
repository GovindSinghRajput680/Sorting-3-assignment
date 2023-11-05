#include<iostream>
using namespace std;
int main(){
    //Q 3:
int n;
cout<<"Enter size of array : ";
cin>>n;
int arr[n];
cout<<"Enter elements of array : ";
for(int i =0;i<n;i++) cin>>arr[i];
int k;
cout<<"Enter value of k : ";
cin>>k;
for(int i =0;i<k;i++){int min = arr[i];
                        int mindex = i;
    for(int j =i+1;j<n;j++){
        if(arr[j]<min)  min = arr[j],mindex = j;
    }
    swap(arr[i],arr[mindex]);
}
cout<<"kth smallest element is : "<<arr[k-1];









}