#include<iostream>
#include<vector>

using namespace std;

void MoveZeros(vector<int> &arr){
    int n = arr.size();
    vector<int> temp(n);

    int j=0;

    for(int i =0;i<n;i++){
        if(arr[i]!= 0){
            temp[j++] = arr[i];
        }
    }

    while(j<n){
        temp[j++]=0;
    }

    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }

}

int main(){
    vector<int> arr = {1,3,4,0,2,3,4,0,3,0,9};
    MoveZeros(arr);

    for(int num: arr){
        cout<<num<<" ";
    }
    return 0;
}