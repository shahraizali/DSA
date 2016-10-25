#include <iostream>
#include <conio.h>
#include<stdlib.h>
using namespace std;
struct node{
	int item;
	node *next;
};
node *current = NULL;
node *head = NULL;
int top;

void SMenu();
void createStack();
void displaystack();
int findstack(int);
void deletestack();
int pops();
void pushs(int );
int main()
 {
  system("cls");
  SMenu();
  getch();
}
void SMenu(){
	int gemma;
	while(1){
			system("cls");
		cout<<"\t\t\t\tWELCOME ";
	    cout<<"\n\t\t\t\tMeNU";
	    cout<<"\nPlease select any one of the menu :\n";
		cout<<"1-Create Stack\n";
		cout<<"2-Display Stack\n";
		cout<<"3-Find \n";
		cout<<"4-Delete stack\n";
		cout<<"5-Push\n";
		cout<<"6-Pop\n";
		cout<<"-1-Exit\n";
		cout<<"Select An Option(1-13) ";
		cin>>gemma;
		cin.clear();
		cin.ignore(1000,'\n');
		switch(gemma){
			case 1:
				createStack();
			break;
			case 2:
				displaystack();
			break;
			case 3:
				if(head==NULL){
					cout<<"\nstack is Not Created.";
				}else{
					int a,b;
					cout<<"\nEnter Value To Find : ";
					cin>>a;
		           b=findstack(a);
		           
		           if(b==0){
		           	cout<<"\nvalue is not present in stack ";
				   }
				   else{
				   	cout<<"\nvalue found at index : "<<b;
				   	
				   }
				}
			break;
			case 4:
				deletestack();
			break;
			case 5:
				if(head==NULL){
					cout<<"\nStack Not Created.";
				}else{ int a;
				cout<<"\nenter value :";cin>>a;
				
				
			    pushs( a);
}
			break;
			
			
			case 6:
			if(head==NULL){
					cout<<"\nStack Not Created.";
				}else{ 
				cout<<"\npop element is : :"<<pops;
			}
			break;
			case -1:
				exit(0);
			break;
			default:
				cout<<"Enter An Valid Option.";
			break;
		}
		getch();
	}
}


void createStack(){
	char ch;
	if(head!=NULL){
		cout<<"Link List Already Exist.\n";
		cout<<"Do You Want To Overwrite (Y\\N)";
		cin>>ch;
	}
	if(head==NULL || ch=='y' || ch=='Y'){
		do{
		cout<<"Enter total size of stack : ";
		cin>>top;
	    }while(top<1);
	    int h;
	    cout<<"Enter Data Now\n";
	    for(int i=0;i<top;i++){
	    		

	    		current = head;
                head = new node;
	    		cout<<"\nEnter "<<i+1<<" Element : ";
	    		cin>>head->item;
	    		head->next = current;
			}
       cout<<"\nLink List Successfully Created."; 
  }
}


void displaystack(){
	if(head == NULL){
		cout<<"\nstack is not created";
	}else{
		current = head;
		do{
			cout<<current<<"\t"<<current->item;
			cout<<"\t\t"<<current->next<<endl;
			current = current->next;
		}while(current!=NULL);
	}
}


void deletestack(){
	if(head==NULL){
		cout<<"\nstack is not created";
	}else{
		head = NULL;
		cout<<"\nstack Successfully Deleted.";
	}
}


void pushs( int a){
	current=head;
	head=new node;
	head->item=a;
	head->next=current;
	cout<<"\nvalue successfully pushed ";
	
}

int findstack(int x)
{
node *tt=head;
int z=0;
do
{
	z++;
if(x==tt->item)
{
return z;
}
tt=tt->next;
}
while(tt!=head);
return 0;

}


int pops(){
	int b;
	b=head->item;
	head=head->next;
	return b;
}
