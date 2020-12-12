/*Insertion sorting
Select key element in ith position and move it to left untill it gets the correct position */
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
		void insertionsort(){
     for(int i=0;i<n;i++){
    /*storing current element whose left side is checked for its
             correct position .*/
      int temp=arr[i];
      int j=i;
       /* check whether the adjacent element in left side is greater or
            less than the current element. */
          while(j>0&&temp<arr[j-1]) {
           // moving the left side element to one position forward.
                arr[j]=arr[j-1];
                j--;
           }
         // moving current element to its  correct position.
           arr[j]=temp;
     }
}
};

int main()
{
	deep a1;
	a1.getdata();
	a1.insertionsort();
	a1.putdata();
	return 0;
}
