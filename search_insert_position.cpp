#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,5,6};
    int target;
    cout<<"enter a target number"<<endl;
    cin>>target;
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0,end=n-1,mid,index=0;

    while (st<=end)
    {
        mid=st+(end-st)/2;
        if(arr[mid]==target){
            index=mid;
            break;
        }else if(arr[mid]<target){
            st=mid+1;
        }else{
            index=mid;
            end=mid-1;
        }
    }
    cout<<"found at element in index no"<<" "<<index;

    return index;

    
}