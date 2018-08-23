#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

int main(){
	int ind = 1;
	int clv;
	string cmd;
	string cmd2;
	string gg;
	string gh;
	string kh;
	string mass[100000];
	string mass2[100000];
	int i = 0,s = 1,t = 0;
	char a;
	int b = 0;
	string hh;
	char ar[100000];
	int u = 0;
	while ( 1 != 0 ){
	cout<<"Select the operating mode(1-2):"<<endl;
	cout<<"                  1.Choose a command"<<endl;
	cout<<"                  2.Add a command"<<endl;
	a = getch();
	if ( a == '1' ){
		system("cls");
				ifstream file5("command.txt");
			while ( !file5.eof() ){
				getline(file5,mass[i]);
				i++;
			}
				file5.close();
				i = 0;
				ifstream file6("command1.txt");
			while ( !file6.eof() ){
				getline(file6,mass2[i]);
				i++;
			}
				file6.close();
			cout<<"Choose the command(1-"<<i-1<<"):"<<endl;
			while (s != i ){
				cout<<s<<"."<<mass2[s]<<"("<<mass[s]<<")"<<endl;
				s++;
			}
			cin>>b;
			ofstream file8("writer.txt");
			file8<<mass[b] + '\0';
			file8.close();
			ifstream file9("writer.txt");
			file9.getline(ar,100000);
			file9.close();
			Sleep(5000);
			while ( ar[t] != '\0' ){
				if (ar[t] == '~'){
				keybd_event(16,0,0,0);
				keybd_event(192,0,0,0);
				Sleep(30);
				keybd_event(192,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '!'){
				keybd_event(16,0,0,0);
				keybd_event(49,0,0,0);
				Sleep(30);
				keybd_event(49,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '#' && ar[t] == '¹'){
				keybd_event(16,0,0,0);
				keybd_event(51,0,0,0);
				Sleep(30);
				keybd_event(51,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '$'){
				keybd_event(16,0,0,0);
				keybd_event(52,0,0,0);
				Sleep(30);
				keybd_event(52,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '%'){
				keybd_event(16,0,0,0);
				keybd_event(53,0,0,0);
				Sleep(30);
				keybd_event(53,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '^' && ar[t] == ':'){
				keybd_event(16,0,0,0);
				keybd_event(54,0,0,0);
				Sleep(30);
				keybd_event(54,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '&' && ar[t] == '?'){
				keybd_event(16,0,0,0);
				keybd_event(55,0,0,0);
				Sleep(30);
				keybd_event(55,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '*'){
				keybd_event(16,0,0,0);
				keybd_event(56,0,0,0);
				Sleep(30);
				keybd_event(56,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '('){
				keybd_event(16,0,0,0);
				keybd_event(57,0,0,0);
				Sleep(30);
				keybd_event(57,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == ')'){
				keybd_event(16,0,0,0);
				keybd_event(48,0,0,0);
				Sleep(30);
				keybd_event(48,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '_'){
				keybd_event(16,0,0,0);
				keybd_event(189,0,0,0);
				Sleep(30);
				keybd_event(189,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '+'){
				keybd_event(16,0,0,0);
				keybd_event(187,0,0,0);
				Sleep(30);
				keybd_event(187,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '{'){
				keybd_event(16,0,0,0);
				keybd_event(219,0,0,0);
				Sleep(30);
				keybd_event(219,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '}'){
				keybd_event(16,0,0,0);
				keybd_event(221,0,0,0);
				Sleep(30);
				keybd_event(221,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '|'){
				keybd_event(16,0,0,0);
				keybd_event(220,0,0,0);
				Sleep(30);
				keybd_event(220,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == ':'){
				keybd_event(16,0,0,0);
				keybd_event(186,0,0,0);
				Sleep(30);
				keybd_event(186,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '"'){
				keybd_event(16,0,0,0);
				keybd_event(222,0,0,0);
				Sleep(30);
				keybd_event(222,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '<'){
				keybd_event(16,0,0,0);
				keybd_event(188,0,0,0);
				Sleep(30);
				keybd_event(188,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '>'){
				keybd_event(16,0,0,0);
				keybd_event(190,0,0,0);
				Sleep(30);
				keybd_event(190,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '?'){
				keybd_event(16,0,0,0);
				keybd_event(191,0,0,0);
				Sleep(30);
				keybd_event(191,0,KEYEVENTF_KEYUP,0);
				keybd_event(16,0,KEYEVENTF_KEYUP,0);
				}
				else if (ar[t] == '.'){
				keybd_event(190,0,0,0);
				Sleep(30);
				keybd_event(190,0,KEYEVENTF_KEYUP,0);
				}
				else{
				keybd_event(ar[t],0,0,0);
				Sleep(30);
				keybd_event(ar[t],0,KEYEVENTF_KEYUP,0);
			}
				t++;
			}
			i = 0;
			u = 0;
			s = 1;
			t = 0;
	}
	else if ( a == '2' ){
		system("cls");
		cout<<"Please enable Caps lock"<<endl;
			cout<<"Enter the command:";
				getline(cin,cmd);
					cout<<"Enter the key text to the command:";
						getline(cin,cmd2);
					ifstream file2("command.txt");
				while ( !file2.eof() ){
				getline(file2,gh);
				gg = gg + gh + "\n";
				}
					file2.close();
					ofstream file1("command.txt");
				file1<<gg<<cmd;
					file1.close();
					ifstream file3("command1.txt");
				while ( !file3.eof() ){
				getline(file3,gh);
				kh = kh + gh + "\n";
				}
					file3.close();
					ofstream file4("command1.txt");
				file4<<kh<<cmd2;
					file4.close();
							kh = "";
							gg = "";
							cmd = "";
							cmd2 = "";
							ind++;
	}
	else{
		system("cls");
		cout<<"Error:Item not found";
		getch();
	}
		system("cls");
}
}
