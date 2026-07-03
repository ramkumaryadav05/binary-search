#include<iostream>
using namespace std;

int main(){
    int target;
    cout<<"enter the number"<<endl;
    cin>>target;
    int st=0,end=target,num=0,mid;

    while(st<=end){
        mid=st+(end-st)/2;
        if(mid*mid==target){
            num=mid;
            break;
        }else if(mid*mid<target){
            num=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<"the square root of "<<target<<" "<<"is "<<num;  
}