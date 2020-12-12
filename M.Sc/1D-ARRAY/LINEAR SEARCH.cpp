//Linear Search Program
#include<iostream>
using namespace std;
class deep
{
	int n;
	int *arr;

	public:
		void getdata()
			{
			cout<<"Enter the length of the array";
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
		void searchdata(){
			int s,t=-1;
			cout<<"Enter Array elements for search:"<<endl;
			cin>>s;
			for(int i=0;i<n;i++){
				if(arr[i]==s)
				{
				t=i+1;
				break;
				}

			}
			if(t==-1)
			cout<<"The Element not found\t"<<endl;
			else
			cout<<"The Element Position is\t"<<t;
		}
};

int main()
{
	deep a1;
	a1.getdata();
	a1.putdata();
	a1.searchdata();
	return 0;
}
