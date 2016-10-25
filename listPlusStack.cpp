#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int cs=0,dl=-1,s=0;
int *list = new int[s];
int ts=0,top=-1;
float *stk = new float[ts];
void stackMenu();
void displayStack();
bool stackEmpty();
void stackFull();
void createStack();
void deleteStack();
void clearStack();
void push(float);
float pop();
int stackLenght();
void createList();
void displayList();
int find(int,int);
void copy();
void swapByValue(int,int);
void swapByPosition(int,int);
void listFull();
void listLenght();
void addElement(int,int);
void clearList();
void deleteList();
void listEmpty();
void removeByValue(int);
void removeByPosition(int);
void updateByValue(int,int);
void updateByPosition(int,int);
void listMenu();

int main(){
	system("cls");
	int p;
	while(1){
		system("cls");
	cout<<"1-List\n2-Stack\n3-Exit\nSelect One Option : ";cin>>p;
	switch(p){
		case 1:
			listMenu();
		break;
		case 2:
			stackMenu();
		break;
		case 3:
			exit(0);
		break;
		default :
			cout<<"Enter Valid Value(1-3)";
			break;
	}
	getch();
  }
}

void listMenu(){
	int choice;
	while(1){
		system("cls");
		cout<<"1-Create List \n";
		cout<<"2-Add Element \n";
		cout<<"3-Delete List \n";
		cout<<"4-Remove By Position \n";
		cout<<"5-Copy List \n";
		cout<<"6-clear List \n";
		cout<<"7-Update Item By Value \n";
		cout<<"8-Swap By Value \n";
		cout<<"9-Swap By Position \n";
		cout<<"10-Display List\n";
		cout<<"11-Is Empty \n";
		cout<<"12-Is Full \n";
		cout<<"13-Is Lenght \n";
		cout<<"14-Find \n";
		cout<<"15-Get Element \n";
		cout<<"16-Remove By Value \n";
		cout<<"17-Update Item By Position \n";
		cout<<"18-exit \nSelect One Option :\n";
		cin>>choice;
	switch(choice){
		case 1 :
			createList();
		break;
		case 2:
		if(dl==-1){
			cout<<"First You Have To Create List.";
		}else{
			if(cs==0){
				cout<<"List Empty.";
			}else
	      	{
			int beta;
			do{
				cout<<"Enter Element To Add : ";
				cin>>beta;
			}while(find(cs,beta)!=-1);
			int position1;
			do{
				cout<<"Enter Position : ";
				cin>>position1;
			}while(position1<1 || position1>100);
			addElement(position1,beta);
		}
	}
		break;
		case 3:
			deleteList();
		break;
		case 4:
			int pos;
			if(dl==-1){
			cout<<"First You Have To Create List.";	
			}else{
				do{
					cout<<"Enter Postion You Want To Delete : ";
					cin>>pos;
				}while(pos>cs);
				removeByPosition(pos);
			}
		break;
		case 5:
			copy();
		break;
		case 6:
			clearList();
			break;
		case 7:
			int ovalue,nvalue,i;
			if(dl==-1){
				cout<<"First You Have To Create List.";
			}else{
				if(cs==0){
					cout<<"List Empty.";
				}else{
				do{
					cout<<"Enter Value To Update : ";
					cin>>ovalue;
					i = find(cs,ovalue);
				}while(i==-1);
			do{
				cout<<"Enter New Value : ";
				cin>>nvalue;
			}while(find(cs,nvalue)!=-1);
			updateByValue(nvalue,i);
			}
	}
		break;
		case 8:
			int v1,v2,index,index1;
			if(dl==-1){
				cout<<"First You Have To Create List.";
			}else{
				if(cs==0){
					cout<<"List Empty.";
				}else{
				do{
					cout<<"Enter 1st Value To Swap.\n";
					cin>>v1;
					index = find(cs,v1);
				}while(index==-1);
				do{
					cout<<"Enter 2nd Value To Swap.\n";
					cin>>v2;
				    index1 =find(cs,v2);
				}while(index1==-1);
				swapByValue(index,index1);
			}
	}
			break;
		case 9:
			if(dl==-1){
				cout<<"First You Have To Create List.";
			}
			else
			{
				int p1,p2;
				do{
					cout<<"Enter Position 1 For Swap.\n";
					cin>>p1;
				}while(p1<0 || p1>cs);
				do{
					cout<<"Enter Position 2 For Swap.\n";
					cin>>p2;
				}while(p2<0 || p2>cs);
			swapByPosition(p1,p2);
		   }
			break;
		case 10:
			displayList();
			break;
		case 11:
			listEmpty();
			break;
		case 12:
			listFull();
			break;
		case 13:
		     listLenght(); 
			break;
		case 14:
			if(dl==-1){
				cout<<"First You Have To Create List.";
			}else{
				if(cs==0){
		    cout<<"List Empty.";
	       }else{
				int value,a;
				cout<<"Enter Value To Find : ";
				cin>>value;
				a = find(cs,value);
				if(a==-1){
					cout<<"Value Not Found.";
				}else{
					cout<<"Value Found At "<<++a;
				}
			}
		}
		break;
		case 15:
			int number;
			if(dl==-1){
				cout<<"First You Have To Create List.";
			}
			else{
				if(cs==0){
		        cout<<"List Empty.";
			}else
			{
				do{
				cout<<"Enter Serial Number To Get Element : ";
				cin>>number;
			   }while(number>cs);
			cout<<"Element Is : "<<list[--number];
		}
	}
		break;
		case 16:
			int val,sindex;
			if(dl==-1){
				cout<<"First You Have To Create List.";
			}else{
				if(cs==0){
		        cout<<"List Empty.";
	       }else{
				do{
					cout<<"Enter value You Want To Delete : ";
					cin>>val;
					sindex = find(cs,val);
				}while(sindex==-1);
				removeByValue(sindex);
				}
		}
		break;
		case 17:
			int value,position;
			if(dl==-1){
				cout<<"First You Have To Create List.";
			}
			else{
			if(cs==0){
		        cout<<"List Empty.";
				}
				else{
				do{
					cout<<"Enter Position To Update : ";
					cin>>position;
				}while(cs<position);
				cout<<"Enter Value : ";
				cin>>value;
				updateByPosition(value,position);
			}
	   }
		break;
		case 18 :
			exit(0);
		break;
		default :
			cout<<"Invalid Select Between 1-18.";
	}
		getch();
	}
  }
void createList(){
	char ch;
	int alpha;
	if(dl==-1){
		cout<<"First You Have To Create List.\n";
	}
	if(cs>=0 && dl!=-1){
		cout<<"List Already Exist\n";
		cout<<"Do You Want To Replace(Y\\N) ";
		cin>>ch;
		dl=0;
    }
	if(dl==-1 || ch=='y' || ch=='Y'){
            do{
            	cout<<"Enter Number of Contents For List : ";
            	cin>>s;
			}while(s<=0);
			do{
				cout<<"Enter Current Number of Contents For List : ";
				cin>>cs;
			}while(cs<1 || cs>s);
			dl=0;
			   for(int x=0,a=1;x<cs;x++,a++){
			        	if(x==0){
			        		cout<<"Enter "<<a<<" Element :";
				        	cin>>list[x];
			        	}else
			    	{
			    		do{
			    			cout<<"Enter "<<a<<" Element :";
					        cin>>alpha;
			     	}while(find(cs,alpha)>-1);
			     	list[x]=alpha;
			}
		}
		cout<<"List Successfully Created.\n";
	}
}
int find(int cs,int alpha){
	for(int y=0;y<cs;y++){
		if(list[y]==alpha){
			return y;
		}
	}
	return -1;
}
void copy(){
	int copy[cs];
	for(int x=0;x<cs;x++){
		copy[x]=list[x];
	}
	cout<<"List SuccessFully Copied.";
}
void swapByPosition(int p1,int p2){
    --p1;--p2;
	int temp=list[p1];
	list[p1]=list[p2];
	list[p2]=temp;
	cout<<"Values Swaped.\n";							
}
void swapByValue(int v1,int v2){
	int temp=list[v1];
	list[v1]=list[v2];
	list[v2]=temp;
	cout<<"Values Swaped.\n";
}
void displayList(){
	if(dl==-1){
		cout<<"First You Have To Create List.\n";
	}else{
	if(cs==0){
				cout<<"List Empty.";
			}else
			{
				if(cs!=0){
				cout<<"Serial No. Data\n";
				for(int i=0;i<cs;i++){
					cout<<i+1<<"            "<<list[i]<<endl;
				}
			}
		}
   }
}
void listFull(){
		if(dl==-1){
		cout<<"First You Have To Create List.";
	}else{
	if(cs==0){
				cout<<"List Empty.";
			}
			if(cs==100){
				cout<<"List Is Full.";
			}
			if(cs>0 && cs<100){ 
				cout<<"List Is Not Full.";
			}
    }
}
void listLenght(){
		if(dl==-1){
		cout<<"First You Have To Create List.";
	}else{
			if(cs==0){
					cout<<"List Empty.";
				}
				else
				{
					cout<<cs<<" Elements Exist.";
				}
    }
}
void addElement(int pos,int val){
	if(pos<cs){
		for(int i=cs;i>pos;i--){
		list[i]=list[i-1];
	}
		list[pos]=val;
	}
	else
	{
		list[cs]=val;
	}
	cs++;
	cout<<"Element Add Successfully.";
}
void clearList(){
		if(dl==-1){
		cout<<"First You Have To Create List.";
	}else{
	if(cs==0){
		cout<<"List Empty.";
	}
	else{
		for(int x=0;x<cs;x++){
			list[x]=-32666;
		}
		cs=0;
		cout<<"List Clear.";
   }
}
}
void deleteList(){
	if(dl==-1){
		cout<<"First You Have To Create List.";
	}else{
		dl=-1;
		cs=0;
		cout<<"List Successfully Deleted.";
   }
}
void listEmpty(){
	if(dl==-1){
	cout<<"First You Have To Create List.";
   }else{
   	if(cs<=0){
   		cout<<"List Empty.";
	   }else{
	   	cout<<"List Is Not Empty.";
	   }
   }
}
void removeByPosition(int pos){
   	for(int i=pos;i<cs;i++){
   		list[i]=list[i+1];
	   }
	   cs--;
	   cout<<"Element Successfully Deleted.";
}
void removeByValue(int val){
	++val;
	for(int i=val;i<cs;i++){
   		list[i]=list[i+1];
	   }
	   cs--;
	   cout<<"Element Successfully Deleted.";
}
void updateByValue(int val,int pos){
	list[pos] = val;
	cout<<"Value Updated Successfully.";
}
void updateByPosition(int val,int pos){
	list[--pos] = val;
	cout<<"Value Updated Successfully.";
}
void stackMenu(){
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
					if(stackEmpty()){
						cout<<"Stack Empty.";
					}else{
						float a;
						a = pop();
						cout<<"Value is : "<<a;
					}
					
				}
			break;
			case 5:
				stackFull();
			break;
			case 6:
				bool j;
				if(top==-1){
					cout<<cout<<"First You Have To Create Stack.";
				}else{
					j = stackEmpty();
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
					if(stackEmpty()){
						cout<<"Stack Empty.";
					}else{
					}
					i = stackLenght();
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
void stackFull(){
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
bool stackEmpty(){
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
int stackLenght(){
	return top;
}
