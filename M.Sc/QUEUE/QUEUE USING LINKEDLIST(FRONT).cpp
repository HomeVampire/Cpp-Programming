#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
	int data;
	node* link;
};
class stk{
    node* top;
    public:
        stk(){
            top=NULL;
        }
        node* createnode();
        void push();
        void pop();
        void display();

};
node* stk::createnode(){
    int item;
    node* temp=new node();
    cout<<"Enter Data to PUSH:\t";
    cin>>item;
    if (temp!=NULL){
		temp->data=item;
        temp->link=NULL;
	}
    else{
        cout<<"Data is not inserted properly"<<endl;
	}
	return temp;
}
void stk::push(){
	node* temp=createnode();
	if (top==NULL){
		top=temp;
	}
    else{
	temp->link=top;
	top=temp;
	}
}
void stk::pop(){
	node* temp;
	if (top==NULL){
		cout<<"\nQueue Underflow"<<endl;
	}
	else {
		temp=top;
		node* p=top->link;
		while (p->link!=NULL){
			p=p->link;
			temp=temp->link;
		}
		temp->link=NULL;
		delete p;
	}
}
void stk::display(){
	struct node* temp;
	if (top==NULL){
		cout<<"\nQueue Underflow"<<endl;
	}
	else {
		temp=top;
		cout<<"Data of your Queue is:\t";
		while (temp != NULL){
			cout<<temp->data<<" ";
			temp=temp->link;
		}
		cout<<endl<<endl;
	}
}
int main(){
   int ch;
   stk a1;
   while(1){
        cout<<"1) Push in Queue"<<endl;
        cout<<"2) Pop from Queue"<<endl;
        cout<<"3) Display Queue"<<endl;
        cout<<"Press Any Key Exit"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>ch;
      switch(ch){
         case 1:{
            a1.push();
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

