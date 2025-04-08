#include<iostream>
#include<vector>

using namespace std;

void RotateArrayByD(vector<int> &arr,int d){
    int n = arr.size();
    vector<int> temp(n);

    for(int i=0;i<n-d;i++){
        temp[i] = arr[d+i];
    }

    for(int i=0;i<d;i++){
        temp[n-d+i] = arr[i];
    }

    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int d =2;
    int n = arr.size();

    RotateArrayByD(arr,d);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}