#include <iostream>
#include <conio.h>
using namespace std;
struct node{
	int item;
	node *next;
};
node *current = NULL;
node *head = NULL;
node *temp = NULL;
void linkListMenu();
void createLinkList();
void displayLinkList();
node *findElement(int);
void deleteLinkList();
void removeElementByValue();
void removeElementByPosition();
void swapElementByValue();
void swapElementByPosition();
void updateElementByValue();
void updateElementByPosition();
void addElementByValue();
void addElementByPosition();
int main()
 {
  system("cls");
  linkListMenu();
  getch();
}
void linkListMenu(){
	int gemma;
	while(1){
		system("cls");
		cout<<"1-Create Link List\n";
		cout<<"2-Display Link List\n";
		cout<<"3-Find Value\n";
		cout<<"4-Delete Link List\n";
		cout<<"5-Remove Element By Value\n";
		cout<<"6-Remove Element By Position\n";
		cout<<"7-Swap Elements By Value\n";
		cout<<"8-Swap Elements By Position\n";
		cout<<"9-Update Element By Value\n";
		cout<<"10-Update Element By Position\n";
		cout<<"11-Add Element By Value\n";
		cout<<"12-Add Element By Position\n";
		cout<<"13-Exit\n";
		cout<<"Select An Option(1-13) ";
		cin>>gemma;
		cin.clear();
		cin.ignore(1000,'\n');
		switch(gemma){
			case 1:
				createLinkList();
			break;
			case 2:
				displayLinkList();
			break;
			case 3:
				if(head==NULL){
					cout<<"Link List Not Created.";
				}else{
					int a;
					cout<<"Enter Value To Find : ";
					cin>>a;
					node *b;
					b = findElement(a);
					if(b==NULL){
						cout<<"Value Not Found.";
					}else{
						cout<<"Value Found At : "<<b;
					}
				}
			break;
			case 4:
				deleteLinkList();
			break;
			case 5:
			    removeElementByValue();
			break;
			case 6:
				removeElementByPosition();
			break;
			case 7:
				swapElementByValue();
			break;
			case 8:
				swapElementByPosition();
			break;
			case 9:
				updateElementByValue();
			break;
			case 10:
				updateElementByPosition();
			break;
			case 11:
				addElementByValue();
			break;
			case 12:
				addElementByPosition();
			break;
			case 13:
				exit(0);
			break;
			default:
				cout<<"Enter An Valid Option.";
			break;
		}
		getch();
	}
}
void createLinkList(){
	char ch;
	if(head!=NULL){
		cout<<"Link List Already Exist.\n";
		cout<<"Do You Want To Overwrite (Y\\N)";
		cin>>ch;
	}
	if(head==NULL || ch=='y' || ch=='Y'){
		int cs;
		do{
		cout<<"Enter Current Size Of Link List : ";
		cin>>cs;
	    }while(cs<1);
	    int h;
	    cout<<"Enter Data Now\n";
	    for(int i=0;i<cs;i++){
	    	if(head==NULL){
	    		head = new node;
	    		current = head;
	    		cout<<"Enter "<<i+1<<" Element : ";
	    		cin>>current->item;
	    		current->next = NULL;
			}else{
				current->next = new node;
				current = current->next;
				do{
					cout<<"Enter "<<i+1<<" Element : ";
					cin>>h;
				}while(findElement(h)==NULL);
				current->item = h ;
				current->next = NULL;
       }
    }
       cout<<"Link List Successfully Created."; 
  }
}
void displayLinkList(){
	if(head == NULL){
		cout<<"Link List Not Exist.";
	}else{
		cout<<"\n"<<"Own\t\tValue\t\tNext\n";
		cout<<&head<<"\thead\t\t"<<head<<endl;
		current = head;
		do{
			cout<<current<<"\t"<<current->item;
			cout<<"\t\t"<<current->next<<endl;
			current = current->next;
		}while(current!=NULL);
	}
}
node *findElement(int a){
	current = head;
	int i=0;
	temp = current;
	do{
		if(current->item == a){
			return current;
		}if(i!=0){
			temp = temp->next;
		}current = current->next;
		i++;
	}while(current != NULL);
	return current;
}
void deleteLinkList(){
	if(head==NULL){
		cout<<"Link List Not Exist.";
	}else{
		head = NULL;
		cout<<"Link List Successfully Deleted.";
	}
}
void removeElementByValue(){
	if(head==NULL){
		cout<<"Link List Not Exist.";
	}else{
		int alpha;
		do{
			cout<<"Enter Value To Remove : ";
			cin>>alpha;
		}while(findElement(alpha)==NULL);
		if(head==NULL){
			head = head->next;
			delete current;
			current = head;
		}else{
			temp->next = current->next;
			delete current;
			current = temp;
		}
		cout<<"Successfully Deleted.";
	}
}
void removeElementByPosition(){
	if(head == NULL){
		cout<<"Link List Not Exist.";
	}else{
		int beta,x=0;
		do{
			cout<<"Enter Position You Want To Delete : ";
			cin>>beta;
		}while(beta<1);
		current = head;
		temp = head;
		for(int i=1;i<beta;i++){
			current= current->next;
			if(current == NULL){
				cout<<"Invalid Position.";
				break;
				getch();
			}if(x!=0){
				temp= temp->next;
			}
			x++;
		}
		if(current!=NULL){
			if(current == head){
				head = head->next;
				delete current;
				current = head;
			}else{
				temp->next = current->next;
				current = temp;
			}
			cout<<"Successfully Deleted.";
		}
	}
}
void swapElementByPosition(){
	if(head == NULL){
		cout<<"Link List Not Exist.";
	}else{
		int p;node *t;
		do{
			do{
				cout<<"Enter 1st Position To Swap :";
				cin>>p;
			}while(p<1);
			current = head;
			for(int i=1;i<p;i++){
				current = current->next;
				if(current == NULL){
					break;
				}
			}
		}while(current==NULL);
		t = current;
		do{
			do{
				cout<<"Enter 2nd Position To Swap :";
				cin>>p;
			}while(p<1);
			current = head;
			for(int i=1;i<p;i++){
				current = current->next;
				if(current == NULL){
					break;
				}
			}
		}while(current==NULL);
		node *t1;
		t1 = current;
		int a = t->item;
		t->item = t1->item;
		t1->item = a;
		cout<<"Successfully Swapped.";
	}
}
void swapElementByValue(){
	if(head == NULL){
		cout<<"Link List Not Exist.";
	}else{
		int v;node *t;
		do{
			cout<<"Enter 1st Value To Swap : ";
			cin>>v;
			t = findElement(v);
		}while(t==NULL);
		node *t1;
		do{
			cout<<"Enter 2nd Value To Swap : ";
			cin>>v;
			t1 = findElement(v);
		}while(t1==NULL);
		int a = t->item;
		t->item = t1->item;
		t1->item = a;
		cout<<"Swapped Successfully.";
	}
}
void updateElementByPosition(){
	if(head==NULL){
		cout<<"Link List Not Exist.";
   }else{int p;node *t;
    	do{
			do{
				cout<<"Enter Position To Update :";
				cin>>p;
			}while(p<1);
			current = head;
			for(int i=1;i<p;i++){
				current = current->next;
				if(current == NULL){
					break;
				}
			}
		}while(current==NULL);
		int z; t = current;
		do{
			cout<<"Enter Value : ";
			cin>>z;
		}while(findElement(z)!=NULL);
		t->item = z;
		cout<<"Successfully Updated.";
   }
}
void updateElementByValue(){
	if(head==NULL){
		cout<<"Link List Not Exist.";
   }else{
   	int a;
	node *t;
   	do{
   		cout<<"Enter Value You Want To Update : ";
   		cin>>a;
   		t = findElement(a);
	   }while(t==NULL);
	   do{
	   	cout<<"Enter New Value : ";
	   	cin>>a;
	   }while(findElement(a)!=NULL);
	   t->item = a;
	   cout<<"SuccessFully Updated.";
   }
}
void addElementByValue(){
	if(head==NULL){
		cout<<"Link List Not Exist.";
	}else{
		int v;
		current = head;
		do{
			cout<<"Enter Value After Which You Want To Enter Element :";
			cin>>v;
		}while(findElement(v)==NULL);
		node *t = current;
		node *temp1;
		temp1 = new node;
		int v1;
		do{
			cout<<"Enter Value : ";cin>>v1;
			temp1->item = v1;
		}while(findElement(v1)!=NULL);
		temp1->next = t->next;
		t->next = temp1;
		current = temp1;
		cout<<"Value Successfully Added.";
	}
}
void addElementByPosition(){
	if(head==NULL){
		cout<<"Link List Not Exist.";
	}else{
		int p;
		do{
			cout<<"Enter Position : ";
			cin>>p;
		}while(p<1);
		node *temp1;
		temp1 = new node;
		do{
			cout<<"Enter Value To Add : ";
			cin>>temp1->item;
		}while(findElement(temp1->item)!=NULL);
		if(p==1){
			temp1->next = head;
			head = temp1;
			current = temp1;
			cout<<"Successfully Added.";
		}else{
			current = head;
			for(int i=1;i<p-1;i++){
				if(current->next==NULL){
					break;
				}
				current = current->next;
			}
			temp1->next = current->next;
			current->next = temp1;
			current = temp1;
			cout<<"Successfully Added.";
		}
	}
}
