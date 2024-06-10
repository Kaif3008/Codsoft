#include<iostream>
using namespace std;

int main()
{
int a,b;
char op;
cout<<"Enter values for a & b ";
cin>>a>>b;
cout<<"Enter operation you want to perform(+,-,*,/)";
cin>>op;
switch(op)
{
	case'+':
		cout<<(a+b);
		break;
		case'-':
			cout<<(a-b);
			break;
			case'*':
				cout<<a*b;
				break;
				case'/':
					cout<<a/b;
					break;
						default:
							cout<<"Invalid Operator!";
							}
cout<<" ";
return 0;
						}
                        

