#include<iostream>
using namespace std;
		void mergearr(int *a, int low, int high, int mid){
            int temp[high-low+1];
            int j=low;
            int k=mid+1;
            int i=0;
            while(j<=mid && k<=high){
                    if(a[j]>a[k]){
                        temp[i++]=a[k++];
                    }
                    else{
                        temp[i++]=a[j++];
                    }
            }
            if(j<=mid){
                while(j<=mid){
                    temp[i++]=a[j++];
                }
            }
            if(k<=high){
                while(k<=high){
                    temp[i++]=a[k++];
                }
            }
            j=0;
            for(i=low;i<=high;i++){
               a[i]=temp[j++];
            }
        }
void mergeSort(int *a, int low, int high){
	int mid;
	if (low < high){
		mid=(low+high)/2;
		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);
		mergearr(a, low, high, mid);
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
     mergeSort(arr, 0, n-1);
     cout<<"The result is:\t";
     for(int i=0;i<n;i++){
          cout<<arr[i]<<"\t";
     }

	return 0;
}
