/*Merge two array
Before merge must delete the 3rd array and create the array again due to ambiguity */
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
		void mergearr(deep &a1, deep &a2){
            n=a1.n+a2.n;
            arr=new int[n];
            int j=0,k=0,i=0;
            while(j<a1.n && k<a2.n){
                    if(a1.arr[j]>a2.arr[k]){
                        arr[i++]=a2.arr[k++];
                    }
                    else{
                        arr[i++]=a1.arr[j++];
                    }
            }
            if(j<a1.n){
                while(j<a1.n){
                    arr[i++]=a1.arr[j++];
                }
            }
            if(k<a2.n){
                while(k<a2.n){
                    arr[i++]=a2.arr[k++];
                }
            }
        }
};

int main(){
	deep a1,a2,a3;
	a1.getdata();
	a2.getdata();
	a3.mergearr(a1,a2);
	a3.putdata();
	return 0;
}
