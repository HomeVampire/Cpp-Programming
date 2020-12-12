//Array print in Dynamic way or Traverse an array
#include<iostream>
using namespace std;
class deep{
	int n;
	int *arr;

	public:
		void getdata(){
			cout<<"Enter the length of the array\t";
			cin>>n;
			arr=new int[n];
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
};

int main(){
	deep a1;
	a1.getdata();
	a1.putdata();
	return 0;
}
