#include <string>

using namespace std;

class User {
public:
    static int _id;
    int id;
    string name;

    User(const string &name) {
        this->name = name;
        id = _id;
        _id++;
    }

    User(User* user) {
        this->name = user->name;
        this->id = user->id;
    }

    User* Clone() {
        return new User(this);
    }
};

int User::_id = 0;