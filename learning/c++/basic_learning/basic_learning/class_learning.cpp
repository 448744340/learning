#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    Student(string name,int age,float score);
    Student();
    void getname() const;
    static int gettotal();
    friend void showfriend(Student *A);

public:
    static int m_total;

private:
    string m_name;
    int m_age;
    float m_score;
};

Student::Student(string name,int age,float score):m_name(name),m_age(age),m_score(score){m_total++;}

Student::Student(){m_total++;}

void Student::getname() const
{
    cout<<this->m_name<<endl;
}

int Student::gettotal()
{
    return m_total;
}

int Student::m_total=0;  //静态成员变量必须在类之外进行初始化

void showfriend(Student *A)
{
    cout<<A->m_age<<endl;
}

int main()
{
    cout<<Student::gettotal<<endl; //为什么已经为1
    Student a("chen",25,98);
    Student *b = new Student("zhou",25,99);
    showfriend(b);
    Student c();
    b->getname();
    cout<<a.m_total<<endl;
    cout<<Student::m_total<<endl;
}
