#include <bits/stdc++.h>
using namespace std;

void heapify(int ar[], int num, int i)
{
    int larg = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < num && ar[l] > ar[larg])
        larg = l;
    if (r < num && ar[r] > ar[larg])
        larg = r;
    if (larg != i) {
        swap(ar[i], ar[larg]);

        heapify(ar, num, larg);
    }
}

void Build_Heap(int arr[],int n){
    for(int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void Heap_Sort(int arr[], int n)
{
    Build_Heap(arr,n);
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
    int num;
    time_t start, ennd;
    cout<<"Enter the size of an array: ";
    cin>>num;
    int *arr= new int[num];
    for(int i=0;i<num;i++){
         arr[i] =  (rand() % 100);
    }
    cout<<"Array before sorting"<<endl;
    for(int i=0;i<num;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    time(&start);
    Heap_Sort(arr,num);
    time(&ennd);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<num;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
