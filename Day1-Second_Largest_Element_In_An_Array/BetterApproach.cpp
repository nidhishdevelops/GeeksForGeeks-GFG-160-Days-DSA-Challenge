//Iterating through the array twice:First time is to find the largest and second time is to find second largest.
#include<iostream>
#include<vector>

using namespace std;

int FindSecondLargest(vector<int> &arr){
    int n = arr.size();
    int largest=-1,secondlargest=-1;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]>secondlargest && arr[i] != largest){
            secondlargest=arr[i];            
        }
    }
    
    return secondlargest;
}

int main(){
    vector<int> arr = {13,4,5,2,19};
    cout<<FindSecondLargest(arr);
    return 0;
}