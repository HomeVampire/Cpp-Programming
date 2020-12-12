//Multiplication of Two Matrix Using Dynamic memory allocation
#include<iostream>
using namespace std;
class deep
{
	int r,c;
	int **arr;

	public:
		void getdata(){
            int i,j;
            cout<<"Enter Row and Column:";
            cin>>r>>c;
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
		void multi(deep &a1, deep &a2){
		    int sum=0;
		    delete arr;
		    arr=new int*[a1.r];
                for(int i=0;i<a1.r;i++){
                    arr[i]=new int[a2.c];
                }
		    if(a1.c!=a2.r)
                cout<<"The matrices can't be multiplied with each other."<<endl;
            else{
                 for(int i=0;i<a1.r;i++){
                    for(int j=0;j<a2.c;j++){
                        for(int k=0;k<a1.c;k++){
                            sum=sum+(a1.arr[i][k]*a2.arr[k][j]);
                        }
                        arr[i][j]=sum;
                        sum=0;
                    }
                }
                cout<<"The new Matrix is:"<<endl;
                for(int i=0;i<a1.r;i++){
                    for(int j=0;j<a2.c;j++){
                        cout<<arr[i][j];
                    }
                    cout<<endl;
                }
			}
		}
};

int main()
{
	deep a1,a2,a3;
	a1.getdata();
	a1.putdata();
	a2.getdata();
	a2.putdata();
	a3.multi(a1,a2);
	return 0;
}
