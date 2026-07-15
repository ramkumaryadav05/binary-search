/* Find Minimum in Rotated Sorted Array II

Example 1:

Input: nums = [1,3,5]
Output: 1
Example 2:

Input: nums = [2,2,2,0,1]
Output: 0
*/




#include<iostream>
using namespace std;

int main(){
    int arr[]={2,2,2,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int st=0,end=n-1,mid;
    while(st<end){
        mid=st+(end-st)/2;

        //right side check
        if(arr[mid]>arr[end]){
            st=mid+1;
        }
        //duplicate check
        else if(arr[mid]==arr[end]){
            end--;
        }
        //find min element 
        else{
            end=mid;
        }
    }
    cout<<"minimum element in roteted array :- "<<arr[st];

    return 0;
}