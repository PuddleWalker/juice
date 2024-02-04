#pragma once

class PhoneBook//Создание участников
{
private:
    char* name = new char[255];
    char* home_phone = new char[5] {"None"};
    char* work_phone = new char[5] {"None"};
    char* mobile_phone = new char[5] {"None"};
    char* more_info = new char[5] {"None"};

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
    void add(char* inf, int num) {
        switch (num) {
        case 3:
            delete[] home_phone;
            home_phone = new char[15];
            for (int i = 0; i < 15; i++) {
                home_phone[i] = inf[i];
            }
            break;
        case 2:
            delete[] work_phone;
            work_phone = new char[15];
            for (int i = 0; i < 15; i++) {
                work_phone[i] = inf[i];
            }
            break;
        case 1:
            delete[] mobile_phone;
            mobile_phone = new char[15];
            for (int i = 0; i < 15; i++) {
                mobile_phone[i] = inf[i];
            }
            break;
        case 0:
            delete[] name;
            name = new char[255];
            for (int i = 0; i < 255; i++) {
                name[i] = inf[i];
            }
            break;
        case 4:
            delete[] more_info;
            more_info = new char[255];
            for (int i = 0; i < 255; i++) {
                more_info[i] = inf[i];
            }
            break;
        }
    }
    inline void dell(int num) {
        switch (num) {
        case 1:
            delete[] home_phone;
            break;
        case 2:
            delete[] work_phone;
            break;
        case 3:
            delete[] mobile_phone;
            break;
        case 4:
            delete[] name;
            break;
        case 0:
            delete[] more_info;
            break;
        }
    }
    PhoneBook(char* name) {
        for (int i = 0; i < 255; i++) {
            this->name[i] = name[i];
        }
    }
};