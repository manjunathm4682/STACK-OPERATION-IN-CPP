#include<iostream>
using namespace std;
  #define max_size 5
  template<class type>
  class stack
   {
   int Top;
   //static int Top;
   type stk[max_size];
   public:
   stack()
   {
   Top=-1;
   }
   void push(type x);
   void pop();
  //int peek();
  //bool isEmpty();
   void display();
   void modifyTop(int a)
   {
   Top=a;
   }
 };

//template<class type>
//int stack<type>::Top=-1;

template<class type>
void stack<type>::display()
{
        if(Top<0)
        {
                cout<<"stack is empty"<<endl;
        }
        else
        {
                cout<<"---------The STACK elements are----------"<<endl;
                for(int i=Top;i>=0;i--)
                {
                        cout<<stk[i]<<" "<<endl;
                }
        }
}

  template<class type>
  void stack<type>::push(type x)
  {
          if(Top >= (max_size - 1))
          {
                  cout<<"stack overflow"<<endl;
          }
          else
          {
                  stk[++Top]=x;
                  cout<<x<<" pushed into stack"<<endl;
            cout<<"----------------------------------------------------\n";
          }
 }

template<class type>
void stack<type>::pop()
{
        if(Top<0)
        {
                cout<<"stack Underflow"<<endl;
                Top=-1;
        }
        else
        {
                //type x=stk[Top--];
                Top--;
                cout<<"data is deleted"<<endl;
        }
}


int main()
{
int i=1,c=1,f=1,d=1,s=1;
int i1=0,c1=0,f1=0,d1=0,s1=0;
int op1,op2,wrong=0;
stack<int>Int;
stack<char>Char;
stack<float>Float;
stack<double>Double;
stack<string>String;
 while(1)
    {
            int op;
        l1:     cout<<"----------------------------------------------------\n";
                cout<<"1.int\n2.char\n3.float\n4.double\n5.string\n6.exit"<<endl;
                cin>>op;
                cout<<"----------------------------------------------------\n";

        if(op>=1 && op<=6)
                wrong=0;                //resetting the user chances,if user select correct options

            switch(op)
            {

                    case 1:
                            if(i>1)
                            {
                                    cout<<"1.continue with old stack\n2.new stack"<<endl;
                                    cin>>op2;
                                    if(op2==1)
                                    goto old_stack;
                                        if(op2==2)
                                        {
                                            cout<<"--------------new stack frame----------------"<<endl;
                                            i1=0;
                                            Int.modifyTop(-1);
                                            goto label_new;
                                        }
                            }
label_new :                 cout<<"int stack application ready to use"<<endl;

old_stack :
                            i++;                //for again entering
                            cout<<"sub menu"<<endl;
                            while(1)
                            {
                            cout<<"----------------------------------------------------\n";
                            cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;
                                cin>>op1;
                                    switch(op1)
                                    {
                                            case 1:
                                                if(i1==max_size)
                                                {
                                                        cout<<"-----STACK OVERFLOW----"<<endl;
                                                        i1=max_size;
                                                        break;
                                                }
                                                else
                                                {
                                                    i1++;       //counting the elements
                                                    int x;
                                                    cout<<"Enter the element to push"<<endl;
                                                    cin>>x;
                                                    Int.push(x);
                                                    break;
                                                }
                                            case 2:Int.pop();
                                                        --i1;
                                                        break;
                                            case 3:Int.display();
                                                        break;
                                            case 4:goto l1;
                                                        break;

                                    }
                            }




case 2:
                            if(c>1)
                            {

                                    cout<<"1.continue with old stack\n2.new stack"<<endl;
                                    cin>>op2;
                                    if(op2==1)
                                   goto old_stack_char;
                                        if(op2==2)
                                        {
                                            cout<<"--------------new stack frame----------------"<<endl;
                                            c1=0;
                                            Char.modifyTop(-1);
                                            goto label_new_char;
                                        }
                            }

label_new_char:         cout<<"char stack application ready to use\n"<<endl;

old_stack_char:                     c++;                //for again entering
                            cout<<"sub menu"<<endl;
                            while(1)
                            {
                            cout<<"----------------------------------------------------\n";
                            cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;

                                cin>>op1;
                                    switch(op1)
                                    {
                                            case 1:
                                                if(c1==max_size)
                                                {
                                                        cout<<"-----STACK OVERFLOW----"<<endl;
                                                        break;
                                                }
                                                else
                                                {
                                                    c1++;       //counting the elements
                                                    char y;
                                                    cout<<"Enter the element to push"<<endl;
                                                    cin>>y;
                                                    Char.push(y);
                                                    break;
                                                }
                                            case 2:Char.pop();
                                                        c1--;
                                                        break;
                                            case 3:Char.display();
                                                        break;
                                            case 4:goto l1;
                                                        break;

                                    }
                            }
case 3:
if(f>1)
{

        cout<<"1.continue with old stack\n2.new stack"<<endl;
        cin>>op2;
        if(op2==1)
       goto old_stack_float;
            if(op2==2)
            {
                cout<<"--------------new stack frame----------------"<<endl;
                f1=0;
                Float.modifyTop(-1);
                goto label_new_float;
            }
}

label_new_float:                cout<<"float stack application ready to use\n"<<endl;

old_stack_float:                            f++;                //for again entering
cout<<"sub menu"<<endl;
while(1)
{
cout<<"----------------------------------------------------\n";
cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;

    cin>>op1;
        switch(op1)
        {
                case 1:
                    if(f1==max_size)
                    {
                            cout<<"-----STACK OVERFLOW----"<<endl;
                            break;
                    }
                    else
                    {
                        f1++;   //counting the elements
                        float z;
                        cout<<"Enter the element to push"<<endl;
                        cin>>z;
                        Float.push(z);
                        break;
                    }
                case 2:Float.pop();
                            f1--;
                            break;
                case 3:Float.display();
                            break;
                case 4:goto l1;
                            break;

        }
}

case 4:
if(d>1)
{

        cout<<"1.continue with old stack\n2.new stack"<<endl;
        cin>>op2;
        if(op2==1)
       goto old_stack_double;
            if(op2==2)
            {
                cout<<"--------------new stack frame----------------"<<endl;
                d1=0;
                Double.modifyTop(-1);
                goto label_new_double;
            }
}

label_new_double:               cout<<"double stack application ready to use\n"<<endl;

old_stack_double:                           d++;                //for again entering
cout<<"sub menu"<<endl;
while(1)
{
cout<<"----------------------------------------------------\n";
cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;

    cin>>op1;
        switch(op1)
        {
                case 1:
                    if(d1==max_size)
                    {
                            cout<<"-----STACK OVERFLOW----"<<endl;
                            break;
                    }
                    else
                    {
                        d1++;   //counting the elements
                        double D;
                        cout<<"Enter the element to push"<<endl;
                        cin>>D;
                        Double.push(D);
                        break;
                    }
                case 2:Double.pop();
                            d1--;
                            break;
                case 3:Double.display();
                            break;
                case 4:goto l1;
                            break;

            }               //switch
    }               //while


case 5:
                            if(s>1)
                            {

                                    cout<<"1.continue with old stack\n2.new stack"<<endl;
                                    cin>>op2;
                                    if(op2==1)
                                   goto old_stack_string;
                                        if(op2==2)
                                        {
                                            cout<<"--------------new stack frame----------------"<<endl;
                                            s1=0;
                                            String.modifyTop(-1);
                                            goto label_new_string;
                                        }
                            }

label_new_string:       cout<<"string stack application ready to use\n"<<endl;

old_stack_string:                   s++;                //for again entering
                            cout<<"sub menu"<<endl;
                            while(1)
                            {
                            cout<<"----------------------------------------------------\n";
                            cout<<"1.push\n2.pop\n3.display_stack\n4.main_menu"<<endl;

                                cin>>op1;
                                    switch(op1)
                                    {
                                            case 1:
                                                if(s1==max_size)
                                                {
                                                        cout<<"-----STACK OVERFLOW----"<<endl;
                                                        break;
                                                }
                                                else
                                                {
                                                    s1++;       //counting the elements
                                                    string S;//taking user input string to store in stack
                                                    cout<<"Enter the element to push"<<endl;
                                                    cin>>S;
                                                    String.push(S);
                                                    break;
                                                }
                                            case 2:String.pop();
                                                        s1--;
                                                        break;
                                            case 3:String.display();
                                                        break;
                                            case 4:goto l1;
                                                        break;

}
}

case 6: exit(0);


 default:
wrong++;
if(wrong==1)
 cout<<"Please read the option carefully"<<endl;

if(wrong==2)
cout<<"last chance please take care"<<endl;

if(wrong==3)
{
cout<<"Thanks for using our application.\nplease read the manual and comeback properly"<<endl;
exit(0);
}
    }               //switch
}               //while
}                       //main                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              