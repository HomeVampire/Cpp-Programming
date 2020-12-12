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
        void bubble();

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
void stk::bubble(){

     node *temp1=NULL;
     node *temp2=NULL;
     node *flag=top;
     int l=0;
     while(top!=NULL){
          l++;
          top=top->link;
     }
     top=flag;
     if (flag==NULL){
		cout<<"Data Underflow"<<endl;
	}
	else {
          while(l>1){
               temp1=flag;
               temp2=flag->link;
               int test=1;
               while(test<l){
                    if(temp1->data>temp2->data){
                         int temp=temp1->data;
                         temp1->data=temp2->data;
                         temp2->data=temp;
                    }
                    temp1=temp2;
                    temp2=temp2->link;
                    test++;
               }
               l--;
          }
     }
}

int main(){
   int data;
   stk a1;
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
   a1.bubble();
   a1.display();
   return 0;
}

