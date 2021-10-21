
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
bool notanumb = false;
bool invalidnumb = false;
#define funcmain = main();
string usermenusel;

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

    if (user.size() > 3 && password.size() > 4) {

        acceso = true;

    }

}
void Menu() {

    
    usermenusel.clear();
    system("cls");
    cout << "\n\tWelcome " << user << "!" << endl;
    cout << "\n\tWhat do you wanna do?" << endl;
    cout << "\n\t1)Example1" << endl;
    cout << "\n\t2)Example2" << endl;
    cout << "\n\t3)Example3" << endl;
    cout << "\n\t0)Return Login Menu" << endl;
    if (notanumb == true) {

        cout << "\n\t[ERROR]Number cant be empty" << endl;
        notanumb = false;

    }
    if (invalidnumb == true) {

        cout << "\n\t[ERROR]Invalid Number" << endl;

    }
    cout << "\n\tNumber:"; getline(cin, usermenusel);
    if (usermenusel.size() == 0) {

        notanumb = true;
        return(Menu());

    }
    if (usermenusel.size() >= 2) {

        invalidnumb = true;
        return(Menu());

    }

}

int main()
{
    
    login();
    if (acceso == true) {

        Menu();

        if (usermenusel == "0") {

            return(main());

        }

    }


}