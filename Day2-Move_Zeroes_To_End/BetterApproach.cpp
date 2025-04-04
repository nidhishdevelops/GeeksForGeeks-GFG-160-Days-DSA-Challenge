#include<iostream>
#include<vector>

using namespace std;

void MoveZeroes(vector<int> &arr){
    int n = arr.size();
    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i]!= 0){
            arr[count++] = arr[i];
        }
    }

    while(count<n){
        arr[count++] = 0;
    }
}

int main(){
    vector<int> arr = {1,3,4,0,0,2,1,4,0};
    int n = arr.size();
    MoveZeroes(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}