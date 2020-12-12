#include<iostream>
using namespace std;

void insertionsort(float *arr, int n){
     for(int i=0;i<n;i++){
          float temp=arr[i];
          int j=i;
          while(j>0&&temp<arr[j-1]) {
               arr[j]=arr[j-1];
               j--;
          }
          arr[j]=temp;
     }
}

void bucket(float *a, int n){
     float arr[n][n];
     int index[n]={0};
     for(int i=0;i<n;i++){
          int temp1=n*a[i];
          int temp2=index[temp1];
          arr[temp1][temp2]=a[i];
          index[temp1]++;
     }
     for(int i=0;i<n;i++){
          int temp=index[i];
          float test[temp];
          for(int j=0;j<temp;j++){
               test[j]=arr[i][j];
          }
          insertionsort(test,temp);
          for(int j=0;j<temp;j++){
               arr[i][j]=test[j];
          }
     }
     int k=0;
     for(int i=0;i<n;i++){
          int temp=index[i];
          for(int j=0;j<temp;j++){
               a[k++]=arr[i][j];
          }
     }

}

int main(){
     int n;
	cout<<"Enter the length of the array";
     cin>>n;
     float a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     bucket(a,n);
     cout<<"Array elements are:"<<endl;
     for(int i=0;i<n;i++){
          cout<<a[i]<<"\t";
     }
     cout<<"\n";
	return 0;
}
