// Using String

#include<iostream>

using namespace std;

// You can put this code segment in Plane.h file -----
class Plane {
    private:
        int planeID;
        string piolet;
        string destination;
    public:
        void setPlaneDetails(int pID, string p, string d);
        void displayPlaneDetails();
        string getDestination();
        void setPiolet();
};
// ----------------------------------------------------

int main() {

    Plane p1, p2, p3, p4;

    p1.setPlaneDetails(1, "John", "USA");
    p2.setPlaneDetails(2, "George", "UK");
    p3.setPlaneDetails(3, "Henry", "USA");
    p4.setPlaneDetails(4, "Ronald", "UAE");

    p1.setPiolet();
    p2.setPiolet();
    p3.setPiolet();
    p4.setPiolet();

    p1.displayPlaneDetails();
    p2.displayPlaneDetails();
    p3.displayPlaneDetails();
    p4.displayPlaneDetails();

    return 0;
}

// You can put this code segment in Plane.cpp file -----
void Plane::setPlaneDetails(int pID, string p, string d) {
    planeID = pID;
    piolet = p;
    destination = d;
}

void Plane::displayPlaneDetails() {
    cout << endl <<"PlaneID = " << planeID << endl;
    cout << "Piolet = " << piolet << endl;
    cout << "Destination = " << getDestination() << endl;
}

void Plane::setPiolet() {
    cout << "Input new piolet of plane " << planeID << ": ";
    cin >> piolet;
}

string Plane::getDestination() {
    return destination;
}
