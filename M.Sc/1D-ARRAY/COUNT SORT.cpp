#include<iostream>
using namespace std;
		void counts(int *a, int n){
		    int temp=0;
		    for(int i=0;i<n;i++){
                if(temp<a[i]){
                    temp=a[i];
                }
		    }
		    int index[temp+1];
		    int m=temp;
		    for(int i=0;i<=temp;i++){
               index[i]=0;
		    }
		    for(int i=0;i<n;i++){
                temp=a[i];
                index[temp]=index[temp]+1;
		    }
            for(int i=1;i<=m;i++){
                index[i]=index[i]+index[i-1];
            }
            int arr[n];
            for(int i=0;i<n;i++){
                temp=a[i];
                int flag=index[temp]-1;
                arr[flag]=a[i];
                index[temp]=index[temp]-1;
            }
            for(int i=0;i<n;i++){
                cout<<arr[i]<<endl;
            }
		}

int main(){
     int *arr;
     int n;
	cout<<"Enter the length of the array\t";
     cin>>n;
     arr=new int[n];
     for(int i=0;i<n;i++){
          cout<<"Enter array element"<<endl;
          cin>>arr[i];
     }
     counts(arr, n);
	return 0;
}
