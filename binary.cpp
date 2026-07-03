#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0,end=n-1,target=8,index=0,mid;
    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==target){
            index=mid;
            break;
        }else if(arr[mid]<target){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<"found at index"<<" "<<index;
}