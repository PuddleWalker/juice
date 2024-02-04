#pragma once
#include <vector>
#include <string>
#include "Red.h"

using namespace std;

class Manage//Управление участниками
{
private:
    vector<PhoneBook> conts;
    string surf;
public:
    void print_all() {
        system("cls");
        int cycle = 1;
        for (PhoneBook samp : conts) {
            cout << cycle << endl;
            cout << "    Name: " << samp.get_name() << endl;
            cout << "    Mobile Phone: " << samp.get_mobilePhone() << endl;
            cout << "    Work Phone: " << samp.get_workPhone() << endl;
            cout << "    Home Phone: " << samp.get_homePhone() << endl;
            cout << "    More Info: " << samp.get_moreInfo() << endl << endl;
            cycle++;
        }
    }
    void show(int numb) {
        cout << "    Name: " << conts[numb - 1].get_name() << endl;
        cout << "    Mobile Phone: " << conts[numb - 1].get_mobilePhone() << endl;
        cout << "    Work Phone: " << conts[numb - 1].get_workPhone() << endl;
        cout << "    Home Phone: " << conts[numb - 1].get_homePhone() << endl;
        cout << "    More Info : " << conts[numb - 1].get_moreInfo() << endl << endl;
    }
    void search(char* inf) {
        int cyc = 1;
        for (PhoneBook samp : conts) {
            surf = samp.get_homePhone();
            if (surf.find(inf) != string::npos) show(cyc); 
            else {
                surf = samp.get_workPhone();
                if (surf.find(inf) != string::npos) show(cyc);
                else{
                    surf = samp.get_mobilePhone();
                    if (surf.find(inf) != string::npos) show(cyc);
                    else {
                        surf = samp.get_name();
                        if (surf.find(inf) != string::npos) show(cyc);
                        else {
                            surf = samp.get_moreInfo();
                            if (surf.find(inf) != string::npos) show(cyc);
                        }
                    }
                }
            }
            cyc++;
        }
    }
    void create(char* inf) {
        PhoneBook memb(inf);
        conts.push_back(memb);
    }
    void remove(int numb) {
        conts.erase(conts.begin() + numb - 1);
    }
    void edit(int numb, int num, char* inf) {
        conts[numb - 1].add(inf, num - 1);
    }
    ~Manage() {
        for (PhoneBook samp : conts) {
            for(int i = 0; i < 4; i ++) samp.dell(i);
        }
    }
};
