//
//  main.cpp
//  getter_and_setter
//
//  Created by Saloxiddin Sayfuddinov on 09/10/24.
//

#include <iostream>
#include "string.h"

using namespace std;

/*class Student {
private:
    string name;
    int age = 0;
    int grade = 0;
    
public:
    string getName() {
        return name;
    }
    
    int getAge() {
        return age;
    }
    
    void setAge(int newAge) {
        if (newAge >= 18 && newAge <= 30) {
            age = newAge;
        } else {
            cout<<"Xato: noto'g'ri yosh!" << endl;
        }
    }
    
    void setName(string newName) {
        name = newName;
    }
    
    int getGrade() {
        return grade;
    }
    
    void setGrade(int newGrade) {
        if (newGrade >= 0 && newGrade <= 100) {
            grade = newGrade;
        } else {
            cout<<"Xato: noto'g'ri ball!"<<endl;
        }
    }
}; */

/*class Car {
private:
    string model;
    int year = 0;
    double mileage = 0;
    
public:
    string getModel() {
        return model;
    }
    void setModel(string newModel){
        model = newModel;
    }
    
    int getYear() {
        return year;
    }
    void setYear(int newYear){
        if (newYear > 1900 && newYear < 2025) {
            year = newYear;
        } else {
            cout<<"Xato: noto'g'ri yil!"<<endl;
        }
    }
    
    int getMileage() {
        return mileage;
    }
    void setMileage(double newMileage) {
        if (newMileage > 0) {
            mileage = newMileage;
        } else {
            cout<<"Xato: noto'g'ri bosib o'tilgan masofa!" << endl;
        }
    }
}; */

class BankAccount{
private:
    string account_holder;
    float balance;
public:
    BankAccount(float b = 0.0): balance(b){}
    void get_balance() {
        cout<<"Balans: "<<balance<<endl;
    }

    void display_infor() {
        cout<<"Mijoz: "<<account_holder<<"\n"<<endl;
        cout<<"Balans: "<<balance << "\n"<< endl;
    }

    void deposit(int sum) {
        balance=balance+sum;
        cout<<"Muvofaqqiyatli qo'shildi!"<<endl;
    }

    void withdraw(int sum) {
        if(balance >= sum) {
            balance=balance-sum;
        } else {
            cout<<"Balans yetarli emas!"<<endl;
        }
    }

    void addHolder(string name) {
        account_holder = name;
    }
};


int main() {
    /*Student student;
    int age, grade;
    string name;
    cout<<"Ism kiriting: "; cin>>name;
    student.setName(name);
    cout<<"Yosh kiriting: "; cin>>age;
    student.setAge(age);
    cout<<"Ball kiriting: "; cin>>grade;
    student.setGrade(grade);
    
    cout<<"Ismi: " << student.getName() << endl;
    cout<<"Yoshi: " << student.getAge() << endl;
    cout<<"Ball: " << student.getGrade() << endl; */
    
    /*Car car;
    string model;
    double mileage, year;
    
    cout<<"Model kiriting: "; cin>>model; car.setModel(model);
    cout<<"Yil kiriting: "; cin>>year; car.setYear(year);
    cout<<"Bosib o'tilgan masofa kiriting: "; cin>>mileage; car.setMileage(mileage);
    
    cout<<"Model: " << car.getModel() << endl;
    cout<<"Yil: " << car.getYear() << endl;
    cout<<"Bosib o'tilgan masofa: " << car.getMileage() << endl; */
    
    
    BankAccount account1;
    BankAccount account2;
    int select, select2, sum1;
    string name1, name2;

    cout<<"1. 1-object"<<endl;
    cout<<"3. Chiqish"<<endl;
    cout<<"Tanlang: "; cin>>select2;

    if(select2 == 1 || select2 == 2) {
        switch(select2) {
            case 1:
                do {
                    cout<<"1. Mijoz qo'shish"<<endl;
                    cout<<"2. Deposit"<<endl;
                    cout<<"3. Amount"<<endl;
                    cout<<"4. Ko'rish"<<endl;
                    cout<<"5. Chiqish"<<endl;

                    cout<<"Tanlang: "; cin>>select;

                    if(select == 1 || select == 2 || select == 3 || select == 4) {
                        switch(select) {
                            case 1:
                                cout<<"Mijoz ismini kiriting: "; cin>>name1;
                                account1.addHolder(name1);
                                break;
                            case 2:
                                cout<<"Summani kiriting: "; cin>>sum1;
                                account1.deposit(sum1);
                                break;
                            case 3:
                                cout<<"Summani kiriting: "; cin>>sum1;
                                account1.withdraw(sum1);
                                break;
                            case 4:
                                account1.display_infor();
                                break;
                            case 5:
                                cout << "Muvofaqiyyatli chiqildi!" << endl;
                                break;
                            default:
                                cout << "Noto'g'ri tanlov, qaytadan urinib ko'ring." << endl;
                                break;
                        }
                    } else if(select == 5) {
                        cout << "Muvofaqiyyatli chiqildi!" << endl;
                        break;
                    } else {
                        cout << "Noto'g'ri tanlov, qaytadan urinib ko'ring." << endl;
                        break;
                    }
                } while(select != 5);
             default:
                cout << "Noto'g'ri tanlov, qaytadan urinib ko'ring." << endl;
                break;
        }
    } else if(select2 == 3) {
        cout<<"Muvofaqiyyatli chiqildi!"<<endl;
    } else {
        cout << "Noto'g'ri tanlov, qaytadan urinib ko'ring." << endl;
    }


    return 0;
}
