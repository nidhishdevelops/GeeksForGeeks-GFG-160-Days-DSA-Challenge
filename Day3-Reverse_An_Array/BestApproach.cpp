#include<iostream>
#include<vector>

using namespace std;

void ReverseArray(vector<int> &arr){
    for(int i=0;i<(arr.size())/2;i++){
        swap(arr[i],arr[arr.size()-i-1]);
    }
}

int main(){
    vector<int> arr = {1,4,6,7,8};
    ReverseArray(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

