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
        node* createnode(int,int);
        void push(int,int);
        void multi(stk,stk);
        void display();
        void bubble();

};
node* stk::createnode(int item1, int item2){
    node* temp=new node();
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
void stk::push(int temp1, int temp2){
	node* temp=createnode(temp1,temp2);
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
	node* temp;
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
                    if(temp1->data2<temp2->data2){
                         int temp=temp1->data1;
                         temp1->data1=temp2->data1;
                         temp2->data1=temp;

                         temp=temp1->data2;
                         temp1->data2=temp2->data2;
                         temp2->data2=temp;
                    }
                    temp1=temp2;
                    temp2=temp2->link;
                    test++;
               }
               l--;
          }
     }
}

void stk::multi(stk a1, stk a2){
	node* temp1;
	node* temp2;
	node* temp3;
	temp1=a1.top;
	int value1;
	int value2;
	int flag=0;
     while(temp1!=NULL){
          temp2=a2.top;
          while(temp2!=NULL){
               value1=temp1->data1*temp2->data1;
               value2=temp1->data2+temp2->data2;
               temp3=top;
               if(top==NULL){
                    push(value1,value2);
               }
               else{
                    while(temp3!=NULL){
                         if(temp3->data2==value2){
                              temp3->data1=temp3->data1+value1;
                              flag=1;
                         }
                         temp3=temp3->link;
                    }
                    if(flag==0){
                         push(value1,value2);
                    }

               }
               temp2=temp2->link;
               flag=0;
          }
          temp1=temp1->link;
     }
     bubble();
}
int main(){
   char ch;
   int item1,item2;
   stk a1,a2,a3;
   while(1){
     cout<<"Enter Co-efficient:\t";
     cin>>item1;
     cout<<"Enter Power:\t";
     cin>>item2;
   	a1.push(item1,item2);
   	cout<<"Do you want to insert more terms...(y/n)\t";
   	cin>>ch;
   	if((ch=='n')||(ch=='N')){
   		break;
   	}

   }
   while(1){
     cout<<"Enter Co-efficient:\t";
     cin>>item1;
     cout<<"Enter Power:\t";
     cin>>item2;
   	a2.push(item1,item2);
   	cout<<"Do you want to insert more terms...(y/n)\t";
   	cin>>ch;
   	if((ch=='n')||(ch=='N')){
   		break;
   	}

   }
   a1.display();
   a2.display();
   a3.multi(a1,a2);
   a3.display();
      return 0;
}

