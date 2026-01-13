#include <iostream>
#include <cmath>
using namespace std;


double areaOfHexagon(double length) {
    double area = ((3 * sqrt(3)) / 2) * pow(length, 2);

    return area;
}
double areaOfRectangle(double height, double length){
    double area = height*length;
    return area;
}
double volumeOfCarbonStick(double diameter, double length){
        const double pi = 3.14;
        double volume = pi * pow((diameter/2),2) * length;
        return volume;
}

double volumeOfHexagonalPrism(double length , double height)
{
    double area = areaOfHexagon(length);
    return area * height;
}
double requiredWood(double length, double height, double diameter)
{   double wood = volumeOfHexagonalPrism(length,height);
    double stick = volumeOfCarbonStick(diameter, height);
    return wood - stick;
}
double requiredShinesheet(double length, double height)
{
    double rectangle = (areaOfRectangle(length, height) * 6);
    double hexagon = (areaOfHexagon(length)*2);
    return rectangle + hexagon;
}
int main()
{
    double lengthOfHexagon, height, diameter;
    cout << "Insert the one of the side length of the hexagon (cm): " << endl;
    cin >> lengthOfHexagon;

    cout<< "Insert the height of the pencil (cm): " << endl;
    cin >> height;

    cout << "Insert the diameter of the carbon stick(cm): "<< endl;
    cin >> diameter;

   cout << "Area of Hexagon: " << areaOfHexagon(lengthOfHexagon) << " square cm" << endl;
    cout << "Area of Rectangle: " << areaOfRectangle(lengthOfHexagon, height) << " square cm" << endl;
    cout << "Volume of Carbon Stick: " << volumeOfCarbonStick(diameter, height) << " cubic cm" << endl;
    cout << "Volume of Hexagonal Prism: " << volumeOfHexagonalPrism(lengthOfHexagon, height) << " cubic cm" << endl;
    cout << "Required Wood: " << requiredWood(lengthOfHexagon, height, diameter) << " cubic cm" << endl;
    cout << "Required Shining Sheet: " << requiredShinesheet(lengthOfHexagon, height) << " square cm" << endl;

    return 0;

}
