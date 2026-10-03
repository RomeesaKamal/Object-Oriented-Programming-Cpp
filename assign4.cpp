#include <iostream>
using namespace std;

class VehicleInfo
{
private:
    int vehicleID;

protected:
    float maxSpeed;

public:
    void setVehicle(int id, float speed)
    {
        vehicleID = id;
        maxSpeed = speed;
    }
    int getVehicleID()
    {
        return vehicleID;
    }

};

class EnVehicle : public VehicleInfo
{
private:
    string vehicleType;

public:
    float currentSpeed;
    void setType(string type)
    {
        vehicleType = type;
    }
    void display()
    {
        cout << "Vehicle ID: " << getVehicleID() << endl;
        cout << "Vehicle Type: " << vehicleType << endl;
        cout << "Maximum Speed: " << maxSpeed << " km/h" << endl;
        cout << "Current Speed: " << currentSpeed << " km/h" << endl;
    }
};

int main()
{
    EnVehicle v;
    v.setVehicle(101, 180);
    v.setType("Engineering Truck");
    v.currentSpeed = 80;
    v.display();
    return 0;
}