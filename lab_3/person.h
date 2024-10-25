#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class person
{
public:
    string name;
    int height;
    string message;

    void set_name()
    {
        cout << "Enter the name : ";
        cin >> name;
    }

    void set_height()
    {
        cout << "Enter the height : ";
        while(!(cin>> height) or (height < 0)) {
            cout << "Wrong !! Enter again !\n";
            cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
            cin.sync();//Удалим данные из буффера
            cout << "Enter int > 0: ";
        }

    }



    void get_name()
    {
        string message = make_string_person(name, height);
        cout << message;
    }

    void execute_person()
    {
        set_name();
        set_height();
        get_name();
    }
private:
    string make_string_person(string name, int height)
    {
        stringstream ss;
        ss << height;
        string height_s = ss.str();
        string message = "This person name's " + name + " and their height's " + height_s;
        return message;
    }

};