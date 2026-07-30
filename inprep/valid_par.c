void push(char);
void pop();
int isempty();

int top=-1;
char stk[10000];

bool isValid(char* s) {

top=-1;

for(int i=0;s[i]!='\0';i++)
{
    if(s[i] == '(' || s[i] == '[' || s[i] == '{' )
    {
        push(s[i]);
    }

    else 
    {
        if(s[i]==')')
        {
            if(isempty())
            {
                return false;
            }
            if(stk[top]=='(')
            {
                pop();

            }
            else
            {
                return false;
            }
        }

        else if (s[i]==']')
        {
            if(isempty())
            {
                return false;
            }
            if(stk[top]=='[')
            {
                pop();

            }
            else
            {
                return false;
            }
        }

        else if (s[i]=='}')
        {
            if(isempty())
            {
                return false;
            }
            if(stk[top]=='{')
            {
                pop();

            }
            else
            {
                return false;
            }
        }
    }

    
    
}

if(isempty()) 
{
    return true;  // all procesessing stack should be empty 

}
else
{
    return false;
}

    
}

int isempty()
{
     if(top==-1)
     {
        return 1;
     }
     else
     {
        return 0;
     }
}


void push(char ch )
{
    if(top==9999)
    {
        return; //overflow
    }
    top=top+1;
    stk[top]=ch;
}

void pop()
{
    if(isempty())
    {
        return; //underflow
    }
    top=top-1;
}



