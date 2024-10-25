#include <iostream>
#include <string>
#include <sstream>
#include "person.h"
#include "name.h"
#include "name_2.h"
#include "gun.h"
using namespace std;
int main() {
    cout<<"Choose functions \n person -- 1 \n name -- 2 \n name_2 -- 3\n gun -- 4 \n";
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1: {
            person x;
            x.execute_person();
            break;
        }
        case 2: {
            name y;
            cin.clear();
            cin.sync();
            y.execute_name();
            break;
        }

        case 3: {
            name_2 z;
            cin.clear();
            cin.sync();
            z.execute_name_2();
            break;
        }

        case 4: {
            gun g;
            g.execute_gun();
            break;
        }
        default:
            cout<<"Неверная команда";
    }

    return 0;
}
