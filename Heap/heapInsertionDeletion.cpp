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

void Insert(int *arr, int item, int num){
    num++;
    arr[num]=item;
    int i =num, par=i/2;
    while(i>0 && arr[par]<item){
        arr[i]=arr[par];
        i=par;
        par=i/2;
    }
    arr[i]=item;
}

int Delete_Max(int arr[], int num){
    int item;
    if(num==0)
        return -1;
    else{
        item=arr[0];
        num--;
        arr[0]=arr[num];
        heapify(arr,num,0);
    }
    return item;
}

int main(){
    int num;
    cout<<"Enter the size of an array: ";
    cin>>num;
    int *arr= new int[num];
    for(int i=0;i<num;i++){
         arr[i] =  (rand() % 100);
    }
    cout<<"Array before creating heap"<<endl;
    for(int i=0;i<num;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    Build_Heap(arr,num);
    cout<<"After Creating Heap"<<endl;
    for(int i=0;i<num;i++){
         cout<<arr[i]<<" ";
    }
    int item;
    cout<<endl<<"Enter item to be inserted: ";
    cin>>item;
    Insert(arr,item, num);
    cout<<"After Inserting Element to the Heap"<<endl;
    for(int i=0;i<num;i++){
         cout<<arr[i]<<" ";
    }
    Delete_Max(arr,num);
    cout<<endl<<"Element Deleted: "<<Delete_Max(arr,num)<<endl;
    cout<<"After deleting max element from Heap"<<endl;
    for(int i=0;i<num;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
