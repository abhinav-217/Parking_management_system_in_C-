#include <iostream>
#include <cmath>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    int choice;
    int amount = 0;
    int totalvehicle = 0;
    int r = 0, c = 0, t = 0, b = 0, tr = 0;
    int date, month, year;

    do
    {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\t\t\t\tChoose Your Option" << endl;
        cout << endl;
        cout << endl;
        cout << "\t\t\t\t\t1.PARKING FOR AUTO-RICKSHAW: 100" << endl;
        cout << "\t\t\t\t\t2.PARKING FOR CAR: 200" << endl;
        cout << "\t\t\t\t\t3.PARKING FOR TWO WHEELER: 50" << endl;
        cout << "\t\t\t\t\t4.PARKING FOR BUS: 250" << endl;
        cout << "\t\t\t\t\t5.PARKING FOR TRUCK: 300" << endl;
        cout << "\t\t\t\t\t6.SHOW OVERVIEW" << endl;
        cout << "\t\t\t\t\t7.SHOW ALL DETAILS" << endl;
        cout << "\t\t\t\t\t8.RESET ALL RECORDS" << endl;
        cout << "\t\t\t\t\t9.COPY TODAY'S DATA TO FILE" << endl;
        cout << "\t\t\t\t\t10.DAY OUT" << endl;
        cout << endl;
        cin >> choice;
        if (choice == 1)
        {
            amount += 100;
            totalvehicle += 1;
            r++;
        }
        if (choice == 2)
        {
            amount += 200;
            totalvehicle += 1;
            c++;
        }
        if (choice == 3)
        {
            amount += 50;
            totalvehicle += 1;
            t++;
        }
        if (choice == 4)
        {
            amount += 250;
            totalvehicle += 1;
            b++;
        }
        if (choice == 5)
        {
            amount += 300;
            totalvehicle += 1;
            tr++;
        }
        if (choice == 6)
        {
            cout << "\t\t\t* TODAY'S AMOUNT TILL NOW: " << amount << endl;
            cout << endl;
            cout << "\t\t\t* TOTAL NO.OF VEHICLES PARKED IN TODAY: " << totalvehicle << endl;
        }
        if (choice == 7)
        {
            cout << "\t\t\t* TODAY'S AMOUNT TILL NOW: " << amount << endl;
            cout << endl;
            cout << "\t\t\t* TOTAL NO.OF RICKSHAWS PARKED IN TODAY: " << r << endl;
            cout << endl;
            cout << "\t\t\t* TOTAL NO.OF CARS PARKED IN TODAY: " << c << endl;
            cout << endl;
            cout << "\t\t\t* TOTAL NO.OF TWO-WHEELERS PARKED IN TODAY: " << t << endl;
            cout << endl;
            cout << "\t\t\t* TOTAL NO.OF BUSES PARKED IN TODAY: " << b << endl;
            cout << endl;
            cout << "\t\t\t* TOTAL NO.OF TRUCKS PARKED IN TODAY: " << tr << endl;
            cout << endl;
        }
        if (choice == 8)
        {
            amount = 0;
            totalvehicle = 0;
            r = 0;
            c = 0;
            b = 0;
            t = 0;
            tr = 0;
            cout << "\t\t\t************************" << endl;
            cout << "\t\t\t*DATA HAS BEEN RESET" << endl;
            cout << "\t\t\t************************" << endl;
        }

        if (choice == 9)
        {
            fstream file("server.txt", ios::in | ios::out | ios::app);
            cout << endl;
            cout << "\t\t\tEnter date" << endl;
            cin >> date;
            cout << "\t\t\tEnter month" << endl;
            cin >> month;
            cout << "\t\t\tEnter year" << endl;
            cin >> year;

            file << endl;
            file << "\t\t* DATE: " << date << "/" << month << "/" << year << endl;
            file<<endl;
            file << "\t\t* TOTAL AUTO-RICKSHAWS: " << r << endl;
            file << "\t\t* TOTAL CARS: " << c << endl;
            file << "\t\t* TOTAL TWO-WHEELERS: " << t << endl;
            file << "\t\t* TOTAL BUSES: " << b << endl;
            file << "\t\t* TOTAL TRUCKS: " << tr << endl;
            file << endl;
            file << endl;
            file << endl;
        }

        if (choice == 10)
        {
            cout << "\t\t\t************************" << endl;
            cout << "\t\t\t* TODAY'S AMOUNT TOTAL NOW: " << amount << endl;
            cout<<endl;
            cout << "\t\t\t* TOTAL NO.OF VEHICLES PARKED IN TODAY: " << totalvehicle << endl;
            cout<<endl;
            cout << "\t\t\t* HOPE ! YOU EARNED BETTER TODAY " << endl;
            cout<<endl;
            cout << "\t\t\t* HAVE A GOOD DAY AHEAD" << endl;
            cout << "\t\t\t************************" << endl;
            cout<<endl;
            cout<<endl;
        }

    } while (choice != 10);

    return 0;
}