#include <iostream>
#include <stack>
#include<math.h>
using namespace std;
int temp1,temp2,flag;
int prec(char input)
{
    switch (input) {
    case '+':
        return temp2+temp1;
    case '-':
        return temp2-temp1;
    case '*':
        return temp2*temp1;
    case '/':
        return temp2/temp1;
    case '^':{
        int f=pow(temp2,temp1);
        return f;
    	   }
    }
}

int main(){
    stack<int> s;
    char a[100];
    int j=0;
    cout<<"Enter Your Expression:\t";
	cin>>a;
    for(int i=0;a[i]!='\0';i++){
	if((a[i]=='+')||(a[i]=='-')||(a[i]=='*')||(a[i]=='/')||(a[i]=='^')){
		temp1=s.top();
		s.pop();
		temp2=s.top();
		s.pop();
		flag=prec(a[i]);
		s.push(flag);
	}
	else{
		int temp=(int)a[i]-48;
            s.push(temp);
	}

    }
    cout<<"The result is\t";
    cout<<s.top()<<endl;
    return 0;
}
