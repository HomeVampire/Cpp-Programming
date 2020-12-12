//Data Insertion in Array
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
			int e,p,t=-1;
			cout<<"Enter Array elements for insert:"<<endl;
			cin>>e;
			cout<<"Enter Array Position:"<<endl;
			cin>>p;
			for(int i=n;i>=p;i--){
				arr[i]=arr[i-1];
			}
			arr[p-1]=e;
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
