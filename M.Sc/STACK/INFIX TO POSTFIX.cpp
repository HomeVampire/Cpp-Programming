#include <iostream>
#include <stack>
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
    char a[100];
    char b[100];
    char temp;
    int j=0;
    cout<<"Enter Your Expression:\t";
    cin>>a;
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
    cout<<b<<endl;
    return 0;
}
