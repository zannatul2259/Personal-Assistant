                                       /*
     ----------------------------------------------------------------------------
               Project title   : Hudson(personal assistant)
               Made By         : Mehzabin Rahman, Mosammat Zannatul Ferduss
               Written in      : C++
               Started project : 27 February, 2024
               Platform        : Windows
               IDE used        : Codeblocks
               Last Modified   : 3 March , 2024
               Total Code      : 370+ Lines
    ----------------------------------------------------------------------------
                                        */



#include<bits/stdc++.h>
#include<windows.h>
#include<shellapi.h>

using namespace std;


//function to search from any websites
void srch(string query, string extra)
{
  for (int i = 0; query[i] != '\0'; i++)
  {
    if (query[i] == ' ')
      query[i] = '+';
  }


  system("cls");


  if (extra == "youtube")
  {
string    url = "start https://www.youtube.com/results?search_query=";
    url += query;
    system(string(url).c_str());
  }
  else if (extra == "song")
  {
    // for international songs
 string   url = "start https://en.muzmo.org/search?q=";
    url += query;
    system(string(url).c_str());
    Sleep(50);
     }
  else if (extra == "pdf")
  {
  string  url = "start https://www.google.com/search?q=filetype%3Apdf+";
    url += query;
    system(string(url).c_str());
  }
  else if (extra == "movie")
  {

   string url = "start https://www.google.com/search?q=";
    url += query;
    url += "+-inurl%3A(htm%7Chtml%7Cphp%7Cpls%7Ctxt)+intitle%3Aindex.of+%22last+modified%22(mp4%7Cmkv%7Cwma%7Caac%7Cavi)";
    system(string(url).c_str());
  }else if(extra=="place"){
      string  url = "start https://www.google.com/maps/search/";
    url += query;
    system(string(url).c_str());
  }
  else
  {
  string  url = "start https://www.google.com/search?q=";
    url += query;
    system(string(url).c_str());
    }


}

//fucntion to greet the user at a particular time of the day
void wishme()
{
	time_t now=time(0);
	tm*time=localtime(&now) ;
	if(time->tm_hour<12)
	{
		cout<<"Good morning dear user."<<endl;
		string s= "Good morning dear user";
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);


	}
	else if(time->tm_hour>= 12&& time->tm_hour<16)
	{
	cout<<"Good afternoon dear user."<<endl;

string s= "Good afternoon dear user";
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);

	}
else if(time->tm_hour>16 && time->tm_hour<24)
	{
		cout<<"Good evening dear user"<<endl;
		string s= "Good evening dear user";
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);

	}

}

main()

{
    system("color 9");
system("cls");

wishme();

cout<<setw(10)<<setfill('*')<<"I am Hudson , your personal assistant."<<endl;
string s= "I am Hudson, your personal assistant.";
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);


do{
 cout<<"Do you want me to assist you, sir?"<<endl;
		string s="Do you want me to assist you, sir?" ;
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);
string ans;
getline(cin,ans);



if(ans=="yes"){

cout<<"Okay, sir. "<<endl;
		string s="Okay, sir." ;
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);

do{
        system("cls");
     cout<<"Write your command, sir"<<endl;
		string s= "Write your command, sir.";
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);


string com;
getline(cin,com);

if(com=="open word"){
 ShellExecute(NULL ,"open", "C:\\Users\\Dell\\Desktop\\Word.lnk" ,NULL , NULL,  SW_SHOWNORMAL);
 system("pause");

}
else if(com=="open powerpoint"){
        //clause to open powerpoint
 ShellExecute(NULL ,"open", "C:\\Users\\Dell\\Desktop\\PowerPoint.lnk" ,NULL , NULL,  SW_SHOWNORMAL);
 system("pause");
}
//clause to open notepad
else if(com=="open notepad"){
 ShellExecute(NULL ,"open", "C:\\Windows\\System32\\notepad.exe" ,NULL , NULL,  SW_SHOWNORMAL);
 system("pause");
}
//clause to open excel spreadsheet
else if(com=="open excel"){
 ShellExecute(NULL ,"open", "C:\\Users\\Dell\\Desktop\\Excel.lnk" ,NULL , NULL,  SW_SHOWNORMAL);
 system("pause");
}
//clause to tell the time
else if (com=="tell me the time"){

   time_t now = time(0);

char* date_time = ctime(&now);

   string p= "The current date and time is:";
   string u = "espeak \"" + p + "\"";
const char* x = u.c_str();
system(x);

   string o = date_time;
   string v = "espeak \"" + o + "\"";
const char* y = v.c_str();
system(y);


   cout << "The current date and time is: " << date_time << endl;
   system("pause");
   }
else if(com=="search"){

cout<<"enter the website or content  name"<< endl;
string s="Enter the website or content name" ;
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);
string extra;
getline(cin,extra);

cout<<"Enter query"<<endl;
string t="Enter your query" ;
string u = "espeak \"" + t + "\"";
const char* y = u.c_str();
system(y);
string query;
getline(cin,query);
srch(query,extra);
system("pause");
}
else if(com=="simple calculator")
// clause to create calculator using
// switch statement

{
	char op;
	float num1, num2;

	// It allows user to enter operator
	// i.e. +, -, *, /
	cout<<"Enter the operator: "<<endl;
	string s="Enter the operator" ;
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);
	cin >> op;

	// It allow user to enter the operands
	cout<<"Enter two numbers to calculate: "<<endl;
	string t="Enter two numbers to calculate" ;
	string y = "espeak \"" + t + "\"";
const char* z = y.c_str();
system(z);
cin >> num1 >> num2;
cout<<"The result is: "<<endl;
string e="The result is " ;
string d = "espeak \"" + e + "\"";
const char* b = d.c_str();
system(b);
// Switch statement begins
	switch (op) {
	// If user enter +
	case '+':
		cout << num1 + num2<<endl;
		break;

	// If user enter -
	case '-':
		cout << num1 - num2<<endl;
		break;

	// If user enter *
	case '*':
		cout << num1 * num2<<endl;

		break;
		// If user enter /
	case '/':
		cout << num1 / num2<<endl;
		break;

	// If the operator is other than +, -, * or /,
	// error message will display
	default:
		cout << "Error! operator is not correct";
	}
	// switch statement ends

system("pause");

}else if(com=="generate a random number"){
    //clause to generate random numbers
    cout<<"Okay, sir. How many numbers do I generate?"<<endl;
    string s="Okay, sir. How many numbers do I generate?" ;
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);
    int r;
    cin>>r;
int lb , ub;
    cout<<"What is the range of numbers? Enter the upper and lower bound"<<endl;
     string t="What is the range of numbers? Enter the upper and lower bound" ;
string u = "espeak \"" + t + "\"";
const char* y = u.c_str();
system(y);

     cin>>ub;
     cin>>lb;
     cout<<"The numbers are: "<<endl;
     string w="The numbers are" ;
string b = "espeak \"" + w + "\"";
const char* a = b.c_str();
system(a);


    // This program will create some sequence of random
    // numbers on every program run within range lb to ub
    for (int i = 0; i < r; i++){
        int m=(rand() % (ub - lb + 1)) + lb;
        cout << m << endl;
        string w= to_string(m) ;
string b = "espeak \"" + w + "\"";
const char* a = b.c_str();
system(a);

    }
system("pause");
}
else if(com== "terminate"){

break;

}else if(com=="I love you"){

cout<<"Dear user, I am sure you too are loved by a lot of people. I wish you a very happy day ahead!"<<endl;
string t="Dear user, I am sure you too are loved by a lot of people. I wish you a very happy day ahead!" ;
string u = "espeak \"" + t + "\"";
const char* y = u.c_str();
system(y);

system("pause");


} else if (com == "find ip" || com == "find my ip" || com == "ip")
  {
    cout<<"Finding your IP address"<<endl;
    system("ipconfig");
    system("pause");
  }
  else if (com == "shutdown" || com == "restart")
  {
   cout<<"Your PC will ";


    cout<<"Now , I am going to sleep";
    if (com == "shutdown")
     system("shutdown /s");
    else
     system("shutdown /r");
    Sleep(10);
     }
else{
cout<<"The command is unknown. Please enter a registered command"<<endl;
string t="The command is unknown. Please enter a registered command" ;
string u = "espeak \"" + t + "\"";
const char* y = u.c_str();
system(y);

system("pause");
}
}
while(1);

}

else{
cout<<"Okay, sir. I'll see you later. "<<endl;
string s="Okay, sir. I'll see you later." ;
string c = "espeak \"" + s + "\"";
const char* x = c.c_str();
system(x);

break;
}
}
while(1);

return 0;
}
