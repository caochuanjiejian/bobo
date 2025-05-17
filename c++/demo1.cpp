#include <iostream>
#include <string>
class renlei {
    
public:
    std::string foo;
    renlei() {
         foo = "bobo";
    }

};
using namespace std;
int main() {
    renlei aobo;
    renlei* mypointer = new renlei;
    delete mypointer;
    unique_ptr<renlei>hanbo(new renlei);
    cout << hanbo->foo;
    return 0;
}




/*
int main() {
    std::cout << "Hello, world!";
    return 0;
}
*/

/*
using namespace std;
int main() {
    cout << "Hello, world!";
    return 0;
}
*/
/*
int main() {
    char hello[] = "hello wode";
    string hell = "hello world";
    cout << hello;
    return 0;
}
*/

/*
class renlei {
    float dna;
public:
    string face;
    void walk() {
        cout << "walking...";
    }

};
*/

/*
class renlei {
    float dna;
public:
    string face;
    void walk() {}

};
void renlei::walk() {
    cout << "walking...";
}
*/

/*
class renlei {

public:

    void walk(int speed) {
    }
    void walk(float speed) {
    }

};
*/

/*
class renlei {

public:

    renlei() {//gouzao
    }
    ~renlei() {//xiaohui
    }

};
*/

/*
class chaoji:public renlei {
public:
    string weapon = "cape";
    void fly() {
    cout<<"flying...";
    }

};
class renlei {


};
*/

/*
#include <iostream>
#include <string>
class renlei {

public:
    std::string foo;
    renlei() {
         foo = "bobo";
    }

};
using namespace std;
int main() {
    renlei aobo;
    renlei* mypointer = new renlei;
    delete mypointer;
    unique_ptr<renlei>hanbo(new renlei);
    cout << hanbo->foo;
    return 0;
}
*/