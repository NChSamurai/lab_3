#include <iostream>
#include <string>
using namespace std;

class name
{
public:
    string firstname;
    string surname;
    string thirdname;
    string message;

    void set_firstname()
    {
        cout << "Enter the firstname : ";
        getline(cin, firstname);
        if (firstname.empty() == false){
            message = firstname;}
    }

    void set_surname()
    {
        cout << "Enter the surname : ";
        getline(cin, surname);
        if (surname.empty() == false){
            if (message.empty() == false){
                message = message + " ";}
            message = message + surname;}
    }

    void set_thirdname()
    {
        cout << "Enter the thirdname : ";
        getline(cin, thirdname);
        if (thirdname.empty() == false){
            if (message.empty() == false){
                message = message + " ";}
            message = message  + thirdname;}
    }


    void get_name()
    {

        cout << message;
    }

    void execute_name()
    {
        set_firstname();
        set_surname();
        set_thirdname();
        get_name();
    }
private:
    string make_string_name(string firstname, string surname,string trirdname)
    {
        string message = firstname + " " + surname + " " + trirdname;
        return message;
    }

};