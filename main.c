//Balanced Paranthesis using Stack//

#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    char stk[100];
    int top=-1,f=1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            stk[++top]=s[i];
        }
        else{
            if(s[i]==')'){
                if(stk[top]!='('){
                    f=0;
                    break;
                }
                else{
                    top--;
                }
            }
            else if(s[i]==']'){
                if(stk[top]!='['){
                    f=0;
                    break;
                }
                else{
                    top--;
                }
            }
            else if(s[i]=='}'){
                if(stk[top]!='{'){
                    f=0;
                    break;
                }
                else{
                    top--;
                }
            }
        }
    }
    if(f==1 && top==-1)
        printf("Balanced");
    else{
        printf("Unbalanced");
    }
   
}
