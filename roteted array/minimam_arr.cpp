/* Find Minimum in Rotated Sorted Array
Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times. */

#include<iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0,end=n-1,mid,ans=arr[0];

    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]>=arr[0]){
            st=mid+1;
        }
        else{
            ans=arr[mid];
            end=mid-1;
        }
    }
    cout<<"Minimum in Rotated Sorted Array : "<<ans;
}