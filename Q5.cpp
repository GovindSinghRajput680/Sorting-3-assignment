#include<iostream>
#include<climits>
using namespace std;
// Q 5 : 
float max(float a,float b){
    if(a>b) return a;
    return b;
}
float min(float a,float b){
    if(a>b) return b;
    return a;
}

int main(){int n;
cout<<"Enter the size : ";
cin>>n;
int arr[n];
cout<<"Enter Elements : ";
for(int i =0;i<n;i++) cin>>arr[i];
/*(a1+a0-2k)(a1-a0)>=0
if a1>a0:
    k<=(a1+a2)/2
else if a1<a0:
    k>=(a1+a2)/2
*/
float kmin = INT_MIN;
float kmax = INT_MAX;
for(int i =0;i<n-1;i++){
    if(arr[i+1]>arr[i]) kmax = min(kmax,((arr[i+1]+arr[i])/2.0));
    else kmin = max(kmin,((arr[i+1]+arr[i])/2.0));
    if(kmax<kmin) {cout<<"NOT POSSIBLE";
                    break;}
}
if(kmin == int(kmin) && kmin != int(kmax)) cout<<"Range for k = ["<<kmin<<","<<(int)kmax<<"]";
else if(kmin == int(kmax)) cout<<"only one value for k = "<<int(kmax);
else if(kmin != int(kmin) && kmin < kmax) cout<<"Range for k = "<<"["<<int(kmin)+1<<","<<int(kmax)<<"]";



}