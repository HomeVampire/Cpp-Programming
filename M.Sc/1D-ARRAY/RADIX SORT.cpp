#include<iostream>
using namespace std;
		void counts(int *a, int n,int p){
		    int index[10]={0};
		    for(int i=0;i<n;i++){
                int temp=(a[i]/p)%10;
                index[temp]=index[temp]+1;
		    }
            for(int i=1;i<10;i++){
                index[i]=index[i]+index[i-1];
            }
            int arr[n];
            for(int i=n-1;i>=0;i--){
                int temp=(a[i]/p)%10;
                int flag=index[temp]-1;
                arr[flag]=a[i];
                index[temp]=index[temp]-1;
            }
            for(int i=0;i<n;i++){
                a[i]=arr[i];
            }
		}
void radix(int *a, int n){
     int m=a[0];
     for(int i=0;i<n;i++){
          if(m<a[i]){
               m=a[i];
          }
     }
     for(int i=1;(m/i)>0;i=i*10){
          counts(a, n, i);
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
     radix(arr, n);
     for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
             cout << endl; 
	return 0;
}
