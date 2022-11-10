#include<iostream>
using namespace std;
class student{
	public:
	int stdId,total;
	string stdName;
	void getpersonaldetails()
	{
		cout<<"Enter StdID:";
		cin>>stdId;
		cout<<"Enter stdName:";
		cin>>stdName;
	}
	void putpersonaldetails()
	{
		cout<<"StdId is:"<<stdId<<endl;
		cout<<"StudentName is:"<<stdName<<endl;
	}
	
};
class teacher{
	public:
	int tId,total;
	string tName;
	void getpersonaldetails()
	{
		cout<<"Enter tID:";
		cin>>tId;
		cout<<"Enter tName:";
		cin>>tName;
	}
	void putpersonaldetails()
	{
		cout<<"tId is:"<<tId<<endl;
		cout<<"teacherName is:"<<tName<<endl;
	}
};
class gradecard{
	public:
	int stdId,tId,intM1,intM2,asMark1,asMark2,tIAMark,endsemmark,Total;
	float GPA;
	void entermarks()
	{
		cout<<"Enter student id:";
		cin>>stdId;
		cout<<"Enter teacher id:";
		cin>>tId;
		cout<<"Enter internalmarks1 :";
		cin>>intM1;
		cout<<"Enter internalmarks2 :";
		cin>>intM2;
		cout<<"Enter assignmentmarks1 :";
		cin>>asMark1;
		cout<<"Enter assignmentmarks2 :";
		cin>>asMark2;
		tIAMark=intM1+intM2+asMark1+asMark2;
		cout<<"Enter endsemmark :";
		cin>>endsemmark;
		Total=tIAMark+endsemmark;
	}
	void compute()
	{
		cout<<"The total is:"<<Total<<endl;
		if(Total>=90)
		{
			GPA=10;
		}
		else if(Total>=80 && Total<90)
		{
			GPA=9;
		}
		else if(Total>=70 && Total<80)
		{
			GPA=8;
		}
	}
	void viewgradecard()
	{	
		cout<<"StdId is:"<<stdId<<endl;
		cout<<"Marks is:"<<Total<<endl;
		cout<<"GPA is:"<<GPA<<endl;
	}
};
gradecard gd1[20];
int main()
{
	student st1[20];
	teacher tchr1[20];
	for(int i=0;i<10;i++){
		st1[i].getpersonaldetails();
		st1[i].putpersonaldetails();
		tchr1[i].getpersonaldetails();
		tchr1[i].putpersonaldetails();
		gd1[i].entermarks();
		gd1[i].compute();
		gd1[i].viewgradecard();
	}
	return 0;
}
