#ifndef _PERSON_H_
#define _PERSON_H_
class Person {
private:
    char *name;
    int age;
    char *work;

public:
    // 可以直接访问内部的成员
    void print_info(void);
    int set_name(char *name);
    int set_age(int age);
    int set_work(char *work);
};

#endif //_PERSON_H_
