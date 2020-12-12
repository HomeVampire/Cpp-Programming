#include<iostream>
using namespace std;
		void quick(int *a, int low, int high){
            if(low<high){
                int i=low;
                int x=a[low];
                for(int j=low+1;j<=high;j++){
                    if(a[j]<=x){
                        i++;
                        int temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
                int temp=a[i];
                a[i]=a[low];
                a[low]=temp;
                quick(a,low,i-1);
                quick(a,i+1,high);
            }
		}


int main(){
     int *arr;
     int n;
     int w;
	cout<<"Enter the length of the array\t";
     cin>>n;
     arr=new int[n];
     for(int i=0;i<n;i++){
          cout<<"Enter array element"<<endl;
          cin>>arr[i];
     }
     quick(arr, 0, n-1);
     cout<<"The result is:\t";
     for(int i=0;i<n;i++){
          cout<<arr[i]<<"\t";
     }

	return 0;
}
