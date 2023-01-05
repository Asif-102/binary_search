/**
* author: asif_102
* created: 2023-01-05 22:43:18
**/
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    vector<int> arr = {2, 6, 8, 10, 12, 14, 15, 18, 19, 28, 30};
    int low = 0;
    int high = arr.size() - 1;
    int target = 77;
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            ans = mid;
            break;
        }
        if(target > arr[mid]){
            low = mid + 1;
        }
        else if(target < arr[mid]){
            high = mid - 1;
        }
    }
    cout << ans;
    return 0;
}