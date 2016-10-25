#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
//global variables
int  list[100];
int cs=0;
int dl=-1;
//function proto types
void menu();
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
bool int_check = false;
//main
int main(){
	menu();
	return 0;
}
//menu function
void menu(){
	int ch;
	while(1)
	{
		system("cls");
		cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENU ";
		cout<<"\n\t\tPlease  select any one them ";
		cout<<"\n\n1 = create list ";
		cout<<" \n2 = add element ";
		cout<<" \n3 = items present in the list ";
		cout<<" \n4 = swap by position ";
		cout<<" \n5 = swap by value ";
		cout<<" \n6 = copy ";
		cout<<" \n7 = clear list";
		cout<<" \n8 = update by position ";
		cout<<" \n9 = update by value ";
		cout<<"\n10 = display ";
		cout<<"\n11 = find by index";
		cout<<"\n12 = delete list";
		cout<<"\n13 = find by value ";
		cout<<"\n14 = remove by position ";
		cout<<"\n15 = remove by value ";
		cout<<"\n16 = EXIT ";

	
	 {

			cout<<"\n\n PLEASE enter you choice : :";
			cin>>ch;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "\nEntry should be an integer ranging 1-14" << endl;
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
		    exit(0);
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
















































//  check integer
/*bool int_check = false;
do {

			cout << "Enter your choice : ";
			cin >> choice;
			int_check = cin.fail();
			if (cin.fail() == true) {
				cout << "Entry should be an integer ranging 1-14" << endl;
			}
			cin.clear();
			cin.ignore(100, '\n');

		}*/
