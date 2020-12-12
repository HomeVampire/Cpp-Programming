//Data Insertion in Sorted Array
#include<iostream>
using namespace std;
#define MAX 100
class deep{
	int n;
	int *arr;

	public:
		void getdata(){
			cout<<"Enter the length of the array";
			cin>>n;
			arr=new int[MAX];
			for(int i=0;i<n;i++){
				cout<<"Enter array element"<<endl;
				cin>>arr[i];
			}
		}
		void putdata(){
			cout<<"Array elements are:"<<endl;
			for(int i=0;i<n;i++){
				cout<<arr[i]<<"\t";
			}
			cout<<"\n";
		}
		void insertion(){
			int i,j,e,p=0;
			cout<<"Enter Array elements for insert:"<<endl;
			cin>>e;
			for(j=0;j<n;j++){
				if(arr[j]>e){
					break;
				}
			}

			for(i=n;i>j;i--){
				arr[i]=arr[i-1];
			}
			arr[j]=e;
			n=n+1;
		}
};

int main(){
	deep a1;
	a1.getdata();
	a1.putdata();
	a1.insertion();
	cout<<"Array after insertion is:";
	a1.putdata();
	return 0;
}
