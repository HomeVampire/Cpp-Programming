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
                        for(i=0; i<r; i++){
                            for(j=0; j<c; j++){
                                    arr[i][j]=0;
                            }
                        }
                        for(i=0; i<r; i++){
                        	int j;
                            	cout<<"Enter no. of nodes connected with "<<i+1<<":\t";
                            	cin>>j;
                            	for(int k=0; k<j; k++){
                            		int temp;
                            		cout<<"enter node no.";
                            		cin>>temp;
                            		arr[i][temp-1]=1;
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
		void degreeout(){
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
			cout<<"The Out Degrees are:\t";
			for(int i=0;i<r;i++){
				cout<<"A"<<i+1<<" : "<<count[i]<<"\t";
			}
		}
		void degreein(){
            		int count[r];
			for(int i=0;i<r;i++){
				int temp=0;
                		for(int j=0;j<c;j++){
                    			if(arr[j][i]==1){
						temp++;
					}
                		}
                		count[i]=temp;
			}
			cout<<"\nThe In Degrees are:\t";
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
	a1.degreeout();
	a1.degreein();
	return 0;
}
