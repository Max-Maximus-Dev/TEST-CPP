#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int kurs;
    int sered_mark;
    int count_of_progul;

    Student(string _name, int _age, int _kurs, int _sered_mark, int _count_of_progul) {
        name = _name;
        age = _age;
        kurs = _kurs;
        sered_mark = _sered_mark;
        count_of_progul = _count_of_progul;
    }
    void show() {
        cout << "Student name: " << name << "Age: " << age << "Kurs: " << kurs << "Srednia ocinka: "
            << sered_mark << "Kilkist proguliv: " << count_of_progul << endl;
    }
};

struct Person
{
    string name;
    int age;
    int sered_mark;
    string gender;
    string city;
    bool is_student;

    Person(string _name, int _age, int _sered_mark, string _gender, string _city, bool _is_student) {
        name = _name;
        age = _age;
        sered_mark = _sered_mark;
        gender = _gender;
        city = _city;
        is_student = _is_student;
    }

    void show() {
        cout << "Name: " << name << "Age: " << age << "Sered_Mark: " << sered_mark << "Gender: "
            << gender << "City: " << city << "Is_Student: " << is_student << endl;
    }

    void show_age() {
        if (age < 10) {
            cout << "You dytyna" << endl;
        }
        else if (age >= 10 && age < 18) {
            cout << "You pidlitok" << endl;
        }
        else if (age >= 18 && age <= 30) {
            cout << "You doroslyi" << endl;
        }
        else if (age > 30 && age < 50) {
            cout << "Bilshyi za 30" << endl;
        }
        else if (age >= 50 && age < 70){
            cout << "Zolotyi vik" << endl;
        }
    }
};

struct ITSTEP
{
    int count_of_students;
    int count_of_locations;
    int count_of_kurses;
    int count_location_countries;

    ITSTEP(int _count_of_students, int _count_of_locations, int _count_of_kurses, int _count_location_countries) {
        count_of_students = _count_of_students;
        count_location_countries = _count_location_countries;
        count_of_kurses = _count_of_kurses;
        count_of_locations = _count_of_locations;
    }

    void show() {
        cout << "count_of_students: " << count_of_students << "count_location_countries" << count_location_countries
            << "count_of_kurses" << count_of_kurses << "count_of_locations" << count_of_locations << endl;
    }

    void random() {
        int rand_rpz = rand() % count_of_students + 1;
        int rand_dyzain = rand() % count_of_students - rand_rpz;
        cout << rand_rpz << rand_dyzain;
    }
};

int main()
{
    srand(time(0));
    Student student1("Maksym", 18, 2, 82, 12);
    student1.show();


    Person ludyna("Maksym", 13, 10, "Men", "Franyk", false);
    ludyna.show();
    ludyna.show_age();
}
