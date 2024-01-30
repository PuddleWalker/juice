#include<iostream>
#include<vector>

using namespace std;

class Contacts//Управление участниками
{
private:
    vector<int> conts;
public:
    void print_all();
    void show(int numb) {
    }
    void remove(int numb) {

    }
    void search(char* inf, int num) {

    }
    void search(long inf, int num);
    void create(int memb) {
        conts.push_back(memb);
    }
    void remove();
};

class PhoneBook//Создание участников
{
private:
    char* name;
    char* home_phone;
    char* work_phone;
    char* mobile_phone;
    char* more_info;

public:
    inline char* get_name() {
        return name;
     }

    inline char* get_homePhone() {
         return home_phone;
     }

     inline char* get_workPhone() {
         return work_phone;
     }

     inline char* get_mobilePhone() {
         return mobile_phone;
     }

     inline char* get_moreInfo() {
         return more_info;
     }
    void add(char* inf, int num){
        switch(num) {
            case 0:
                home_phone = new char[sizeof(inf)];
                for (int i; i < sizeof(inf); i++) {
                    home_phone[i] = inf[i];
                }
                break;
            case 1:
                work_phone = new char[sizeof(inf)];
                for (int i; i < sizeof(inf); i++) {
                    work_phone[i] = inf[i];
                }
                break;
            case 2:
                mobile_phone = new char[sizeof(inf)];
                for (int i; i < sizeof(inf); i++) {
                    mobile_phone[i] = inf[i];
                }
                break;
            case 3:
                name = new char[sizeof(inf)];
                for (int i; i < sizeof(inf); i++) {
                    name[i] = inf[i];
                }
                break;
            case 4:
                more_info = new char[sizeof(inf)];
                for (int i; i < sizeof(inf); i++) {
                    more_info[i] = inf[i];
                }
                break;
        }
    }
    inline void dell(int num) {
        switch(num) {
        case 1:
            delete[] home_phone;
            char* home_phone;
            break;
        case 2:
            delete[] work_phone;
            char* work_phone;
            break;
        case 3:
            delete[] mobile_phone;
            char* mobile_phone;
            break;
        case 4:
            delete[] name;
            char* name;
            break;
        case 5:
            delete[] more_info;
            char* more_info;
            break;
        }
    }

    PhoneBook();
    ~PhoneBook();
};

int main()
{

}