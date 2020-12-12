#include <iostream>
#include <stdlib.h>
using namespace std;
struct node{
	int data;
	node* link;
};
class deep{
    node* top;
    public:
        deep(){
            top=NULL;
        }
        node* createnode();
        void push();
        void pop();
        void display();
        int counts();
};
node* deep::createnode(){
    int item;
    node* temp=new node();
    cout<<"Connected nodes are:\t";
    cin>>item;
    item=item-1;
    if (temp!=NULL){
		temp->data=item;
        temp->link=NULL;
	}
    else{
        cout<<"Data is not inserted properly"<<endl;
	}
	return temp;
}
void deep::push(){
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
void deep::display(){
	struct node* temp;
	if (top==NULL){
		cout<<"0"<<endl;
	}
	else {
		temp=top;
		while (temp != NULL){
			cout<<temp->data+1<<" ";
			temp=temp->link;
		}
		cout<<endl;
	}
}
int deep::counts(){
	struct node* temp;
	int i=0;
	if (top==NULL){
		return i;
	}
	else {
		temp=top;
		while (temp != NULL){
			i++;
			temp=temp->link;
		}
	}
	return i;
}

int main(){
   deep a1[10];
   int n;
   cout<<"Insert no. of nodes:\t";
   cin>>n;
   for(int i=0; i<n; i++){
        int j;
        cout<<"Enter no. of nodes connected with "<<i+1<<":\t";
        cin>>j;
        for(int k=0; k<j; k++){
            a1[i].push();
        }
   }
   for(int i=0; i<n; i++){
        cout<<"Node "<<i+1<<" is Connected with:\t";
        a1[i].display();
   }
   for(int i=0; i<n; i++){
        cout<<"The degree of node"<<i+1<<":\t";
        cout<<a1[i].counts()<<endl;
   }

      return 0;
}

