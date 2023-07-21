#include <iostream>
#include "User.h"

using namespace std;

int main() {

    User::_id = -90;
    auto user1 = new User("user11");
    user1->_id = 20;
    auto user2 = new User(user1);
    User::_id = 10;
    auto user3 = user2->Clone();
    auto user4 = new User("user14");

    cout << user1->id << " : " << user1->name << endl;
    cout << user2->id << " : " << user2->name << endl;
    cout << user3->id << " : " << user3->name << endl;
    cout << user4->id << " : " << user4->name << endl;

    return 0;
}