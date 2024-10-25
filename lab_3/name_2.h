#include <iostream>
#include <string>
using namespace std;

class name_2
{
public:
    string firstname;
    string surname;
    string thirdname;
    string message;
    void execute_name_2()
    {
        set_firstname();
        if (firstname.empty() == false){
            set_surname();
            if (surname.empty() == false){
                set_thirdname();
            }

        }
        get_name();
    }

private:
    void set_firstname()
    {
        cout << "Enter the firstname : ";
        getline(cin, firstname);
        message = firstname;
    }

    void set_surname()
    {
        cout << "Enter the surname : ";
        getline(cin, surname);
        if (surname.empty() == false){
            message = message + " " + surname;}
    }

    void set_thirdname()
    {
        cout << "Enter the thirdname : ";
        getline(cin, thirdname);
        if (thirdname.empty() == false){
            message = message + " " + thirdname;}
    }


    void get_name()
    {

        cout << message;
    }
private:
    string make_string_name(string firstname, string surname,string trirdname)
    {
        string message = firstname + " " + surname + " " + trirdname;
        return message;
    }

};