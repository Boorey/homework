#include <iostream>
using namespace std;
char authorized = 0x66;
char usr_pass[16];
char temp_pass[16];
void create_pass(){
	cout << "Enter your password ( 16 > ): ";
	cin >> usr_pass;
}
void check_pass(char pass[16]){
	int same;
	for (int i=0;i<16;i++){
		if (pass[i]==usr_pass[i]){
			same++;
			authorized = '1';
		}
		else{
			authorized = '0';
			break;
		}
	}

}
int main(){
  create_pass();
  while(true){
  	cout << "Enter your password: ";
  	cin >> temp_pass;
  	check_pass(temp_pass);
  	if (authorized=='1'){
  		cout << "\npassword is correct\n";
  }
  else{
  	cout << "\nincorrect password\n";
  }
  }

}