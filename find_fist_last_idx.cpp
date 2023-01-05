/**
* author: asif_102
* created: 2023-01-05 23:10:29
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);
    vector<int> arr = { 1,2,3,3,3, 4,5,6 };
    int first_idx = -1;
    int target = 77;
    int low = 0;
    int high = arr.size()-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            first_idx = mid;
            high = mid-1;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
        else if(target < arr[mid]){
            high = mid - 1;
        }
    }

    int last_idx = -1;
    low = 0;
    high = arr.size()-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            last_idx = mid;
            low = mid+1;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
        else if(target < arr[mid]){
            high = mid - 1;
        }
    }

    cout << first_idx << " " << last_idx;
    return 0;
}