#include <iostream>
#include <stdlib.h>
using namespace std;
class qu{
    int stack[100];
    int n,f,r;
    public:
        qu(){
           n=4;
           f=-1;
	    	 r=-1;
        }
        void push(int x){
           if(r==n-1){
			cout<<"\n Data overflow occur";
		 }    
            else{
			if(f==-1){
				f++;			
			}
			stack[++r]=x;
            }
        }
        void pop(){
		if(f==-1)
            	cout<<"Queue is empty"<<endl;            
            else{
			if(f==r){
			int temp=stack[f];
			cout<<"POP element is:"<<temp<<endl;
                f=-1;
			 r=-1;
			}
			else{
				int temp=stack[f++];
				cout<<"POP element is:"<<temp<<endl;
			}
            
            }
        }
        void display() {
          if(r==-1) {
			cout<<"QUEUE is empty";
		}	
          else{      
			cout<<"QUEUE elements are:";
               for(int i=f; i<=r; i++)
                    cout<<stack[i]<<" ";
                    cout<<endl;
              }

        }
};
int main(){
   int ch, val;
   qu a1;
   while(1){
        cout<<"1) Push in QUEUE"<<endl;
        cout<<"2) Pop from QUEUE"<<endl;
        cout<<"3) Display QUEUE"<<endl;
        cout<<"Press Any Key Exit"<<endl;
        cout<<"Enter choice:..."<<endl;
        cin>>ch;
      switch(ch){
         case 1:{
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            a1.push(val);
            break;
         }
         case 2:{
            a1.pop();
            break;
         }
         case 3:{
            a1.display();
            break;
         }
         default: {
            exit(0);
         }
      }
   }
      return 0;
}
