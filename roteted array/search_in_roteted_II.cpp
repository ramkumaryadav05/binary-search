/* Search in Rotated Sorted Array II
Example 1:

Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true
Example 2:

Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false */


#include<iostream>
using namespace std;

int main(){
    int arr[]={2,5,6,0,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0,end=n-1,mid;
    int target=0;

    while(st<=end){
        mid=st+(end-st)/2;
        //find element
        if(arr[mid]==target){
            cout<<"true"<<endl;
            return 0;
        }
        // duplicate check
        else if(arr[st]==arr[mid] && arr[mid]==arr[end]){
            st++;
            end--;
        }
        //left check
        else if(arr[st]<=arr[mid]){
            if(arr[st]<=target && target<=arr[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        //right check
        else{
            if(arr[mid]<=target && target<=arr[end]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    cout<<"false"<<endl;
    return 0;
}