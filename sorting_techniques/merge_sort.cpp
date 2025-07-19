#include <bits/stdc++.h>
using namespace std;
//Key idea: Recursive approach, divide & merge, playing around indexes
//TIME COMPLEXITY: O(Nlog2(N)) best/average/worst
//SPACE COMPLEXITY: O(N) for worst case

//FUNCTION IMPLEMENTATION
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;      
    int right = mid + 1;  

    //storing elements in the temporary array in a sorted manner

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left 

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left 
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // final transfer from temp---->arr
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

//Base function for merge sort
vector<int> merge_sort(vector<int> &arr, int low, int high) {
    if (low >= high) return arr;
    int mid = (low + high) / 2 ;
    merge_sort(arr, low, mid);  // left half
    merge_sort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
    return arr;
}


//CODE IMPLEMENTATION
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
    vector<int> res = merge_sort(nums,0,n-1);

    // Print the sorted array
    cout<<"Sorted aaray after insertion sort"<<endl;
    cout << "Sorted array: ";
    for (int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
     cout<<"THANKYOU"<<endl;
    return 0;

}