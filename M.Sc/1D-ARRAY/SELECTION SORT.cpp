/*Selection sorting
Select minimum from the string after ith position and replace with ith position */
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
		void selectionsort(){

			for(int i=0;i<n;i++){
				int s=i;
                for(int j=i;j<n;j++){

                    if(arr[s]>arr[j]){
                        s=j;
                    }
                }
				int min=arr[i];
				arr[i]=arr[s];
				arr[s]=min;
			}
		}
};

int main(){
	deep a1;
	a1.getdata();
	a1.putdata();
	a1.selectionsort();
	a1.putdata();
	return 0;
}
