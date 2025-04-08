#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void ReversalApproach(vector<int> &arr,int d){
    int n = arr.size();

    reverse(arr.begin(),arr.begin()+d);

    reverse(arr.begin()+d,arr.end());

    reverse(arr.begin(),arr.end());
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    ReversalApproach(arr,2);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}