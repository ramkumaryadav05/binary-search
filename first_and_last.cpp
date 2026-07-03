#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,4,4,5,5,5,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0,end=n-1,first=-1,last=-1,target=5,mid;
    //find first
    while(st<=end){
        mid=st+(end-st);
        if(arr[mid]==target){
            first=mid;
            end=mid-1;
        }else if(arr[mid]<target){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    //find last
    st=0,end=n-1;
    while(st<=end){
        mid=st+(end-st);
        if(arr[mid]==target){
            last=mid;
            st=mid+1;
        }else if(arr[mid]<target){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }

    cout<<"found at first index"<<" "<<first<<" "<<"found at last index"<<" "<<last;

}