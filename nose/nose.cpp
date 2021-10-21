
#include <iostream>
#include <string>
#include <string.h>
#include <cstdlib>

using namespace std;

bool acceso = false;
string user;
string password;
bool emptyuser = false;
bool emptypassword = false;

void login(){

    system("cls");
    user.clear();
    password.clear();
    cout << "\t\t------------" << endl;
    cout << "\t\tNugzy Loader" << endl;
    cout << "\t\t------------" << endl;
    cout << "\n\tPlease Login or Register" << endl;
    if (emptyuser == true) {

        cout << "\n\t[ERROR] user cant be empty" << endl;
        emptyuser = false;

    }
    if (emptypassword == true) {

        cout << "\n\t[ERROR]Password too short or empty" << endl;
        emptypassword = false;

    }
    cout << "\n\tUser:"; getline(cin, user);
    if (user.size() <= 3) {

        emptyuser = true;
        return(login());

    }
    cout << "\n\tPassword:"; getline(cin, password);
    if (password.size() <= 4) {

        emptypassword = true;
        return(login());

    }

}

int main()
{
    
    login();

}