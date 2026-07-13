/* Search in Rotated Sorted Array
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4 */

#include<iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0,end=n-1,target=0,mid;
    int ans=-1;

    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        //left side 
        else if(arr[st]<=arr[mid]){
            if(arr[st] <= target && target < arr[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        //right side
        else{
            if(arr[mid] < target && target <= arr[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }
    cout<<"target index :-"<<ans;
    return 0;
}