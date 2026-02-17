#include<bits/stdc++.h>
using namespace std;
//Sum & product of an array

void sum_product_OfArray(int arr[],int sz){
int sum=0,product=1;
for(int i=0;i<sz;i++){
    sum+=arr[i];
    product*=arr[i];
}
cout<<sum<<" "<<product<<endl;
}

//Maximum number of an array
int maxNUm(int arr[],int sz)
{
    int mx=INT_MIN;
    for(int i=0;i<sz;i++){
        mx=max(arr[i],mx);
    }
    return mx;
}
//Minimum number of an array
int minNUm(int arr[],int sz)
{
    int mn=INT_MAX;
    for(int i=0;i<sz;i++){
        mn=min(arr[i],mn);
    }
    return mn;
}
//Swap min and max number of an array
void swapMinMax(int arr[],int sz){
int mn=minNUm(arr,sz);
int mx=maxNUm(arr,sz);

for(int i=0;i<sz;i++){
    for(int j=0;j<sz;j++){
        if(arr[i]==mn&&arr[j]==mx){
            swap(arr[i],arr[j]);
            return;
        }
    }
}

}
//Unique Number among all numbers of array elements
void uniqueNum(int arr[],int sz){
    int uq=0;

for(int i=0;i<sz;i++){
    for(int j=0;j<sz;j++){
        if(arr[i]!=arr[j]){
            uq=arr[i];
        }
    }

}
cout<<uq<<endl;

}

//Intersected numbers of two arrays, intersected number means the common numbers of two arrays
void intersection(int arr1[],int sz1,int arr2[],int sz2){

for(int i=0;i<sz1;i++){
    for(int j=0;j<sz2;j++){
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
        }
    }
}

}

int main(){
int arr1[]={1,2,3,1,2,3,4};
int sz1=sizeof(arr1)/sizeof(int);
int arr2[]={1,2,3};
int arr3[]={1,4,8,2};
int sz3=sizeof(arr3)/sizeof(int);
int sz2= sizeof(arr2)/sizeof(int);
//sum_product_OfArray(arr2,sz2);
//swapMinMax(arr3,sz3);
/*for(int i=0;i<sz3;i++){
    cout<<arr3[i]<<" ";
}
*/
intersection(arr3,sz3,arr2,sz2);

return 0;
}
