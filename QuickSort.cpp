#include<iostream>
#include<vector>
using namespace std;

int partion(vector<int> &arr,int st,int end){ // called for getting the pivot index 
    int idx = st - 1; // setting the idx at -1.
    int pivot = arr[end]; // chosing the last element as a pivot 
    for(int j=st;j<end;j++){ // a loop from start to end
        if(arr[j] <= pivot){ // check weather the array element is less or eqaul to pivot to swap
            idx++; // increasing the index for storing the lesser elements
            swap(arr[end],arr[idx]); // swaping the elements to the idx for the seeting the small elements to the left 
        }
    } // now repalcing the pivotat its place
    idx++; // increasing the one to replace the pivot at that place 
    swap(arr[end],arr[idx]); // replacing the pivot and the existing element
    return idx; //retusingthe index for the partion
}

void quickSort(vector<int> &v,int st,int end){ // getting the whole array, its starting and its ending
    if(st<end){ // checking for that codition where start is less than end of array
        int pivIdx = partion(v,st,end); // getting the pivot index from the partion function by passing the same arguments as the sort function needs 
        quickSort(v,st,pivIdx-1); // calling the function recusivly for the left elements or the small elements then the pivot choosen
        quickSort(v,pivIdx+1,end); // calling the function recusivly for the right elements or the larger elements than the pivot 
    }
}

int main(){
    vector<int>v = {12,31,35,8,32,17}; // the vector to be passed as an argument
    quickSort(v,0,v.size()-1); // calling the function for sorting
    for(int val : v) // printing after sorting
    {
        cout<<val<<" ";
    }
    return 0;
}