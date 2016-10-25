#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include <stack>
using namespace std;
void meeenu();
void menu();
void linkListMenu();
void Queuemenu();
void SMenu();
void QQUEUEMenu();
void SSmenu();
void expressionMenu();
void dbleMENUqueue();
void dblestackMenu();
bool int_check = false;

int main(){
	meeenu();
	return 0;
	
}



void meeenu(){
	int ch;
	while(1)
	{
		system("cls");
		cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENU ";
		cout<<"\nPlease  select any one them ";
		cout<<"\n\n\t1 = LIST ";
		cout<<" \n\t2 = LINK LIST";
		cout<<" \n\t3 = QUEUE ";
		cout<<" \n\t4 = STACK ";
		cout<<" \n\t5 = Stack using link list ";
		cout<<" \n\t6 = Queue using link list ";
		cout<<" \n\t7 = Expression ";
		cout<<" \n\t8 = Doubly queue";
		cout<<" \n\t9 = Doubly stack ";
	
		cout<<"\n\t-1       = EXIT ";

	
	 {

			cout<<"\n\n PLEASE enter you choice : :";
			cin>>ch;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry should be an integer ranging 1-7" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
			switch(ch){
		//case 1 create list
		case 1 :
			menu();
			break;
	    case 2 :
	    	linkListMenu();
	    	break;
	    case 3 :{
	    	Queuemenu();
	    	
			break;
		}
		case 4:{
			
			SSmenu();
			break;
		}
		case 5 : {
			SMenu();
			break;
		}
		
		case 6: {
			QQUEUEMenu();
			break;
		}
		case 7:{
			expressionMenu();
			break;
		}
		case 8:{
			dbleMENUqueue();
			break;
		}
		case 9:{
			 dblestackMenu();
			break;
		}
	    	
	    	
	    	
	    case -1 :
	    	exit(0);
	    	break;
	    default :
	    	cout<<"\n Please enter correct choice : :";
	    	break;
}
getch();
}
}




int  list[100];
int cs=0;
int dl=-1;
//function proto types

void createlist();
int find(int ,int);
void display();
void deletelist();
int length();
void update(int ,int);
void updatebyvalue(int,int);
void swapbyposition(int ,int);
void swapbyvalue(int,int);
void clearlist();
void copy();
void addelement(int,int);
int findbyindex(int);
void duplicate(int,int);
void notduplicate(int,int);
void removeByValue(int);
void removeByPosition(int);
//menu function
void menu(){
	int ch;
	while(1)
	{
		system("cls");
		cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENU ";
		cout<<"\n\t\tPlease  select any one them ";
		cout<<"\n\n\t1 = create list ";
		cout<<" \n\t2 = add element ";
		cout<<" \n\t3 = items present in the list ";
		cout<<" \n\t4 = swap by position ";
		cout<<" \n\t5 = swap by value ";
		cout<<" \n\t6 = copy ";
		cout<<" \n\t7 = clear list";
		cout<<" \n\t8 = update by position ";
		cout<<" \n\t9 = update by value ";
		cout<<"\n\t10 = display ";
		cout<<"\n\t11 = find by index";
		cout<<"\n\t12 = delete list";
		cout<<"\n\t13 = find by value ";
		cout<<"\n\t14 = remove by position ";
		cout<<"\n\t15 = remove by value ";
		cout<<"\n\t16 = Return to main menu \n\n";

	
	 {

			cout<<"\n\n PLEASE enter you choice : :";
			cin>>ch;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry should be an integer ranging 1-16" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}

	switch(ch){
		//case 1 create list
		case 1 :
			createlist();
			break;
		//case 2		add element
		case 2 :
			if(dl==-1){
			cout<<"\nFirst You Have To Create List.";
		}else{
			if(cs==0){
				cout<<"\nList Empty.";
			}
			else
	      	{
			int beta;
			do {

			cout << "\nEnter element to add : ";
			cin >> beta;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		}while(find(cs,beta)==-1);
			int position1;
			do {

			cout << "\nEnter position : ";
			cin >> position1;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}}while(position1<1 || position1>100);
			addelement(position1,beta);
		}
	}
			//case 3 length
			case 3 :
			if(dl==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{
		 int s;
			s=length();
			cout<<"\ntotal number of Items in the list = "<<s;
			getch();
		}
			break;
			//case 4 swap by position
		case 4 :
							if(dl==-1){
		cout<<"\nlist is not created \t First create list ";
	getch();
	}
	else{
		int x,y;
		do{
			cout<<"\nenter the first position : : ";cin>>x;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		}
		while(x<0&&x<=cs);

		do{
		cout<<"\nEnter the second position ";cin>>y;
		int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

	}
	while(x<0&&x<=cs);
	swapbyposition(x,y);
	}
			break;
			//case 5
		case 5 :
								if(dl==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{
		int x,y,w,e;
		do{
			cout<<"\nenter the first value : : ";cin>>x;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		}
		while(find(x,cs)==-1);
		do{
		cout<<"\nEnter the second value ";cin>>y;
		int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

	}
	while(find(y,cs)==-1);
	w=find(x,cs);
	e=find(y,cs);
	swapbyvalue(w,e);
	}
			break;
		//case 6 copy list
		case 6 :
				if(dl==-1)
		{
			cout<<"\nList is not created yet : First create list  ";
		}
		else
		{
			copy();
		}
			break;
			//case 7 clear list
		case 7 :
			clearlist();
			break;
			//case 8  update by position
		case 8 :
				if(dl==-1){
		cout<<"\nlist is not created \t First create list ";
	getch();
	}
	else{
		int x,y;
		do{
			cout<<"\nenter position of element you want to replace : : ";cin>>x;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		}
		while(x==-1|| x>=cs);
		do{
		cout<<"\nEnter value ";cin>>y;
		int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		notduplicate(y,cs);
	}
	while(find(y,cs)!=-1);
	update(x,y);
	}
			break;
			// case 9 update by position
		case 9 :

					if(dl==-1){
		cout<<"\nlist is not created \t First create list ";
	getch();
	}
	else{
		int x,y,n;
		do{
			cout<<"\nenter value you want to replace : : ";cin>>x;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

			n=find(x,cs);
		}
		while(n!=-1);
		do{
		cout<<"\nEnter value ";cin>>y;
		int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		n=find(y,cs);
		duplicate(y,cs);
	}
	while(n==-1);
	updatebyvalue(x,y);
	}
			break;
			//case 10 display
		case 10 :
			display();
			break;

		//case 11 find by index
		case 11 :
				if(dl==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{
		int t,m;
		cout<<"\nEnter index you want to search  : : "; cin>>t;
		int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

	    m=findbyindex(t);
	    cout<<"\n Element present at index "<< t <<" = "<<m;
	}
			break;
			//case 12 delete list
		case 12 :
			deletelist();
	//		getch();
			break;
			//case 13 find buy value
		case 13 :
					if(dl==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{
		int f,l;
		cout<<"\nenter the value you want to search : :  ";cin>>l;
		int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		f=find(l,cs);
		cout<<"\nvalue is present in the list at index  "<<f+1;
	}
			break;
			//case 14 exit
	    case 14 :
	    	int pos;
			if(dl==-1){
			cout<<"First You Have To Create List.";
			}else{
				do{
					cout<<"Enter Postion You Want To Delete : ";
					cin>>pos;
					int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

				}while(pos>cs);
				removeByPosition(pos);
			}
			break;
		case 15 :
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
					int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

					sindex = find(cs,val);
				}while(sindex!=-1);
				removeByValue(sindex);
				}
		}
		break;

		case 16 :
		    meeenu();
			break;

	default:
		cout<<"\nPlease select correct choice : ";
    }

 getch();
}}


//create list function
void createlist(){
	char c;
	if(cs!=0){
		cout<<"\nlist is already created ";
		cout<<"\nDO you want to overwrite (y/n) ";cin>>c;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct value :" << endl;
			
			
			}
			
			cin.clear();
			cin.ignore(100, '\n');

	}
	if(dl==-1||c=='y'||c=='Y'){
		do{
			cout<<"\nEnter No. of items you want to enter : : ";
			cin>>cs;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		}
		while(cs<1||cs>100);
		for(int i=0;i<cs;i++){
			if (i==0){
		{
				cout<<"\nenter 1 value :";cin>>list[i];
				int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct value :" << endl;
			
			i--;
			}
			
			cin.clear();
			cin.ignore(100, '\n');

			}
		}
			else
			{
				int value;
				do{
					cout<<"\nenter "<<i+1<<" value : ";cin>>value;
					int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct value :" << endl;
			}
			cin.clear();	cin.ignore(100, '\n');
			//	duplicate(value,cs);
			}
					while(find(value,cs)!=-1);
					list[i]=value;
		}
	}
	
				cout<<"\n\nlist is sucessfully created ::";
				dl=0;
}}
// find function
int find(int v,int p){
	for(int j=0;j<p;j++){
		if(v==list[j])
		{
		return j;
	}}
	return -1;
}
//display function
void display(){
	if(dl==-1)
		cout<<"\nNo list is present : ";
	else{
		if (cs==0){
			cout<<"\nlist is empty :";
		}
		else
		{
			cout<<"\nList Members are \n";
			for(int k=0;k<cs;k++){
			cout<<list[k]<<endl;
			}
		}
	}
	}
//delete list function
void deletelist(){
	if(dl==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{
		dl=-1;
		cs=0;
		cout<<"\nlist is deleted ";
	}
}
//length function
int length(){
	return cs;
}
//update function
void update(int v,int d){
	list[v]=d;
	cout<<"\nlist is updated;";
}
//update by value function
void updatebyvalue(int v, int d){
	int x=find(v,cs);
	list[x]=d;
	cout<<"\nlist updated ";
}
//swap by position function
void swapbyposition(int v,int d){
	int temp=list[v];
	list[v]=list[d];
	list[d]=temp;
	cout<<"values are succesfully swaped ";
}
//swap by value function
void swapbyvalue(int v,int d){
	int temp=list[v];
	list[v]=list[d];
	list[d]=temp;
	cout<<"values are succesfully swaped ";
}
// clear list function
void clearlist()
{
if(dl==-1)
	{
		cout<<"list not exist  plz create the list \n"<<endl;
	}
	else
	{
		cs=0;
		cout<<"List is successfully Cleared  \n";
	}
}
//copy function
void copy(){
int copylist[100];
	for(int i=0 ;i<cs;i++)
	{
		copylist[i]=list[i];
	}
	cout<<"List Successfully copied \n";
}
//add element function
void addelement(int c){
int value;
		for(int i=1;i<c+1;i++){
				do{
					cout<<"\nenter "<<cs+1<<" value : ";cin>>value;
					int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nPlease enter correct choice :" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

					duplicate(value,cs);
			}
					while(find(value,cs)!=-1);
					list[cs]=value;
					cs=cs+1;
				}
				cout<<"\n Elements are succesfully added : : ";
	}
	//find by index function
int findbyindex(int a){
		int t=list[a];
        return t;
}
//duplicate function
void duplicate(int v,int p){
	for(int j=0;j<p;j++){
		if(v==list[j])
		{
		cout<<"\nvalue is already present in the list at index  "<<j+1<<endl;
		cout<<"please re_enter the value \n";
	}
	}
}
//not duplicate function
void notduplicate(int v,int p){
	for(int j=0;j<p;j++){
		if(v!=list[j])
		{
		cout<<"\nvalue is not present in the list ";
		cout<<"please re_enter the value \n";
	}}
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

void addelement(int pos,int val){
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




























struct node{
	int item;
	node *next;
};
node *current = NULL;
node *head = NULL;
node *temp = NULL;

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

void linkListMenu(){
	int gemma;
	while(1){
		system("cls");
		cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENU ";
		cout<<"\n\t\tPlease  select any one them\n";
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
		cout<<"13-Return to main menu\n";
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
				meeenu();
			break;
			default:
				cout<<"Enter An Valid Option.";
			break;
		}
		getch();
	}
}
void createLinkList(){
	char ch;node * t;
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
				t=current;
				do{
					cout<<"Enter "<<i+1<<" Element : ";
					cin>>h;
				}while(findElement(h)!=NULL);
				t->item = h ;
				t->next = NULL;
				current=t;
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




// Simple Queue
void createqueue();
void Qdisplay();
int Qlength();
int find(int);
int isfull();
void enqueue(int);
int dequeue();
bool isempty();
int front,rear=-1;
int ts;
int *queue= new int[ts];
void Queuemenu(){
	
	while(1){
	int ch;
	system("cls");
	cout<<"\t\t\tWELCOME to Queue";
	cout<<"\n\t\t\t\tMeNU";
	cout<<"\nPlease select any one of the menu :";
	cout<<"\n\t1=create queue";
	cout<<"\n\t2=display queue";
	cout<<"\n\t3=find";
	cout<<"\n\t4=length";
	cout<<"\n\t5=is full";
	cout<<"\n\t6=Enqueue ";
	cout<<"\n\t7=Dequeue ";
	cout<<"\n\t8=is Empty ";
    cout<<"\n       -1=Return to main menu";
	cout<<"\n\nPlease enter your option : :";cin>>ch;
	
	switch(ch){
		case 1:{	
		createqueue();	
			break;
		}
		
		case 2:{
				if(front==-1){
			cout<<"\nQueue doesnot exist First create Queue :";
		}
			else if(rear==0){
			cout<<"\n Queue is empty" ;
			}
			else{
				Qdisplay();
			}
			break;
		}
		case 3:{
					if(front==-1){
			cout<<"\nQueue doesnot exist First create Queue :";
		}
		else{
			int a,b;
			cout<<"\nEnter a value you want to search : ";cin>>a;
			b=find(a);
			if(b==-1){
				cout<<"\nValue not found ";
			}
			else{
				cout<<"\nYour value is found at index : "<<b+1;
			}
		}	
			break;
		}
		
		case 4:{
						if(front==-1){
			cout<<"\nQueue doesnot exist First create Queue :";
		}
		else{ int a;
			a=Qlength();
			cout<<"\nLength of queue is  : "<<a;
		}
			break;
		}
		
		
		case 5:{
			int a;
			a=isfull();
			if(a==1){
				cout<<"\nQueue is full ";
			}
			else
			cout<<"\n queue is not full";
			break;
		}
		
		case 6 :{
			int b;
							if(front==-1){
			cout<<"\nQueue doesnot exist First create Queue :";
		}
		else{
			int a=isfull();
			if(a==1){
				cout<<"\nQueue is full ";
			}
			else{
			cout<<"\nEnter value you want to enter : :";cin>>b;
			enqueue(b);
			}
		}
		
			break;
		}
		case 7:{
				if(front==-1){
			cout<<"\nQueue doesnot exist First create Queue :";
		}
		else{
			int a=isempty();
			if(a==1){
				cout<<"\nQueue is empty ";
			}
			else{
				int b;
				b=dequeue();
			cout<<"\nDequeue element is : :";cout<<b;
			}
		}
			break;
		}
		case 8:{
								if(front==-1){
			cout<<"\nQueue doesnot exist First create Queue :";
		}
		else{
			bool a;
			a=isempty();
			if(a==1){
				cout<<"\nQueue is empty ";
			}
			else{
				cout<<"Queue is not empty ";
			}
		}	
			break;
		}
		
		case -1:{
			meeenu();
			break;
		}
		default:{
			cout<<"\n your option is invalid :  ";
			break;
		}		
	}
	getch();	
}
}


void createqueue(){
	char choice;	
			if(rear!=-1){	
				cout<<"\n queue already exist Do you want to overwrite :";
				cin>>choice;
			}
			if(rear==-1||choice=='y'||choice||'Y'){
				do{cout<<"Enter total size of queue : ";cin>>ts;
				}while(ts<0);
				do{cout<<"\nEnter no of elements you want to enter : ";cin>>rear;
				}while(rear<0 && rear>=ts);
				cout<<"\nEnter queue Elements : ";
				for(int i=front;i<rear;i++){
					cout<<"\nEnter "<<i+1<<" value :";
					cin>>queue[i];
				}		
			}	
}

void Qdisplay(){
	if(rear>front){
			cout<<"\n Queue elements are :\n";
				for(int i=front;i<rear;i++){
					cout<<queue[i]<<endl;
				}	
				}
	else{
		for(int i=front;i<ts;i++){
					cout<<queue[i]<<endl;
				}
		for(int i=0;i<rear;i++){
					cout<<queue[i]<<endl;
				}
	}
}
int Qlength(){
	if(rear>front){
		return rear-front;
	}
	else{		
		return ts-front+rear+1;
	}
}
int find(int n){
	
			for(int i=front;i<=rear;i++){
					if(queue[i]==n){
						return i;
				break;
				}
				
					}
					return -1;
				}
int isfull(){
	if (length()==ts)
	return 1;
	else
	return 0;
}
void enqueue(int a ){
	rear=(rear+1)%ts;
	queue[rear]=a;
	rear++;
	cout<<"\n Successfully added ";
}
int dequeue(){
	int temp=queue[front];
	front=(front+1)%ts;
	rear--;
	return temp;
	
}
bool isempty(){
	if(rear==0){
		return 1;
		
	}
	else{
		return 0;
	}
}


//Stack using link list
int top=-1;
void createStack();
void displaystack();
int findstack(int);
void deletestack();
int pops();
void pushs(int );
void SMenu(){
	int gemma;
	while(1){
			system("cls");
		cout<<"\t\tWELCOME to stack using link list";
	    cout<<"\n\t\t\t\tMeNU";
	    cout<<"\nPlease select any one of the menu :\n";
		cout<<"1-Create Stack\n";
		cout<<"2-Display Stack\n";
		cout<<"3-Find \n";
		cout<<"4-Delete stack\n";
		cout<<"5-Push\n";
		cout<<"6-Pop\n";
		cout<<"-1-Return to main menu\n";
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
				meeenu();
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



//Queue using Link List       
void displayQueue();
void QQenqueue( int a);
int QQdequeue();
void createQQueue();
void deletQQueue();
int findQQueue(int x);

void QQUEUEMenu(){
	int gemma;
	while(1){
			system("cls");
		cout<<"\t\t\t\tWELCOME ";
	    cout<<"\n\t\t\t\tMeNU";
	    cout<<"\nPlease select any one of the menu :\n";
		cout<<"\t1-Create Queue\n";
		cout<<"\t2-Display Queue\n";
		cout<<"\t3-Find \n";
		cout<<"\t4-Delete Queue\n";
		cout<<"\t5-Enqueue\n";
		cout<<"\t6-dequeue\n";
		cout<<"         -1-Return to main menu\n";
		cout<<"Select An Option(1-13) ";
		cin>>gemma;
		cin.clear();
		cin.ignore(1000,'\n');
		switch(gemma){
			case 1:
				createQQueue();
			break;
			case 2:
				displayQueue();
			break;
			case 3:
				if(head==NULL){
					cout<<"\nQueue is Not Created.";
				}else{
					int a,b;
					cout<<"\nEnter Value To Find : ";
					cin>>a;
		           b=findQQueue(a);
		           
		           if(b==0){
		           	cout<<"\nvalue is not present in stack ";
				   }
				   
				   else{
				   	cout<<"\nvalue found at index : "<<b;
				   	
				   }
				}
			break;
			case 4:
				deletQQueue();
			break;
			case 5:
				if(head==NULL){
					cout<<"\nStack Not Created.";
				}else{ int a;
				cout<<"\nenter value :";cin>>a;
				
				
			    QQenqueue( a);
}
			break;
			
			
			case 6:
			if(head==NULL){
					cout<<"\nStack Not Created.";
				}else{ 
				cout<<"\npop element is : :"<<QQdequeue();
			}
			break;
			case -1:
				meeenu();
			break;
			default:
				cout<<"Enter An Valid Option.";
			break;
		}
		getch();
	}
}
void createQQueue(){
	char ch;
	if(head!=NULL){
		cout<<"QueueAlready Exist.\n";
		cout<<"Do You Want To Overwrite (Y\\N)";
		cin>>ch;
	}
	if(head==NULL || ch=='y' || ch=='Y'){
		int a;
		do{
		cout<<"Enter Current Size Of Queue : ";
		cin>>a;
	    }while(a<1);
	    int h;
	    cout<<"Enter Data Now\n";
	    for(int i=0;i<a;i++){
	    	if(head==NULL){
	    		head = new node;
	    		current = head;
	    		cout<<"Enter "<<i+1<<" Element : ";
	    		cin>>current->item;
	    		head->next = head;
			}else{
				current->next = new node;
				current = current->next;
					cout<<"Enter "<<i+1<<" Element : ";
					cin>>current->item;
				current->next = head;
       }
    }
       cout<<"\nQueue Successfully Created."; 
  }
}
void displayQueue(){
	if(head == NULL){
		cout<<"\nQueue is not created";
	}else{
		temp = head;
		do{
			cout<<temp<<"\t"<<temp->item;
			cout<<"\t\t"<<temp->next<<endl;
			temp = temp->next;
		}while(temp!=head);
	}
}

void QQenqueue( int a){
	current->next=new node;
	current=current->next;
	current->item=a;
	current->next=head;
	cout<<"\nvalue successfully Enqueued ";
	
}

int QQdequeue(){
	int b;
	b=head->item;
	head=head->next;
	return b;
}
void deletQQueue(){
	if(head==NULL){
		cout<<"\nstack is not created";
	}else{
		head = NULL;
		cout<<"\nstack Successfully Deleted.";
	}
}
int findQQueue(int x)
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
















float *stk = new float[ts];
void SSmenu();
void displayStack();
bool isEmpty();
void isFull();
void SScreateStack();
void deleteStack();
void clearStack();
void push(float);
float pop();
int isLenght();
void SSmenu(){
	int choice;
	while(1){
		system("cls");
			cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENU ";
		cout<<"\n\t\tPlease  select any one them \n";
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
		{
		cin>>choice;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
		switch(choice){
			case 1 :
				SScreateStack();
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
					{
							cin>>n;
							int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
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
void SScreateStack(){
	char ch;
	if(top==-1){
		cout<<"First You Have To Create Stack.\n";
	}if(top!=-1){
		cout<<"List Already Created.";
		cout<<"\nDo You Want To Replace(Y\\N) ";
		{
		cin>>ch;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
	}if(top==-1 || ch=='Y' || ch=='y'){
		do{
			cout<<"Enter Size : ";
		{
				cin>>ts;
				int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
		}while(ts<=0);
		do{
			cout<<"Enter Curent Size : ";
		{
				cin>>top;
				int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
		}while(top<0 || top>ts);
		for(int i=0,b=1;i<top;i++,b++){
			cout<<"Enter "<<b<<" Element : ";
		{
				cin>>stk[i];
				int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
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










//int ts=0;














//float *stk = new float[ts];
int ex_ts=0,ex_nts=0,ex_top=-1;
char *expression = new char[ts];
char *post = new char[ex_nts];
char *nstk = new char[ex_nts];
int x=0,lenght=0,val=0,check=0;

void input();
int answer(int,int,char);
void evaluation();
void parenthesise();
void displayExpression();
int operatorWeight(char);
void forPostfix();
void postFix(char[],char[],int);
void expressionMenu();

void expressionMenu(){
	int choice;
	while(1){
		system("cls");
		cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENU \n";
		cout<<"\t1-Input Expression\n";
		cout<<"\t2-Is Parenthesise\n";
		cout<<"\t3-Infix To Postfix\n";
		cout<<"\t4-Evaluation\n";
		cout<<"\t5-Display\n";
		cout<<"       -1-Main Menu\n";
		cout<<"Choose An Option : ";
		cin>>choice;
		cin.clear();
		cin.ignore(1000,'\n');
		switch(choice){
			case 1 :
				input();
			break;
			case 2 :
				parenthesise();
			break;
			case 3 :
				forPostfix();
			break;
			case 4 :
				evaluation();
			break;
			case 5 :
				displayExpression();
			break;
			case -1 :
				meeenu();
			default :
				cout<<"Enter A Valid Number(1-5)";
			break;
		}
		getch();
	}
}
void input(){
	char ch;
	if(ex_top!=-1){
		cout<<"Expression Already Exist.";
		cout<<"Do You Want To Enter Again(Y\\N)\n";
		cin>>ch;
	}
	if(ex_top==-1 || ch=='y' || ch=='Y'){
		do{
			cout<<"Enter Total Num Of Char For Expression : ";
			cin>>ex_ts;
			cin.clear();
		    cin.ignore(1000,'\n');
		}while(ex_ts<3);
		cout<<"Enter Expression Here : ";
		for(int i=0;i<ex_ts;i++){
		cin>>expression[i];
	}
	ex_top++;
		cout<<"Expression Successfully Inserted.";
	}
}
void parenthesise(){
	if(ex_top==-1){
		cout<<"No Expression Exist.";
	}else{
		int u=0;
		for(int i=0;expression[i]!='\0';i++){
			if(expression[i]=='('){
				u++;
			}if(expression[i]==')'){
				u--;
			}
		}
		if(u==0){
			ex_nts = ex_ts + u;
				cout<<"Expression Is Fully Parenthesise.\n";
			for(int i=0;i<ex_nts;i++){
				nstk[i]=expression[i];
		    	}
			}else{
				cout<<"Expression Is Not Fully Parenthesise.\n";
			}
		if(u>0){
			ex_nts = u + ex_ts;
			for(int j=0;j<ex_nts;j++){
				if(j<ex_ts){
					nstk[j] = expression[j];
				}else{
					nstk[j]=')';
				}
			}
				cout<<"Now Its Fully Parenthesise.\n";
		}if(u<0){
			u = u * -1;
			ex_nts = u + ex_ts;
			for(int k=0;k<ex_nts;k++){
				if(k<u){
					nstk[k]='(';
				}else{
					nstk[k] = expression[k-u];
				}
				}
					cout<<"Now Its Fully Parenthesis.\n";
			}
		}
		}
	
void forPostfix(){
	if(ex_top==-1){
		cout<<"No Expression Exist.";
	}else{
	if(ex_nts==0){
		cout<<"Fisrt Make Expression Fully Parenthesise.";
	}
	else{
		postFix(nstk,post,ex_nts);
	    x = strlen(post);
	    cout<<"Successfully Converted To Postfix.";
	}
  }
}
int operatorWeight(char ch) {
   switch (ch) {
      case '/':
      case '*': return 2;
      case '+':
      case '-': return 1;
      default : return 0;
   }
}

void postFix(char infix[], char postfix[], int size) {
   stack<char> s;
   int weight;
   int i = 0;
   int k = 0;
   char ch;   
   while (i < size) {
      ch = infix[i];
      if (ch == '(') {
         s.push(ch);
         i++;
         continue;
      }
      if (ch == ')') {
         while (!s.empty() && s.top() != '(') {
            postfix[k++] = s.top();
            s.pop();

         }
         if (!s.empty()) {
            s.pop();
         }
         i++;
         continue;
      }
      weight = operatorWeight(ch);
      if (weight == 0) {
         postfix[k++] = ch;

      }
       else {
         if (s.empty()) {
            s.push(ch);
         }
         else {
            while (!s.empty() && s.top() != '(' && weight <= operatorWeight(s.top())) {
               postfix[k++] = s.top();
               s.pop();

            }
            s.push(ch);
         }
      }
      i++;
   }
   while (!s.empty()) {
      postfix[k++] = s.top();
      s.pop();
   }
   postfix[k] = 0;
}
void displayExpression(){
	if(ex_top==-1){
		cout<<"No Expression Exist.";
	}else{
	cout<<"Input Expression is : ";
	for(int i=0;i<ex_ts;i++){
		cout<<expression[i];
     }
     if(ex_nts>0){
  	cout<<"\nParenthesise Expression Is : ";
		for(int p=0;p<ex_nts;p++){
			cout<<nstk[p];
     }
   }if(x>0){
    cout<<"\nPostfix Expression Is : ";
     for(int i=0;i<x;i++){
			cout<<post[i];
		}
    }
    if(check!=0){
	cout<<"\nAnswer Is : "<< val;
    }
  }
}
void evaluation(){
	if(ex_top==-1){
		cout<<"No Expression Exist.";
		}else{
		if(x==0){
				cout<<"First Convert Expression Into Postfix.";
			}else{
      stack<int> fork;
      int i = 0;
      char ch;
      while (i < x) {
        ch = post[i];
          if (isdigit(ch)) {
            fork.push(ch-'0');
       }
      else {
         int op1 = fork.top();
         fork.pop();
         int op2 = fork.top();
         fork.pop();
         val = answer(op1, op2, ch);
         fork.push(val);
      }
      i++;
      check++;
   }
   cout<<"Successfully Evaluated.";
 }
}
}
int answer(int op1, int op2, char operate) {
   switch (operate) {
      case '*': return op2 * op1;
      case '/': return op2 / op1;
      case '+': return op2 + op1;
      case '-': return op2 - op1;
      default : return 0;
   }
}









struct dbleQnode{
	int item;
	dbleQnode *next;
	dbleQnode *prev;
};
dbleQnode *dblequeueCurrent = NULL;
dbleQnode *dblequeueHead = NULL;
dbleQnode *queueTempDL = NULL;
void dblecreatequeue();
void dbledisplayqueue();
void dbledeletequeue();
void dbleenqueue(int);
int dbledequeue();
dbleQnode *dblefindqueue(int);



void dbleMENUqueue(){
	int gemma;
	while(1){
		system("cls");
		cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENU ";
		cout<<"\nPlease  select any one them\n ";
		cout<<"\t1-Create Double Queue\n";
		cout<<"\t2-Display Double Queue\n";
		cout<<"\t3-Find Value\n";
		cout<<"\t4-Delete Double Queue\n";
		cout<<"\t5-Enqueue\n";
		cout<<"\t6-Dequeue\n";
		cout<<"       -1-Return to Main Menu\n";
		cout<<"Select An Option(1-7) ";
		{
		cin>>gemma;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
		switch(gemma){
			case 1:
				dblecreatequeue();
			break;
			case 2:
				dbledisplayqueue();
			break;
			case 3:
				if(dblequeueHead==NULL){
					cout<<"Link List Not Created.";
				}else{
					int a;
					cout<<"Enter Value To Find : ";
				{
						cin>>a;
						int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
					dbleQnode *b;
					b = dblefindqueue(a);
					if(b==NULL){
						cout<<"Value Not Found.";
					}else{
						cout<<"Value Found At : "<<b;
					}
				}
			break;
			case 4:
				dbledeletequeue();
			break;
			case 5:
				if(dblequeueHead == NULL){
					cout<<"Queue Is Not Exist.";
				}else{
					int a;
					cout<<"Enter Element To Add : ";
		{
								cin>>a;
						int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
					dbleenqueue(a);
				}
			break;
			case 6:
				if(dblequeueHead == NULL){
					cout<<"Queue Is Not Exist.";
				}else{
				int b;
				b = dbledequeue();
				cout<<"Element is : "<<b;	
				}
			break;
			case -1:
				meeenu();
			break;
			default :
				cout<<"Invalid Selection !";
			break;
		}
		getch();
    }
}
void dblecreatequeue(){
	char ch;
	if(dblequeueHead != NULL){
		cout<<"Queue Is Already Exist.\n";
		cout<<"Do You Want To Overwright(Y\\N)";
		{
		cin>>ch;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
	}
	if(dblequeueHead == NULL || ch=='y' || ch=='Y'){
		int a;
		dblequeueHead = NULL;
		do{
			cout<<"Enter Total Number Of Element : ";
			{
		  cin>>a;
				int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
		}while(a<1);
		cout<<"Enter VALUES : "<<endl;
		for(int i=0;i<a;i++){
			if(dblequeueHead == NULL){
				dblequeueHead = new dbleQnode;
				dblequeueCurrent = dblequeueHead;
			{
					cin>>dblequeueHead->item;
					int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
				dblequeueHead->prev = NULL;
				dblequeueHead->next = dblequeueHead;
			}else{
				dblequeueCurrent->next = new dbleQnode;
				(dblequeueCurrent->next)->prev = dblequeueCurrent;
				dblequeueCurrent = dblequeueCurrent->next;
		{
						cin>>dblequeueCurrent->item;
					int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
				dblequeueCurrent->next = dblequeueHead;
			}
		}
		cout<<"Successfully Created.";
	}
}
void dbledisplayqueue(){
	if(dblequeueHead == NULL){
		cout<<"Queue Not Exist.";
	}else{
		int p=1;
		queueTempDL = dblequeueHead;
		cout<<"Sr.No      Prev->Address        Own->Add        Data       Next->Address \n";
		do{
		   if(queueTempDL->prev == NULL){
		   	cout<<p<<"\t   "<<queueTempDL->prev<<"\t\t\t"<<queueTempDL<<"\t "<<queueTempDL->item
		   <<"\t   "<<queueTempDL->next<<endl;
		   queueTempDL = queueTempDL->next;
		   p++;
		   }else{
		   cout<<p<<"\t   "<<queueTempDL->prev<<"\t\t"<<queueTempDL<<"\t "<<queueTempDL->item
		   <<"\t   "<<queueTempDL->next<<endl;
		   queueTempDL = queueTempDL->next;
		   p++;
	     }
		}while(queueTempDL != dblequeueHead);
	}
}
void dbledeletequeue(){
	if(dblequeueHead == NULL){
		cout<<"Queue Not Exist.";
	}else{
		dblequeueHead = NULL;
		cout<<"Successfully Deleted.";
	}
}
dbleQnode *dblefindqueue(int a){
	queueTempDL = NULL;
	dblequeueCurrent =dblequeueHead;
	int i=0;
	queueTempDL = dblequeueCurrent;
	do{
		if(dblequeueCurrent->item == a){
			return dblequeueCurrent;
		}if(i!=0){
			queueTempDL = queueTempDL->next;
		}
		dblequeueCurrent = dblequeueCurrent->next;
		i++;
	}while(dblequeueCurrent != NULL);
	return dblequeueCurrent;
}
int dbledequeue(){
	int b;
	b = dblequeueHead->item;
	dblequeueHead = dblequeueHead->next;
	return b;
}
void dbleenqueue(int c){
	dblequeueCurrent->next = new dbleQnode;
	(dblequeueCurrent->next)->prev = dblequeueCurrent;
	dblequeueCurrent =dblequeueCurrent->next;
	dblequeueCurrent->item = c;
	dblequeueCurrent->next =dblequeueHead;
	cout<<"Successfully Added.";
}





struct dblestackNode{
	int item;
	dblestackNode *next;
	dblestackNode *prev;
};
dblestackNode *dblestkcurrent = NULL;
dblestackNode *headSDL = NULL;
dblestackNode *tempSDL = NULL;
int dbleStacktop;

void dblecreateStack();
void dbledisplayStack();
dblestackNode *dblefindStack(int);
void dbledeleteStack();
void dblepushStack(int);
int dblepopStack();



void dblestackMenu(){
	int choice;
	while(1){
		system("cls");
		cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENU ";
		cout<<"\nPlease  select any one them\n ";
		cout<<"\t1-Create Stack \n";
		cout<<"\t2-Display stack \n";
		cout<<"\t3-Delete Stack \n";
		cout<<"\t4-Find Element \n";
		cout<<"\t5-Push Element \n";
		cout<<"\t6-Pop element \n";
		cout<<"       -1-Return to main menu\n";
		cout<<"Choose An Option : ";
		{
		cin>>choice;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry should be an integer ranging 1-13" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
		switch(choice){
			case 1 :
				dblecreateStack();
			break;
			case 2 :
				dbledisplayStack();
			break;
			case 3 :
				dbledeleteStack();
			break;
			case 4 :
				if(headSDL == NULL){
					cout<<"Stack Not Exist.";
				}else{
					int a;
					dblestackNode *b;
					cout<<"Enter Element To Find : ";
				{
						cin>>a;
						int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry should be an integer ranging 1-13" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
					b = dblefindStack(a);
					if (b == NULL){
						cout<<"Element Is Not Exist.";
					}else{
						cout<<"Element Found at "<<b;
					}
				}
			break;
			case 5 :
				if(headSDL == NULL){
					cout<<"Stack Not Exist.";
				}else{
					int a;
					cout<<"Enter Value To Push : ";
				{
					cin >>a;
						int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry should be an integer ranging 1-13" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
					dblepushStack(a);
				}
			break;
			case 6 :
				if(headSDL == NULL){
					cout<<"Stack Not Exist.";
		    	}else{
		    		int a =dblepopStack();
		    		cout<<"Popped Element Is : "<<a;
				}
			break;
			case -1 :
				meeenu();
			break;
			default :
				cout<<"Invalid Option !";
			break;
		}
		getch();
	}
}
void dblecreateStack(){
	char option;
	if(headSDL != NULL){
		cout<<"Stack Already Exist"<<endl;
		cout<<"Do You Want To Overwrite(Y\\N) : ";
		{
		cin>>option;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
	}
	if(headSDL == NULL || option=='y' || option=='Y'){
		do{
			cout<<"Enter Total Numbers Of Element : ";
		{
				cin>>dbleStacktop;
				int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry correct value" << endl;
			}
			cin.clear();
			cin.ignore(256, '\n');

		}
		}while(dbleStacktop<1);
		cout<<"Enter Data \n";
		for(int i=0;i<dbleStacktop;i++){
			if(headSDL == NULL){
			dblestkcurrent = headSDL;
			headSDL = new dblestackNode;
			cin>>headSDL->item;
			headSDL->next = NULL;
			headSDL->prev = NULL;
		}else{
			dblestkcurrent = headSDL;
			headSDL = new dblestackNode;
			dblestkcurrent->prev =headSDL;
			cin>>headSDL->item;
			headSDL->next = dblestkcurrent;
			headSDL->prev = NULL;
		}
	  }
	  cout<<"Successfully Created.";
	}
}
void dbledisplayStack(){
	if(headSDL == NULL){
		cout<<"Stack Not Exist.";
	}else{
		cout<<&headSDL<<"\thead\t\t"<<headSDL<<endl;
		cout<<"Own->Add"<<"\t\t"<<"Prev->Add"<<"\t\t"<<"Value"<<"\t\t"<<"Next->Add\n";
		dblestkcurrent = headSDL;
		do{
			if(dblestkcurrent->prev==NULL){
			  cout<<dblestkcurrent<<"\t\t"<<dblestkcurrent->prev<<"\t\t        "<<dblestkcurrent->item;
			  cout<<"\t\t"<<dblestkcurrent->next<<endl;
			  dblestkcurrent = dblestkcurrent->next;
			}else{
			  cout<<dblestkcurrent<<"\t\t"<<dblestkcurrent->prev<<"\t\t"<<dblestkcurrent->item;
			  cout<<"\t\t"<<dblestkcurrent->next<<endl;
			 dblestkcurrent = dblestkcurrent->next;
			}
		}while(dblestkcurrent!=NULL);
	}
}
void dbledeleteStack(){
	if(headSDL == NULL){
		cout<<"Stack Not Exist.";
	}else{
		headSDL = NULL;
		cout<<"Successfully Deleted.";
	}
}
dblestackNode *dblefindStack(int a){
	dblestkcurrent = headSDL;
	int i=0;
	tempSDL = dblestkcurrent;
	do{
		if(dblestkcurrent->item == a){
			return dblestkcurrent;
		}if(i!=0){
			tempSDL = tempSDL->next;
		}
		dblestkcurrent = dblestkcurrent->next;
		i++;
	}while(dblestkcurrent != NULL);
	return dblestkcurrent;
}
void dblepushStack(int a){
	dblestkcurrent = headSDL;
	headSDL = new dblestackNode;
	headSDL->item = a;
	headSDL->prev = NULL;
	headSDL->next = dblestkcurrent;
	dblestkcurrent->prev = headSDL;
	cout<<"Successfully Pushed.";
}
int dblepopStack(){
	dblestkcurrent = headSDL;
	int b;
	b = headSDL->item;
	headSDL = headSDL->next;
	headSDL->prev = NULL;
	return b;
}
