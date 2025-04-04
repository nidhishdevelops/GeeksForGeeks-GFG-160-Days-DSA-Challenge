#include<iostream>
#include<vector>

using namespace std;

void MoveZeroes(vector<int> &arr){
    int n = arr.size();
    int count = 0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main(){
    vector<int> arr = {1,2,0,0,0,2,0,4,0};
    int n = arr.size();
    MoveZeroes(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}