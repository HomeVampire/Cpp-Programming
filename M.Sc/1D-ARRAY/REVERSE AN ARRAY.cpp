//Reverse an array
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
		void reversedata(){
			int temp;
			int d=n-1;
			cout<<"Array elements are:"<<endl;
			for(int i=0;i<n/2;i++){
				temp=arr[i];
				arr[i]=arr[d-i];
				arr[d-i]=temp;
			}
			cout<<"\n";
		}
};

int main(){
	deep a1;
	a1.getdata();
	a1.putdata();
	a1.reversedata();
	a1.putdata();
	return 0;
}
