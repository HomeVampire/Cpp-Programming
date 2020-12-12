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
        node* createnode(int);
        void push(int);
        void display();
        void rev(stk);

};
node* stk::createnode(int item){
     node* temp=new node();
    if (temp!=NULL){
		temp->data=item;
        temp->link=NULL;
	}
    else{
        cout<<"Data is not inserted properly"<<endl;
	}
	return temp;
}
void stk::push(int item){
	node* temp=createnode(item);
	if (top==NULL){
		top=temp;
	}
    else{
	temp->link=top;
	top=temp;
	}
}
void stk::display(){
	struct node* temp;
	if (top==NULL){
		cout<<"\nStack Underflow"<<endl;
	}
	else {
		temp=top;
		cout<<"Data of your stack is:\t";
		while (temp != NULL){
			cout<<temp->data<<" ";
			temp=temp->link;
		}
		cout<<endl<<endl;
	}
}
void stk::rev(stk a1){

     node *temp=NULL;
     if (a1.top==NULL){
		cout<<"Data Underflow"<<endl;
	}
	else {
          while(a1.top!=NULL){
               temp=a1.top;
               a1.top=a1.top->link;
               temp->link=NULL;
               if(top==NULL){
                    top=temp;
               }
               else{
                    temp->link=top;
                    top=temp;
          }
          }
	}
}

int main(){
   int data;
   stk a1;
   stk a2;
   int n;
   cout<<"Enter no. of nodes you want to insert:\t";
   cin>>n;
   while(n>0){
     cout<<"Enter Your data:\t";
     cin>>data;
        a1.push(data);
        n--;
   }
   a1.display();
   a2.rev(a1);
   a2.display();
   return 0;
}

