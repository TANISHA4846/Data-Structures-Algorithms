#include <bits/stdc++.h>
using namespace std;
//Slighlt better than merge sort
 //KEY IDEA: DIVIDE & CONQUER ALGO...Pick a pivot, put it in its correct place then put smaller on left & larger on right side. Repeat these steps
 //TIME COMPLEXITY: O(Nlog2(N)) best/avg/worst
 //Space complexity: O(1)

//Implementation
int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quick_sort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}


//EXECUTION
int main(){
    vector<int> nums;
    int n;
    cout<<"Enter number of values to be entered: "<<endl;
    cin>>n;
    //Taking input
    for(int i=0;i<n;i++){
        int val;
        cout<<"Enter the value: "<<endl;
        cin>>val;
        nums.push_back(val);
    }
    vector<int> res = quick_sort(nums);

    // Print the sorted array
    cout<<"Sorted aaray after insertion sort"<<endl;
    cout << "Sorted array: ";
    for (int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
     cout<<"THANKYOU"<<endl;
    return 0;
}