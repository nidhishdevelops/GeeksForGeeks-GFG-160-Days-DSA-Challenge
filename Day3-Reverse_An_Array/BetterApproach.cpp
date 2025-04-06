#include<iostream>
#include<vector>

using namespace std;

void ReverseArray(vector<int> &arr){
   int left=0;
   int right= arr.size()-1;
   
   while(left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;
   }
}

int main(){
    vector<int> arr = {13,4,5,7,8,9};
    ReverseArray(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}