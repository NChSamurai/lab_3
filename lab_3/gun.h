#include <iostream>
#include <string>
using namespace std;

class gun
{
public:
    int bullets;
    string trigger = "y";

    void load_gun()
    {
        cout << "Input number of bullets (5 or less): ";
        while(!(cin>> bullets) or (bullets > 5)) {
            cout << "Wrong !! Enter again !\n";
            cin.clear(); // сбрасывает все биты потока, тоесть поток становится "хорошим"
            cin.sync();//Удалим данные из буффера
            cout << "Enter int <= 5: ";
        }
    }
    void shoot()
    {
       if (bullets > 0){
           cout << "!BoooM!  \n";
           bullets --;
       }
       else{
           cout << "Click...  \n";

       }
    }
    void execute_gun()
    {
        load_gun();
        while(trigger.empty() == false)
        {
            cout << "Shoot?! (any button)";
            cin.clear();
            cin.sync();
            getline(cin , trigger);
            if (trigger.empty() == false){
                shoot();
            }
        }

    }
};