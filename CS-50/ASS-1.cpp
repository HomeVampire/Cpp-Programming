#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char c[100]={0};
    char a[100]={0};
    int i=0,j=0;
    cout<<"Enter The String:"<<endl;
    cin.getline(a,100);
    while(a[i]==' '){
       i++;
    }
    if((a[i]>=97)&&(a[i]<=122)){
        c[j++]=a[i++]-32;
    }
    else{
        c[j++]=a[i++];
    }
    while(a[i]!='\0'){
        if(a[i]==46){
                c[j++]=a[i++];
                if(a[i]==' '){
                    while(a[i]==' '){
                        i++;
                    }
                    if(a[i]=='\0'){
                    }
                    else{
                        c[j++]=' ';
                    }
                }
                else{
                    c[j++]=' ';
                }
                if((a[i]>=97)&&(a[i]<=122)){
                    c[j++]=a[i++]-32;
                }
                else{
                    c[j++]=a[i++];
                }
        }
        if(a[i]==' '){
            while(a[i]==' '){
                i++;
            }
            if(a[i]=='.'){
                c[j++]=a[i++];
                if(a[i]==' '){
                    while(a[i]==' '){
                        i++;
                    }
                    if(a[i]=='\0'){
                    }
                    else{
                        c[j++]=' ';
                    }
                }
                else{
                    c[j++]=' ';
                        }
                if((a[i]>=97)&&(a[i]<=122)){
                    c[j++]=a[i++]-32;
                }
                else{
                    c[j++]=a[i++];
                }

            }
            else{
                c[j++]=' ';
            }
        }
            if((a[i]>=65)&&(a[i]<=90)){
                c[j++]=a[i++]+32;
            }
            else{
                c[j++]=a[i++];
            }


    }
    j--;
    if(c[j]!='.'){
        c[++j]='.';
        c[++j]='\0';
    }
    c[j]='\0';

    cout<<c<<endl;
    return 0;
}
