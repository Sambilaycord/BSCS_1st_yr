#include <iostream>

using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() {
        width = 20;
        height = 5;
    }

    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    void setWidth(double newWidth) {
        width = newWidth;
    }

    void setHeight(double newHeight) {
        height = newHeight;
    }

    double getArea() {
        return width * height;
    }

    double getPerimeter() {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rec1, rec2;
    rec1.setWidth(4);
    rec1.setHeight(40);
    rec2.setWidth(3.5);
    rec2.setHeight(35.9);

    cout << "Rectangle 1 Width: " << rec1.getWidth() << endl;
    cout << "Rectangle 1 Height: " << rec1.getHeight() << endl;
    cout << "Rectangle 1 Area: " << rec1.getArea() << endl;
    cout << "Rectangle 1 Perimeter: " << rec1.getPerimeter() << endl;

    cout << "\nRectangle 2 Width: " << rec2.getWidth() << endl;
    cout << "Rectangle 2 Height: " << rec2.getHeight() << endl;
    cout << "Rectangle 2 Area: " << rec2.getArea() << endl;
    cout << "Rectangle 2 Perimeter: " << rec2.getPerimeter() << endl;

    return 0;
}
