//Data Deletion from array from given position
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
		void deletion(){
			int p,t=-1;
			cout<<"Enter Array Position You want to remove:"<<endl;
			cin>>p;
			for(int i=p-1;i<n;i++){
				arr[i]=arr[i+1];
			}
			n=n-1;
		}
};

int main(){
	deep a1;
	a1.getdata();
	a1.putdata();
	a1.deletion();
	cout<<"Array after Deletion:";
	a1.putdata();
	return 0;
}
