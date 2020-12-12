/*Bubble sorting
Select jth and (j+1)th element and swap if jth element is larger */
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
		void bubblesort(){

			for(int i=0;i<n;i++){
                for(int j=0;j<n-i;j++){
                    if(arr[j]>arr[j+1]){
                        int s=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=s;
                    }
                }
			}
		}
};

int main(){
	deep a1;
	a1.getdata();
	a1.bubblesort();
	a1.putdata();
	return 0;
}
