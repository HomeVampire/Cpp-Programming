//Binary Search Program
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
			int s,mid=0,lb=0,ub=n-1;
			cout<<"Enter Array elements for search:"<<endl;
			cin>>s;
			while(lb<=ub){
                mid=int(ub-lb)/2;
				if(arr[mid]==s)
				{
					cout<<"The Element Position is\t"<<mid+1;
					break;
				}
				else if(arr[mid]>s)
				{
					ub=mid-1;
				}
				else
				{
					lb=mid+1;
				}
			}
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
