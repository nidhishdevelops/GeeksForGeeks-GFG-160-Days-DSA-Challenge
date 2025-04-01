#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int FindSecondLargest(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
 
    for(int i=n-2;i>=0;i--){
        if(arr[i] != arr[n-1]){
            return arr[i];
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {10,12,4,57,8};
    cout<<FindSecondLargest(arr);
    return 0;
}