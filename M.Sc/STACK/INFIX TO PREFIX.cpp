#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
int prec(char input)
{
    switch (input) {
    case '+':
        return 2;
    case '-':
        return 2;
    case '*':
        return 4;
    case '%':
        return 4;
    case '/':
        return 4;
    case '^':
        return 6;
    case '(':
        return 0;
    }
}
int main(){
    stack<char> s;
    s.push('(');
    char c[100];
    char a[100];
    char b[100];
    int n;
    char temp;
    int j=0;
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
    cout<<a<<endl;
    j=0;
    for(int i=0;a[i]!='\0';i++){
        if(((a[i]>=65)&&(a[i]<=90))||((a[i]>=97)&&(a[i]<=122)))
            b[j++]=a[i];
        else if(a[i]=='('){
		s.push('(');
        }
        else if(a[i]==')'){
            while(s.top()!='('){
                b[j++]=s.top();
                s.pop();
            }
            s.pop();
        }
        else{
            if(prec(a[i])>=prec(s.top())){
                s.push(a[i]);
            }
            else{
                while(prec(a[i])<prec(s.top())){
                    b[j++]=s.top();
                    s.pop();
                }
                s.push(a[i]);

            }
        }
    }
    while(s.top()!='('){
                b[j++]=s.top();
                s.pop();
	}
	b[j]='\0';
	n=strlen(b);
	k=n-1;
	for(int i=0;i<n/2;i++){
		int temp=b[k];
		b[k]=b[i];
		b[i]=temp;
		k--;
	}
    cout<<b<<endl;
    return 0;
}
