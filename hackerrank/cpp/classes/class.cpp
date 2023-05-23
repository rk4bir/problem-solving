#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;

class Student{
    private:
      int age, standard;
      string first_name, last_name;

    public:
        void set_age(int age);
        void set_standard(int standard);
        void set_first_name(string value);
        void set_last_name(string value);
        int get_age();
        int get_standard();
        string get_first_name();
        string get_last_name();
        string to_string();
};

void Student::set_age(int age) { this->age = age; }

void Student::set_standard(int standard) { this->standard = standard; }

void Student::set_first_name(string value) { this->first_name = value; }

void Student::set_last_name(string value) { this->last_name = value; }

int Student::get_age() { return this->age; }

int Student::get_standard() { return this->standard; }

string Student::get_first_name() { return this->first_name; }

string Student::get_last_name() { return this->last_name; }

string Student::to_string() {
  ostringstream output; // from sstream to format string as cout/stadout format
  output << this->age << ',' << this->first_name << ',' << this->last_name << ','
         << this->standard << "\n";
  return output.str();
}

int main() {
    int age, standard;
    string first_name, last_name;
    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}


