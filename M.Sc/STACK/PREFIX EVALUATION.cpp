#include <iostream>
#include <stack>
#include <string.h>
#include <math.h>
using namespace std;
int temp1,temp2,flag;
int prec(char input)
{
    switch (input) {
    case '+':
        return temp1+temp2;
    case '-':
        return temp1-temp2;
    case '*':
        return temp1*temp2;
    case '/':
        return temp1/temp2;
    case '^':{
        int f=pow(temp1,temp2);
        return f;
    	   }
    }
}

int main(){
    stack<int> s;
    char a[100];
    int j=0;
    int n;
    int k;
    cout<<"Enter Your Expression:\t";
	cin>>a;
	n=strlen(a);
	k=n-1;
	for(int i=0;i<n/2;i++){
		int temp=a[k];
		a[k]=a[i];
		a[i]=temp;
		k--;
	}
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='('){
            a[i]=')';
           }
        else if(a[i]==')'){
            a[i]='(';
           }
        j++;
    }
    j=0;
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
    cout<<"The Result is:\t";
    cout<<s.top()<<endl;
    return 0;
}
