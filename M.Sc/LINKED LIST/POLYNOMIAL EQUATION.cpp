#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
	int data1;
	int data2;
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
    int item1,item2;
    node* temp=new node();
    cout<<"Enter Co-efficient:\t";
    cin>>item1;
    cout<<"Enter Power:\t";
    cin>>item2;
    if (temp!=NULL){
		temp->data1=item1;
		temp->data2=item2;
        	temp->link=NULL;
	}
    else{
        cout<<"Data is not inserted properly"<<endl;
	}
	return temp;
}
void stk::push(){
	node* temp=createnode();
	node* p=top;
	if (p==NULL){
		top=temp;
	}
    else{
        while (p->link!=NULL){
			p=p->link;
		}
		p->link=temp;
	}
}
void stk::display(){
	struct node* temp;
	if (top==NULL){
		cout<<"\nStack Underflow"<<endl;
	}
	else {
		temp=top;
		cout<<"The Polunomial equation is:\t";
		cout<<temp->data1<<"x^"<<temp->data2;
		temp=temp->link;
		while (temp != NULL){
			if(temp->data1<0){
				if(temp->data2==0)
					cout<<temp->data1;
				else	
					cout<<temp->data1<<"x^"<<temp->data2;
			}
			else{
				if(temp->data2==0)
					cout<<"+"<<temp->data1;
				else
					cout<<"+"<<temp->data1<<"x^"<<temp->data2;
			}
			temp=temp->link;
		}
		cout<<endl<<endl;
	}
}
int main(){
   char ch;
   stk a1;
   while(1){
   	a1.push();
   	cout<<"Do you want to insert more terms...(y/n)\t";
   	cin>>ch;
   	if((ch=='n')||(ch=='N')){
   		break;
   	}
   	
   }
   a1.display();
      return 0;
}

