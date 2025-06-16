#include <iostream>
using namespace std;

class smart_device {
public:
    void connect_wifi() {
        cout << "Finalizing setup.\n" << endl;
        cout << "Wi-Fi connection established and ready to use\n" << endl;
    }
};

class smart_tv : public smart_device {
public:
    void display_content() {
        cout << "Streaming services" << endl;
        cout << "Internet content" << endl;
        cout << "Even games" << endl;
    }
};

class smart_phone : public smart_device {
public:
    void make_call() {
        cout << "Watching and doing various tasks" << endl;
        cout << "Playing games" << endl;
        cout << "Watching movie" << endl;
    }
};

class smart_watch : public smart_device {
public:
    void track_fitness() {
        cout << "Manage schedules" << endl;
        cout << "Make calls or send messages" << endl;
        cout << "Fitness check" << endl;
    }
};

int main() {
    smart_watch A;
    smart_phone B;
    smart_tv C;

    A.connect_wifi();
    A.track_fitness();

    B.connect_wifi();
    B.make_call();

    C.connect_wifi();
    C.display_content();

    return 0;
}
