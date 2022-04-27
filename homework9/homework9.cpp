#include <iostream>
#include <string>
using namespace std;
class Human {
public:
    Human() {}
    Human(string a, string b, string c, int q) :name(a), surname(b), midname(c), age(q) {}
    virtual void print() = 0;
    virtual ~Human() {}
protected:
    string surname, name, midname;
    int age;
};
class Student : public Human {
public:
    Student(string a, string b, string c, int q, bool w) :Human(a, b, c, q) { on_lesson = w; }
    void print()override
    {
        cout << this->name << ' ' << this->surname << ' ' << this->midname << ' ' << this->age << ' ' << this->on_lesson << endl;
    }
private:
    bool on_lesson;
};
class Boss :public Human {
public:
    Boss(string a, string b, string c, int q, int w) :Human(a, b, c, q) { nubmer_of_workes = w; }
    void print()override
    {
        cout << this->name << ' ' << this->surname << ' ' << this->midname << ' ' << this->age << ' ' << this->nubmer_of_workes << endl;
    }
private:int nubmer_of_workes;
};
int main()
{
    Student q("ch", "v", "d", 18, true);
    q.print();
    Boss q1("ch", "v", "d", 18, 10);
    q1.print();
}



