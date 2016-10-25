#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct nodeLL{
	int item;
	nodeLL *prev;
	nodeLL *next;
};
nodeLL *LLhead = NULL;
nodeLL *LLcurrent = NULL;
nodeLL *LLtemp = NULL;
void LLmenu();
void createLL();
void displayLL();
nodeLL *findLL(int);
void deleteLL();
void addElementByValueLL();
void addElementByPositionLL();
void swapElementByValueLL();
void swapElementByPositionLL();
void updateElementByValueLL();
void updateElementByPositionLL();
void removeElementByValueLL();
void removeElementByPositionLL();

int main(){
	system("cls");
	LLmenu();
	return 0;
}



void LLmenu(){
	int gemma;
	while(1){
		system("cls");
		cout<<"1-Create Link List \n";
		cout<<"2-Display LInk List \n";
		cout<<"3-Find Element\n";
		cout<<"4-Delete Link List\n";
		cout<<"5-Add Element By Value\n";
		cout<<"6-Add Element By Position\n";
		cout<<"7-Update Element By Value\n";
		cout<<"8-Update Element By Position\n";
		cout<<"9-Swap Element By Value\n";
		cout<<"10-Swap Element By Position\n";
		cout<<"11-Remove Element By Value\n";
		cout<<"12-Remove Element By Position\n";
		cout<<"13-Main Menu\n";
		cout<<"14-Exit\n";
		cout<<"Enter Option : ";
		cin>>gemma;
		cin.clear();
		cin.ignore(1000,'\n');
		switch(gemma){
			case 1:
				createLL();
			break;
			case 2:
				displayLL();
			break;
			case 3:
				if(LLhead==NULL){
					cout<<"Link List Not Created.";
				}else{
					int a;
					cout<<"Enter Value To Find : ";
					cin>>a;
					nodeLL *b;
					b = findLL(a);
					if(b==NULL){
						cout<<"Value Not Found.";
					}else{
						cout<<"Value Found At : "<<b;
					}
				}
			break;
			case 4:
				deleteLL();
			break;
			case 5:
				addElementByValueLL();
			break;
			case 6:
				addElementByPositionLL();
			break;
			case 7:
				updateElementByValueLL();
			break;
			case 8:
				updateElementByPositionLL();
			break;
			case 9:
				swapElementByValueLL();
			break;
			case 10:
				swapElementByPositionLL();
			break;
			case 11:
				removeElementByValueLL();
			break;
			case 12:
			    removeElementByPositionLL();
			break;
			
			case 14:
				exit(0);
			break;
			default :
				cout<<"Enter Valid Value.";
			break;
		}
		getch();
	}
}
void createLL(){
	char c;
	if(LLhead!=NULL){
		cout<<"Already Exist";
		cout<<"\n Do you Want To overwrite(Y\\N) ";
		cin>>c;
	}
	if(LLhead==NULL || c=='y' || c=='Y'){
		LLhead = NULL;
		int cs;
		do{
			cout<<"Enter Total Size  ";
			cin>>cs;
				cin.clear();
		cin.ignore(1000,'\n');
		}while(cs<1);
		int h,q=1;
		for(int i=0;i<cs;i++){
			if(LLhead==NULL){
				LLhead = new nodeLL;
				LLcurrent = LLhead;
				cout<<"Enter "<<q<<" Item : ";
				cin>>LLcurrent->item;
				LLcurrent->next = NULL;
				LLcurrent->prev = NULL;
			}else{
				q++;
				LLcurrent->next = new nodeLL;
				LLcurrent->next->prev = LLcurrent;
				LLcurrent = LLcurrent->next;
				nodeLL *hope = LLcurrent;
				LLcurrent->next = NULL;
				do{
				    cout<<"Enter "<<q<<" item : ";
					cin>>h;	
						cin.clear();
		cin.ignore(1000,'\n');
				}while(findLL(h)!=NULL);
				LLcurrent = hope;
				LLcurrent->item = h;
				LLcurrent->next = NULL;
			}
			}
			cout<<"Successfully created.";
		}
	}
void displayLL(){
	if(LLhead==NULL){
		cout<<"Link List Not Exist.";
	}else{
		LLcurrent = LLhead;
		cout<<"head  "<<LLhead<<endl;
		cout<<"own Adress\t"<<"prev Address\t"<<"item\t\t"<<"Next Address"<<endl;
		cout<<LLcurrent<<"\t"<<LLcurrent->prev<<"\t        "
		<<LLcurrent->item<<"\t\t"<<LLcurrent->next;
		cout<<endl;
		LLcurrent = LLcurrent->next;
		do{
			if(LLcurrent!=NULL){
		    cout<<LLcurrent<<"\t"<<LLcurrent->prev<<"\t"
			<<LLcurrent->item<<"\t\t"<<LLcurrent->next;
			cout<<endl;
			LLcurrent = LLcurrent->next;
		   }
		}while(LLcurrent!=NULL);
	}
}
nodeLL *findLL(int a){
	LLcurrent = LLhead;
	int i=0;
	LLtemp = LLcurrent;
	do{
		if(LLcurrent->item == a){
			return LLcurrent;
		}if(i!=0){
			LLtemp = LLtemp->next;
		}
		LLcurrent = LLcurrent->next;
		i++;
	}while(LLcurrent != NULL);
	return LLcurrent;
}
void deleteLL(){
	if(LLhead == NULL){
		cout<<"Link List Not Exist.";
	}else{
		LLhead = NULL;
		cout<<"Successfully Deleted."; 
	}
}
void addElementByValueLL(void){
	if(LLhead == NULL){
		cout<<"Link List Not Exist.";
	}else{
		int oval,element;
		nodeLL *b;
		nodeLL *forNew = new nodeLL;
		do{
			cout<<"Enter Value After Which You Want To Enter Element : ";
			cin>>oval;
			b = findLL(oval);
		}while(b==NULL);
		do{
			cout<<"Enter Value You Want To Add : ";
			cin>>element;
		}while(findLL(element)!=NULL);
		if(b->next == NULL){
			forNew->next = NULL;
			forNew->item = element;
			b->next = forNew;
			forNew->prev = b;
		}else{
			forNew->item = element;
			b->next->prev = forNew;
			forNew->prev = b;
			forNew->next = b->next;
			b->next = forNew;
		}
		cout<<"Successfully Added.";
		}
    }
void swapElementByPositionLL(){
	if(LLhead == NULL){
		cout<<"Link List Not Exist.";
	}else{
		int p;nodeLL *t;
		do{
			do{
				cout<<"Enter 1st Position To Swap :";
				cin>>p;
			}while(p<1);
			LLcurrent = LLhead;
			for(int i=1;i<p;i++){
				LLcurrent = LLcurrent->next;
				if(LLcurrent == NULL){
					break;
				}
			}
		}while(LLcurrent==NULL);
		t = LLcurrent;
		do{
			do{
				cout<<"Enter 2nd Position To Swap :";
				cin>>p;
			}while(p<1);
			LLcurrent = LLhead;
			for(int i=1;i<p;i++){
				LLcurrent = LLcurrent->next;
				if(LLcurrent == NULL){
					break;
				}
			}
		}while(LLcurrent==NULL);
		nodeLL *t1;
		t1 = LLcurrent;
		int a = t->item;
		t->item = t1->item;
		t1->item = a;
		cout<<"Successfully Swapped.";
	}
}
void swapElementByValueLL(){
	if(LLhead == NULL){
		cout<<"Link List Not Exist.";
	}else{
		int v;nodeLL *t;
		do{
			cout<<"Enter 1st Value To Swap : ";
			cin>>v;
			t = findLL(v);
		}while(t==NULL);
		nodeLL *t1;
		do{
			cout<<"Enter 2nd Value To Swap : ";
			cin>>v;
			t1 = findLL(v);
		}while(t1==NULL);
		int a = t->item;
		t->item = t1->item;
		t1->item = a;
		cout<<"Swapped Successfully.";
	}
}
void updateElementByPositionLL(){
	if(LLhead==NULL){
		cout<<"Link List Not Exist.";
   }else{int p;nodeLL *t;
    	do{
			do{
				cout<<"Enter Position To Update :";
				cin>>p;
			}while(p<1);
			LLcurrent = LLhead;
			for(int i=1;i<p;i++){
				LLcurrent = LLcurrent->next;
				if(LLcurrent == NULL){
					break;
				}
			}
		}while(LLcurrent==NULL);
		int z; t = LLcurrent;
		do{
			cout<<"Enter Value : ";
			cin>>z;
		}while(findLL(z)!=NULL);
		t->item = z;
		cout<<"Successfully Updated.";
   }
}
void updateElementByValueLL(){
	if(LLhead==NULL){
		cout<<"Link List Not Exist.";
   }else{
   	int a;
	nodeLL *t;
   	do{
   		cout<<"Enter Value You Want To Update : ";
   		cin>>a;
   		t = findLL(a);
	   }while(t==NULL);
	   do{
	   	cout<<"Enter New Value : ";
	   	cin>>a;
	   }while(findLL(a)!=NULL);
	   t->item = a;
	   cout<<"SuccessFully Updated.";
   }
}
void removeElementByValueLL(){
	if(LLhead == NULL){
		cout<<"Link List Not Exist.";
	}else{
		int a;
		nodeLL *b;
		do{
			cout<<"Enter Value To Remove : ";
			cin>>a;
			b = findLL(a);
		}while(b == NULL);
		if(b->prev == NULL){
			LLhead = LLhead->next;
			LLhead->prev = NULL;
		}else{
			if(b->next==NULL){
				(b->prev)->next = NULL;
			}else{
				(b->prev)->next = b->next;
				(b->next)->prev = b->prev;
			}
		}
		cout<<"Successfully Remove.";
	}
}
void removeElementByPositionLL(){
	if(LLhead == NULL){
		cout<<"Link List Not Exist.";
	}else{
		int a;
		     do{
			 cout<<"Enter Position To Remove : ";
			 cin>>a;
		     }while(a<1);
		      if(a==1){
			   LLhead = LLhead->next;
			   LLhead->prev = NULL;
			   cout<<"Successfully Removed.";
		      }else{
		       LLcurrent = LLhead;
			   int i;
			   for(i=1;i<a;i++){
			   	LLcurrent = LLcurrent->next;
				if(LLcurrent == NULL && i<a+1){
					cout<<"Invalid Position.";
					LLcurrent = LLhead;
					break;
				}
		       }if(LLcurrent->prev!=NULL){
				if(LLcurrent->next == NULL){
					(LLcurrent->prev)->next = NULL;
				}else{
					(LLcurrent->prev)->next = LLcurrent->next;
					(LLcurrent->next)->prev = LLcurrent->prev;
				}
				cout<<"Successfully Removed.";
			}
		}
	}
}
void addElementByPositionLL(){
	if(LLhead == NULL){
		cout<<"Link List Not Exist.";
	}else{	int p;
		do{
			cout<<"Enter Position : ";
			cin>>p;
		}while(p<1);
		nodeLL *temp1;
		temp1 = new nodeLL;
		do{
			cout<<"Enter Value To Add : ";
			cin>>temp1->item;
		}while(findLL(temp1->item)!=NULL);
		if(p==1){
			temp1->next = LLhead;
			LLhead = temp1;
			LLcurrent = temp1;
			cout<<"Successfully Added.";
		}else{
			LLcurrent = LLhead;
			for(int i=1;i<p-1;i++){
				if(LLcurrent->next==NULL){
					break;
				}
				LLcurrent = LLcurrent->next;
			}
			if(LLcurrent->next == NULL){
				LLcurrent->next = temp1;
				temp1->prev = LLcurrent;
				temp1->next = NULL;
			}else{
				temp1->prev = LLcurrent;
				temp1->next = LLcurrent->next;
				LLcurrent->next = temp1;
				LLcurrent->next->prev = temp1;
			}
			cout<<"Successfully Added.";
			
        }
    }
}
