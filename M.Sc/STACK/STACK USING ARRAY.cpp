#include <iostream>
#include <stdlib.h>
using namespace std;
class st{
    int stack[100];
    int n, top;
    public:
        st(){
            n=100;
            top=-1;
        }
        void push(int x){
            if(top>=n-1)
                cout<<"Stack Overflow"<<endl;
            else
                stack[++top]=x;
        }
        void pop(){
            if(top<=-1)
                cout<<"Stack Underflow"<<endl;
            else{
            cout<<"The popped element is "<< stack[top] <<endl;
            top--;
            }
        }
        void display() {
            if(top>=0) {
                cout<<"Stack elements are:";
                for(int i=top; i>=0; i--)
                    cout<<stack[i]<<" ";
                    cout<<endl;
                }
            else
                cout<<"Stack is empty";
        }
};
int main(){
   int ch, val;
   st a1;
   while(1){
        cout<<"1) Push in stack"<<endl;
        cout<<"2) Pop from stack"<<endl;
        cout<<"3) Display stack"<<endl;
        cout<<"Press Any Key Exit"<<endl;
        cout<<"Enter choice: "<<endl;
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
