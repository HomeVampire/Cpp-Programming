#include<iostream>
using namespace std;
class deep
{
	int r,c;
	int **arr;

	public:
		void getdata(){
                        int i,j;
                        cout<<"Enter number of nodes:\t";
                        cin>>c;
                        r=c;
                        arr=new int*[r];
                        for(i=0;i<r;i++){
                            arr[i]=new int[c];
                        }
                        cout<<"Enter elements for the matrix:\n";
                        for(i=0; i<r; i++){
                            for(j=0; j<c; j++){
                                    cin>>arr[i][j];
                            }
                        }
		}
		void putdata(){
			cout<<"The Matrix is:"<<endl;
			for(int i=0;i<r;i++){
                		for(int j=0;j<c;j++){
                    			cout<<arr[i][j];
                		}
                		cout<<endl;
			}
		}
		void degree(){
            		int count[r];
			for(int i=0;i<r;i++){
				int temp=0;
                		for(int j=0;j<c;j++){
                    			if(arr[i][j]==1){
						temp++;
					}
                		}
                		count[i]=temp;
			}
			cout<<"The Degrees are:\t";
			for(int i=0;i<r;i++){
				cout<<"A"<<i+1<<" : "<<count[i]<<"\t";
			}
		}
};

int main()
{
	deep a1;
	a1.getdata();
	a1.putdata();
	a1.degree();
	return 0;
}
