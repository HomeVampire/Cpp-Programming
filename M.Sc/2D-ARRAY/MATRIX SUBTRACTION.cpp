//Addition of Two Matrix Using Dynamic memory allocation
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
		void subt(deep &a1){
            if(a1.r!=r && a1.c!=c){
                cout<<"Matrix Addition cannot Possible";
            }
            else{
                cout<<"The New Matrix is:"<<endl;
                for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                        cout<<arr[i][j]-a1.arr[i][j];
                    }
                cout<<endl;
                }
            }
		}
};

int main()
{
	deep a1,a2;
	a1.getdata();
	a1.putdata();
	a2.getdata();
	a2.putdata();
	a2.subt(a1);
	return 0;
}
