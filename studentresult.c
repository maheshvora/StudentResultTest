#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class stud
{
	string name;
	int sub1,sub2,sub3;
	void getdata()
	{
		cout<<"Enter the student name";		
		cin>>name;
		cout<<"Enter the subject 1 marks : ";
		cin>>sub1;
		cout<<"Enter the subject 2 marks : ";
		cin>>sub2;
		cout<<"Enter the subject 3 marks : ";
		cin>>sub3;
		this.name=name;
		this.sub1=sub1;
		this.sub2=sub2;
		this.sub3=sub3;
	}
	void result()
	{
		cout<<"Marks of subject 1 :"<<sub1;		
		cout<<"Marks of subject 2 :"<<sub2;
		cout<<"Marks of subject 3 :"<<sub3;
		cout<<"Total :"<<sub1+sub2+sub3;
		cout<<"perc. :"<<((sub1+sub2+sub3)/3)*100;	
	}
}

void main()
{
	stud s=new stud();
	s.getdata();
	s.result();
}
