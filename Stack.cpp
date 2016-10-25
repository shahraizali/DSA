#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int ts=0,top=-1;
float *stk = new float[ts];
void menu();
void displayStack();
bool isEmpty();
void isFull();
void createStack();
void deleteStack();
void clearStack();
void push(float);
float pop();
int isLenght();
int main(){
	system("cls");
	menu();
	getch();
} 
void menu(){
	int choice;
	while(1){
		system("cls");
		cout<<"1-Create Stack\n";
		cout<<"2-Display Stack\n";
		cout<<"3-Push Stack\n";
		cout<<"4-Pop Stack\n";
		cout<<"5-Is Full\n";
		cout<<"6-Is Empty\n";
		cout<<"7-Delete Stck\n";
		cout<<"8-Clear Stack\n";
		cout<<"9-Is Lenght\n";
		cout<<"10-Exit\n";
		cout<<"Enter A Choice Between 1-10 : ";
		cin>>choice;
		switch(choice){
			case 1 :
				createStack();
			break;
			case 2:
				displayStack();
			break;
            case 3:
			    if(top==-1){
			    	cout<<"First You Have To Create Stack.";
				}else{
					if(ts<=top){
						cout<<"Stack Is Full.";
					}else{
						float n;
						cout<<"Enter Float Value : ";
						cin>>n;
						push(n);
					}
				}
			break;
			case 4:
				if(top==-1){
				    cout<<"First You Have To Create Stack.";
				}else{
					if(isEmpty()){
						cout<<"Stack Empty.";
					}else{
						float a;
						a = pop();
						cout<<"Value is : "<<a;
					}
					
				}
			break;
			case 5:
				isFull();
			break;
			case 6:
				bool j;
				if(top==-1){
					cout<<cout<<"First You Have To Create Stack.";
				}else{
					j = isEmpty();
					if(j==1){
						cout<<"Stack Is Empty.";
					}else{
						cout<<"Stack Is Not Empty.";
					}
				}
			break;
			case 7:
				deleteStack();
			break;
			case 8:
				clearStack();
			break;
			case 9:
				int i;
				if(top==-1){
					cout<<"First You Have To Create Stack.";
				}else{
					if(isEmpty()){
						cout<<"Stack Empty.";
					}else{
					}
					i = isLenght();
					cout<<"Lenght Of Stack Is : "<<i;
				}
			break;
			case 10:
				exit(0);
			break;
			default :
				cout<<"Enter A Valid Value between 1-10\n";
			break;
		}
	   getch();
	}
}
void createStack(){
	char ch;
	if(top==-1){
		cout<<"First You Have To Create Stack.\n";
	}if(top!=-1){
		cout<<"List Already Created.";
		cout<<"\nDo You Want To Replace(Y\\N) ";
		cin>>ch;
	}if(top==-1 || ch=='Y' || ch=='y'){
		do{
			cout<<"Enter Size : ";
			cin>>ts;
		}while(ts<=0);
		do{
			cout<<"Enter Curent Size : ";
			cin>>top;
		}while(top<0 || top>ts);
		for(int i=0,b=1;i<top;i++,b++){
			cout<<"Enter "<<b<<" Element : ";
			cin>>stk[i];
		}
		cout<<"Stack Successfully Created.";
	}
}
void displayStack(){
	if(top==-1){
		cout<<"First You Have To Create Stack. ";
	}else{
		if(top==0){
			cout<<"Stack Empty.";
		}else{
			cout<<"Sr No.  Data \n";
			for(int a=0;a<top;a++){
				cout<<a+1<<"\t"<<stk[a]<<endl;
			}
		}
	}
}
void push(float p){
	stk[top]=p;
	top++;
	cout<<"Value Successfully Added.";
}
void isFull(){
	if(top==-1){
		cout<<"First You Have To Create Stack";
	}else{
      if(top==0){
		cout<<"Stack Empty.";
	}else{
	if(ts<=top){
		cout<<"Stack Is Full.";
	}else{
		cout<<"Stack Is Not Full.";
	}
  }
}
}
bool isEmpty(){
	if(top==0){
		return true;
	}else{
		return false;
	}
}
void deleteStack(){
	if(top==-1){
		cout<<"First You Have To Create Stack.";
	}else{
		top=-1;
		cout<<"Stack Successfully Deleted.";
	}
}
void clearStack(){
	if(top==-1){
		cout<<"First You Have To Create Stack.";
	}else{
		top=0;
		cout<<"Stack Successfully Clear.";
  }
}
float pop(){
	--top;
	return stk[top];
}
int isLenght(){
	return top;
}
