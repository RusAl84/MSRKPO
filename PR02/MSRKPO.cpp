#include <iostream>
#include <time.h>
using namespace std;

struct student {
    string surName;
    string name;
    string middleName;
    int math;
    int phys;
    int draw;
    int chem;
    int sopromat;
};

int main()
{
    //srand(8954);
    //int variant = rand() % 10;
    //cout << variant;
    // variant 5
    //Воспользовавшись записью СТУДЕНТ из варианта №1, 
    // определите, сколько студентов имеют 
    //средний балл от 4 до 5.
    //Опишите запись СТУДЕНТ и поместите в нее следующую информацию: Ф.И.О., 
    // оценки (математика, физика, черчение, химия, сопромат).
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int n = 10;
    student  st[10] = {};
    for (int i = 0; i < n; i++) {
        st[i].surName = 40+rand() % 20;
        st[i].name = 40+rand() % 20;
        st[i].middleName = 40+rand() % 20;
        st[i].math = rand() % 3 + 2;
        st[i].phys = rand() % 3 + 2;
        st[i].draw = rand() % 3 + 2;
        st[i].chem = rand() % 3 + 2;
        st[i].sopromat = rand() % 3 + 2;
    }
    int count45 = 0;
    int i = 2;
    st[i].math = 5;
    st[i].phys = 5;
    st[i].draw = 5;
    st[i].chem = 5;
    st[i].sopromat = 5;
    i = 3;
    st[i].math = 5;
    st[i].phys = 5;
    st[i].draw = 5;
    st[i].chem = 5;
    st[i].sopromat = 5;
    for (int i = 0; i < n; i++) {
        float sr_bal = st[i].math + st[i].phys + st[i].draw + st[i].chem + st[i].sopromat;
        sr_bal = sr_bal / 5;
        if (sr_bal >= 4 and sr_bal <= 5)
            count45++;
        cout << endl << endl << st[i].surName << " " << st[i].name << " " << st[i].middleName << " ";
        cout << endl << "math: " << st[i].math << " phys: " << st[i].phys << " draw: " << st[i].draw << " ";
        cout << endl << "chem: " << st[i].chem << " sopromat: " << st[i].sopromat;
        cout << endl << "sr_bal: " << sr_bal;
    }
    cout << endl << endl << " Средний балл от 4 до 5: " << count45;

}

