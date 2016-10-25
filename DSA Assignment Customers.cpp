#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string>
#include<windows.h>
using namespace std;
//global variables
//int  list[100];
//int cs=0;
//int dl=-1;
class customer{
	public:
		int customerid;
		string name;
		char gender;
		int totalitemspurchased;
		char category;
		float discount;
		
		void getdata(){
			int F,M,I;
			cout<<"\nEnter customer id : ";cin>>customerid;
			cout<<"\nEnter customer name : ";cin>>name;
	           cout<<"\nEnter customer gender\nM for male\nF for female \n(M/F): ";cin>>gender;
			cout<<"\nEnter total items purchaced : ";cin>>totalitemspurchased;
			cout<<"\nEnter catogary \nF for furniture\nI for it \n(F/I): ";cin>>category;
			cout<<"\nEnter discount in percentage : ";cin>>discount;
		}
		void show(){
			cout<<"\ncustomer id : ";cout<<customerid;
			cout<<"\ncustomer name : ";cout<<name;
			cout<<"\ncustomer gender : ";cout<<gender;
			cout<<"\ntotal items purchaced : ";cout<<totalitemspurchased;
			cout<<"\ncatogary : ";cout<<category;
			cout<<"\ndiscount in percentage : ";cout<<discount;
			
		}
};


//global variables
customer  list[100],temp;
int currentsize=0;
int list_check=-1;

//function proto types
void menue();
void createlist();
int find(customer,int);
void display();
void deletelist();
int length();
void update(int ,customer);
void updatebyvalue(int,customer);
void swapbyposition(int ,int);
//void swapbyvalue(int,int);
void clearlist();
void copy();
void addelement(int);
int findbyindex(int);
void duplicate(int,int);
void notduplicate(int,int);
//main
int main(){	
	menue();
	return 0;
}

//menu function
void menue(){
	int ch;
	while(1)
	{
		system("cls");
		cout<<" \n\t\t\t\t Welcome ";
		cout<<" \n\t\t\t\t MENUE ";
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
		cout<<"\n14 = EXIT ";
	
	cout<<"\n\n PLEASE enter you choice : :";cin>>ch;
	
	switch(ch){
		//case 1 create list
		case 1 :
			createlist();
			break;
			
		//case 2		add element		
		case 2 :
			int c;
				if(list_check==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{
		do{
			cout<<"Enter no of elements you want to enter : : ";
			cin>>c;	
		}
		while(c<1||c>100);
	addelement(c);
			break;
			//case 3 length
			case 3 :
			if(list_check==-1){
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
							if(list_check==-1){
		cout<<"\nlist is not created \t First create list ";
	getch();
	}
	else{
		int x,y;
		do{
			cout<<"\nenter the first position : : ";cin>>x;
		}
		while(x<0&&x<=currentsize);
		
		do{
		cout<<"\nEnter the second position ";cin>>y;
	}
	while(x<0&&x<=currentsize);
	swapbyposition(x,y);
	}
			break;
			//case 5
		case 5 :
//								if(list_check==-1){
///		cout<<"\nlist is not created \t First create list ";
//	}
//	else{
//		int x,y,w,e;
//		do{
//			cout<<"\nenter the first value : : ";cin>>x;
//		}
//		while(find(x,currentsize)==-1);
//		do{
//		cout<<"\nEnter the second value ";cin>>y;
//	}
//	while(find(y,currentsize)==-1);
//	w=find(x,cs);
//	e=find(y,cs);
////	swapbyvalue(w,e);
//	}
			break;
		//case 6 copy list	
		case 6 :
				if(list_check==-1)
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
				if(list_check==-1){
		cout<<"\nlist is not created \t First create list ";
	getch();
	}
	else{
		int x,y;
		do{
			cout<<"\nenter position of element you want to replace : : ";cin>>x;
		}
		while(x==-1|| x>=currentsize);
		{
		cout<<"\nEnter customer data : ";temp.getdata();
	}
	update(x,temp);
	}
			break;
			// case 9 update by position	
		case 9 :
			
					if(list_check==-1){
		cout<<"\nlist is not created \t First create list ";
	getch();
	}
	else{
		int x,y,n;
	//	do{
			cout<<"\nenter customer want to replace : : ";cin>>x;
	//		n=find(x,cs);
	//	}
	//	while(n!=-1);	
	//	do{
		cout<<"\nEnter value ";temp.getdata();
	//	n=find(y,cs);
	//	duplicate(y,cs);
//	}
//	while(n==-1);
//	updatebyvalue(x,temp);		
	}
			break;
			//case 10 display
	case 10 :
			display();
			break;		
		//case 11 find by index
		case 11 :
				if(list_check==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{	
		int t,m;
		cout<<"\nEnter index you want to search  : : "; cin>>t;
	    list[t].show();
	//    cout<<"\n Element present at index "<< t <<" = "<<m;
	}
			break;
			//case 12 delete list
		case 12 :
			deletelist();
	//		getch();
			break;
			//case 13 find buy value
		case 13 :
					if(list_check==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{
		int f,l;
		cout<<"\nenter the value you want to search : :  ";cin>>l;
	//	f=find(l,currentsize);	
		cout<<"\nvalue is present in the list at index  "<<f+1;
	}
			break;
			//case 14 exit
		case 14 :
		    exit(0);
			break;											
			
	default:
		cout<<"\nPlease select correct choice : ";
    }  
 }
 getch();
}}

//create list function
void createlist(){
	char c;
	if(currentsize!=0){
		cout<<"\nlist is already created ";
		cout<<"\nDO you want to overwrite ";;cin>>c; 	
	}
	if(list_check==-1||c=='y'||c=='Y'){	
		do{
			cout<<"Enter No. of customers for which you want to enter data : : ";
			cin>>currentsize;	
		}
		while(currentsize<1||currentsize>100);
		for(int i=0;i<currentsize;i++){
			if (i==0)
			{
				cout<<"\nenter data for customer 1 :";list[i].getdata();
			}
			else
			{
				int value;
				do{
					cout<<"\nenter data for customer "<<i+1<<" : ";temp.getdata();
					//duplicate(value,cs);
			}
					while(find(temp,currentsize)!=-1);	
					list[i]=temp;	
				}		
	}}
				cout<<"\n\nlist is sucessfully created ::";
				list_check=0;		
}

// find function
int find(customer v,int p){
	for(int j=0;j<p;j++){
		if(v.customerid==list[j].customerid)
		{
		return j; 
	}}
	return -1;
}
//display function
void display(){
	if(list_check==-1)
		cout<<"\nNo list is present : ";
	else{
		if (currentsize==0){
			cout<<"\nlist is empty :";
		}
		else
		{
			cout<<"\nList Members are \n";
			for(int k=0;k<currentsize;k++){
				cout<<"\nData of "<<k+1<<" customer : ";				
			list[k].show();
			cout<<endl;			
			}
		}
	}
	}
//delete list function
void deletelist(){
	if(list_check==-1){
		cout<<"\nlist is not created \t First create list ";
	}
	else{
		list_check=-1;
		currentsize=0;
		cout<<"\nlist is deleted ";
	}
}
//length function
int length(){
	return currentsize;
}
//update function
void update(int v,customer d){
	list[v]=d;
	cout<<"\nlist is updated;";
}
//update by value function
//void updatebyvalue(int v, int d){
//	int x=find(v,cs);
//	list[x]=d;
///	cout<<"\nlist updated ";
//}
//swap by position function
void swapbyposition(int v,int d){
	 temp=list[v];
	list[v]=list[d];
	list[d]=temp;
	cout<<"values are succesfully swaped ";
}
//swap by value function
//void swapbyvalue(int v,int d){
//	int temp=list[v];
//	list[v]=list[d];
//	list[d]=temp;
//	cout<<"values are succesfully swaped ";
//}
// clear list function
void clearlist()
{
if(list_check==-1)
	{
		cout<<"list not exist  plz create the list \n"<<endl;
	}
	else 
	{
		currentsize=0;
		cout<<"List is successfully Cleared  \n";
	}	
}
//copy function
void copy(){
customer copylist[100];
	for(int i=0 ;i<currentsize;i++)
	{
		copylist[i]=list[i];
	}
	cout<<"List Successfully copied \n";
}
//add element function
void addelement(int c){
int value;
		for(int i=1;i<c+1;i++){
				//do{
					cout<<"\nenter "<<currentsize+1<<" customer data : ";temp.getdata();
				//	duplicate(value,cs);
			//}
		//			while(find(value,cs)!=-1);	
					list[currentsize]=temp;
					currentsize=currentsize+1;
				}
				cout<<"\n Elements are succesfully added : : ";		
	}
	//find by index function
/*int findbyindex(int a){
		int t=list[a];
        return t;
}
//duplicate function
/*void duplicate(int v,int p){
	for(int j=0;j<p;j++){
		if(v==list[j])
		{
		cout<<"\nvalue is present in the list at index  "<<j+1<<endl; 
		cout<<"please re_enter the value \n";
	}}
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
*/

