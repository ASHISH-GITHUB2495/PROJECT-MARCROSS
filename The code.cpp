#include<iostream>
#include<fstream>
#include<string.h>
#include<conio.h>
void create (void);
void modify (void);
void delet (void);
void login(void);
void developer(void);
void view(void);
void implement(void);
using namespace std;
int main()
{ int z=1,y=0;
  while(z==1)
  {
   system("cls");
  cout<<"                           _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
  cout<<"                         ||---------------------------------------------------||"<<endl;
  cout<<"                         ||    REPUBLIC OF GAMERS UNION~[PROJECT MACROSS]     ||"<<endl;
  cout<<"                         ||      ```````````````````````````````````          ||"<<endl;
  cout<<"                         ||    The Concept Of ENCRYPTION AND DECRYPTION       ||"<<endl;
  cout<<"                         ||                For FILE SECURITY                  ||"<<endl;
  cout<<"                         ||                       With                        ||"<<endl;
  cout<<"                         ||        STUDENT DATABASE MANAGEMENT SYSTEM.....    ||"<<endl;
  cout<<"                         ||                                                   ||"<<endl;
  cout<<"                         ||                                                   ||"<<endl;
  cout<<"                         ||Project leader:=ASHISH                             ||"<<endl;
  cout<<"                         ||CREW members:=SANTOSH,SANDEEP,RABINDRANATH,RAJESH  ||"<<endl;
  cout<<"                         ||_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  ||"<<endl;
  cout<<"                         ||---------------------------------------------------||"<<endl;
  cout<<"\n\n\n***************************************************************************************************\n\n\n";
  cout<<"        1.DEVELOPERS PORTAL\n";
  cout<<"        2.TEACHER LOGIN/SIGNUP PORTAL\n";
  cout<<"        3.STUDENT ACTIVITY PORTAL \n";
  cout<<"        4.EXIT\n";
  cin>>y;
  if(y==1)
  developer();
  else if(y==2)
  login();
  else if(y==3)
  view();
  else if(y==4)
break;

  else
  cout<<"WORNG INPUT...Try AGAIN\n";
  getch();
  
} return 0;
}




















///////////////////////login signup module//////////////////////////////////////////

void login(void)
{ int x;
 cout<<"for LOGIN-----1\n";
 cout<<"for SIGN UP---2\n";
 cin>>x;
 if(x==1)
 { string id,path;char t;int j=0;
  path="DATABASE/";
 cout<<"enter your ID\n";
 cin>>id;
 path.append(id.c_str());
 id=path;
fstream file(id.c_str(),ios::in);

 if(file.is_open())
 { string id2,password,password2;
  id2=id;
  id2.append(".txt");
  path.append(id2.c_str());
  
  cout<<"Enter your PASSWORD\n";
 cin>>password;
   fstream file4(id2.c_str(),ios::out);
while(!file.eof())
{ file>>t;
  t=t-121;
 if(!file.eof())
 { file4<<t;
 }
}
file4.close();
file.close();
file4.open(id2.c_str(),ios::in);
file4>>password2;
file4.close();
 if(password==password2)
 { cout<<"access granted\n";   ///delay
 remove(id2.c_str());
   //manipulation code
   int choice;
cout<<"create a student profile------1\n";
cout<<"modify a student profile------2\n";
cout<<"delete a student profile------3\n";
cout<<"for exit                 -----4\n";
cin>>choice;
if(choice==1)
{ 
create();

}
else if(choice==2)                                                  //modification module
{ 
modify();
}
else if(choice==3)
{ delet();
}
else if(choice==4)
{ return;
}
   
 }
 else
 {   
  cout<<"INCORRECT PASSWORD\n";
 }

 }
else
 cout<<"INVALID ID\n";
 }
 if(x==2)
   {    
   string createId,createId2,pass,pass2,path,path2,path3,passD,createD;
char x;
cout<<"FOR SIGN UP==...\n\n\n";
cout<<"[Id and Password both must be 8 characters]\n";
cout<<"Enter your ID :";
cin>>createId;
cout<<"Enter your PASSWORD :";
cin>>pass;
createD=createId;
passD=pass;
path="DATABASE/";
path2="DATABASE_CONFIDENTIAL/logins";
path3=path2;
path3.append(".txt");
path.append(createId.c_str());
createId=path;
createId2=createId;
createId2.append(".txt");
fstream file6(createId2.c_str(),ios::out);
fstream fileD(path2.c_str(),ios::out | ios::app);
fstream fileD1(path3.c_str(),ios::out);
fileD1<<createD<<"    "<<passD<<endl;
fileD1.close();
fileD1.open(path3.c_str(),ios::in);
while(!fileD1.eof())
{ fileD1>>noskipws>>x;
 x=x+131;
 if(!fileD1.eof())
 { fileD<<x;
 }
}
fileD.close();
fileD1.close();
remove(path3.c_str());
file6<<pass;
file6.close();
fstream file7(createId.c_str(),ios::out);
file6.open(createId2.c_str(),ios::in);
while(!file6.eof())
{file6>>x;
x=x+121;
if(!file6.eof())
{ file7<<x;
  fileD<<x;
}
}
file6.close();
file7.close();
fileD.close();
remove(createId2.c_str());
cout<<"YOUR ACCOUT HAS BEEN CREATED\n";
cout<<"thank you\n";

   }
   return;
}










//////////////////////////////////////////developer module


void developer(void)
{ int x;char c;
string ID;
int pass;
string path1,path2;
path1="DATABASE_CONFIDENTIAL/logins";
path2="DATABASE_CONFIDENTIAL/data";
cout<<"enter your id sir\n";
cin>>ID;
if(ID=="ashish")                                         //developer id
{ cout<<"enter your password sir\n";
  cin>>pass;
  if (pass==24955942)                                      //developer password
  { int choice;
    cout<<"FOR VIEW ALL IDS and PASSWORDS ACCESSED--------1\n";
    cout<<"FOR VIEW ALL STUDENT DATA ---------------------2\n";
    cout<<"[all data viewed has created after the software is started]"<<endl;
    cin>>choice;
    if (choice==1)
    {    cout<<" IDs      PASSWORDs\n";
         cout<<"-----    ----------\n";
    	 fstream f(path1.c_str(),ios::in);
    while(!f.eof())
    { f>>noskipws>>c;
      if(!f.eof())
      { c=c-131;                                                        //decryption of ids file
        cout<<c;
	  }
	}
    	
	}
	else if(choice==2)
	{  cout<<"NAME   ROLL   BRANCH   ADDRESS"<<endl;
	   cout<<"----   -----  ------  --------\n";
		 ifstream f(path2.c_str(),ios::in);
    while(!f.eof())
    { f>>c;
   if(!f.eof())
      { c=c-122;                                                 //decryption of stud file
        cout<<c;
	  }
	}
    	
	}
  
  
 
  }
  else 
  {  cout<<"sorry...wrong password \n";
  cout<<"thank you ...joing us\n";
  }
}
else 
{ cout<<"sorry...wrong ID \n";
  cout<<"thank you ...joing us\n";
  }
  return;

}
///////////////////////////////////////////////////////////////module definition area ////////////////////////

void create ()
{ string roll,Roll,branch,address,name,path,path2,path3,rollD,oroll;
path="DATABASE_STUD/";
path2="DATABASE_CONFIDENTIAL/data";
path3=path2;
char ch;
cout<<"enter NAME=:";
cin>>name;
cout<<"\nenter ROLL=:";
cin>>roll;
cout<<"\nenter BRANCH=:";
cin>>branch;
cout<<"\nenter ADDRESS=:";
cin>>address;
oroll=roll;
rollD=roll;
path.append(roll.c_str());
roll=path;
 Roll=roll;
 Roll.append(".txt");
 fstream file1(Roll.c_str(),ios::out);
 file1<<name<<"   "<<oroll<<"   "<<branch<<"   "<<address;
 file1.close();
 file1.open(Roll.c_str(),ios::in);
 fstream file2(roll.c_str(),ios::out);
	while(!file1.eof())
	{ file1>>noskipws>>ch; 
	  ch=ch+121;                                       //reading from the files
	  if (!file1.eof())
	  { file2<<ch;
		  }	}
		  file1.close();
		  file2.close();
remove(Roll.c_str());
path3.append(".txt");
file1.open(path3.c_str(),ios::out);
file1<<name<<"     "<<rollD<<"      "<<branch<<"      "<<address<<endl;
file1.close();
file1.open(path3.c_str(),ios::in);
file2.open(path2.c_str(),ios::out | ios::app);
while(!file1.eof())
{ file1>>noskipws>>ch;
ch=ch+122;                 ///++++
if(!file1.eof())
{ file2<<ch;
}
}
file1.close();
file2.close();
remove(path3.c_str());
  cout<<"student file created succefully :("<<name<<")"<<endl;
  return ;
}

////////.............................................................................................................

void modify()
{ string roll,Roll,branch,address,name,path;
path="DATABASE_STUD/";
char ch;
cout<<"enter roll for updation\n";
cin>>roll;
path.append(roll.c_str());
roll=path;
fstream file3(roll.c_str(),ios::in);
if(file3.is_open())
{
file3.close();
remove(roll.c_str());
cout<<"enter new NAME    =:";
cin>>name;
cout<<"\nenter new ROLL   =:";
cin>>roll;
cout<<"\nenter new BRANCH =:";
cin>>branch;
cout<<"\nenter new ADDRESS=:";
cin>>address;
 path="DATABASE_STUD/";
 path.append(roll.c_str());
 roll=path;
 Roll=roll;
 Roll.append(".txt");

  fstream file1(Roll.c_str(),ios::out);
 file1<<name<<" "<<roll<<" "<<branch<<" "<<address;
 file1.close();
 file1.open(Roll.c_str(),ios::in);
 fstream file2(roll.c_str(),ios::out);
	while(!file1.eof())
	{ file1>>noskipws>>ch; 
	  ch=ch+121;                                       //reading from the files
	  if (!file1.eof())
	  { file2<<ch;
		  }	}
		  file1.close();
		  file2.close();
remove(Roll.c_str());
  cout<<"databse modified of Roll:"<<Roll<<endl;
  cout<<"Thank YOU\n";
  return ;	
}
else
{
cout<<"no roll found\n";
return;}

}
///////////////////////////.....................................................................................................
void delet()
{string roll,Roll,branch,address,name,path;
path="DATABASE_STUD/";
char ch;
cout<<"enter roll for deletion\n";
cin>>roll;
path.append(roll.c_str());
roll=path;
fstream file3(roll.c_str(),ios::in);
if(file3.is_open())
{

file3.close();

remove(roll.c_str());
cout<<"student file roll:= "<<roll<<" has been deleted \n";
return;
}
else
{ cout<<"no file exist of this roll no.\n";
return;
} 

}




void view()
{ string roll,Roll,branch,address,name,path;
path="DATABASE_STUD/";
char ch;
cout<<"enter roll for view\n";
cin>>roll;
path.append(roll.c_str());
fstream file3(path.c_str(),ios::in);
cout<<"NAME   ROLL   BRANCH   ADDRESS\n";
cout<<"----   -----  ------   -------\n";
if(file3.is_open())
{while(!file3.eof())
  { file3>>noskipws>>ch;
    ch=ch-121;
if(!file3.eof())
    { cout<<ch;
	 }
	
  }
}
else
{ cout<<"no file exist of this roll no.\n";
} 
return;
}
////////////////////////...............................................................................................................
