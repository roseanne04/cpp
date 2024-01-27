//works!!!!!
#include<iostream>
#include<cstring>
using namespace std;

class strings {
    char name;
    int length;

public:
    strings() {
        length = 0;
        name = new char[length + 1];
    }

    strings(char *s) {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }

    void join(strings s1, strings s2) {
        length = s1.length + s2.length;
        name = new char[length + 1];
        strcpy(name, s1.name);
        strcat(name, s2.name);
    }

    void display() {
        cout << name << endl;
    }
};

int main() {
    char *first = "John";
    strings s1(first);
    strings s2("Peter");
    strings s3;
    s3.join(s1, s2);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
