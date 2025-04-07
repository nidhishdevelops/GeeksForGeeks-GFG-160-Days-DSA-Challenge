#include<iostream>
#include<vector>

using namespace std;

void ReverseArray(vector<int> &arr,int l,int r){
    if(l>=r)
        return;
    
    swap(arr[l],arr[r]);

    ReverseArray(arr,l+1,r-1);
}

int main(){
    vector<int> arr = {1,4,5,2,2};
    ReverseArray(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "; 
    }
}