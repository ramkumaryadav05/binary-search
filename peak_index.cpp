#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,4,6,8,10,14,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int st = 0;
    int end = n - 1;

    while(st < end) {
        int mid = st + (end - st)/2;

        if(arr[mid] < arr[mid+1]) {
            st = mid + 1;
        }
        else {
            end = mid;
        }
    }

    cout << "Peak Index : " << st << endl;
    cout << "Peak Element : " << arr[st] << endl;

    return 0;
}