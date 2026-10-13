#include <iostream>
#include <stdexcept>

class Rectangle {
private:
    double width;
    double length;

public:
    // Constructors
    Rectangle() : width(1.0), length(1.0) {}
    Rectangle(double w, double l) : width(0), length(0) {
        setWidth(w);
        setLength(l);
    }

    // Getters
    double getWidth() const { return width; }
    double getLength() const { return length; }

    // Setters (reject non-positive values)
    void setWidth(double w) {
        if (w <= 0) throw std::invalid_argument("Width must be positive");
        width = w;
    }
    void setLength(double l) {
        if (l <= 0) throw std::invalid_argument("Length must be positive");
        length = l;
    }

    // Calculations
    double area() const { return width * length; }
    double perimeter() const { return 2 * (width + length); }
};

void printRectangle(const std::string& name, const Rectangle& r) {
    std::cout << name << ": width = " << r.getWidth()
              << ", length = " << r.getLength()
              << ", area = " << r.area()
              << ", perimeter = " << r.perimeter() << "\n";
}

int main() {
    // 1. Default constructor
    Rectangle r1;
    printRectangle("r1 (default)", r1);

    // 2. Parameterized constructor
    Rectangle r2(5.0, 3.0);
    printRectangle("r2 (5 x 3)", r2);

    // 3. Using setters on an existing object
    r1.setWidth(10.5);
    r1.setLength(4.2);
    printRectangle("r1 (after setters)", r1);

    // 4. Using getters directly
    std::cout << "\nr2 width: " << r2.getWidth() << "\n";
    std::cout << "r2 length: " << r2.getLength() << "\n";

    // 5. Modify one dimension and recalculate
    r2.setWidth(8.0);
    std::cout << "\nAfter changing r2 width to 8:\n";
    std::cout << "Area: " << r2.area() << "\n";
    std::cout << "Perimeter: " << r2.perimeter() << "\n";

    // 6. Invalid input handling
    try {
        r2.setLength(-2.0);
    } catch (const std::invalid_argument& e) {
        std::cout << "\nError caught: " << e.what() << "\n";
    }

    return 0;
}#include <iostream>
#include <stdexcept>

class Rectangle {
private:
    double width;
    double length;

public:
    // Constructors
    Rectangle() : width(1.0), length(1.0) {}
    Rectangle(double w, double l) : width(0), length(0) {
        setWidth(w);
        setLength(l);
    }

    // Getters
    double getWidth() const { return width; }
    double getLength() const { return length; }

    // Setters (reject non-positive values)
    void setWidth(double w) {
        if (w <= 0) throw std::invalid_argument("Width must be positive");
        width = w;
    }
    void setLength(double l) {
        if (l <= 0) throw std::invalid_argument("Length must be positive");
        length = l;
    }

    // Calculations
    double area() const { return width * length; }
    double perimeter() const { return 2 * (width + length); }
};

void printRectangle(const std::string& name, const Rectangle& r) {
    std::cout << name << ": width = " << r.getWidth()
              << ", length = " << r.getLength()
              << ", area = " << r.area()
              << ", perimeter = " << r.perimeter() << "\n";
}

int main() {
    // 1. Default constructor
    Rectangle r1;
    printRectangle("r1 (default)", r1);

    // 2. Parameterized constructor
    Rectangle r2(5.0, 3.0);
    printRectangle("r2 (5 x 3)", r2);

    // 3. Using setters on an existing object
    r1.setWidth(10.5);
    r1.setLength(4.2);
    printRectangle("r1 (after setters)", r1);

    // 4. Using getters directly
    std::cout << "\nr2 width: " << r2.getWidth() << "\n";
    std::cout << "r2 length: " << r2.getLength() << "\n";

    // 5. Modify one dimension and recalculate
    r2.setWidth(8.0);
    std::cout << "\nAfter changing r2 width to 8:\n";
    std::cout << "Area: " << r2.area() << "\n";
    std::cout << "Perimeter: " << r2.perimeter() << "\n";

    // 6. Invalid input handling
    try {
        r2.setLength(-2.0);
    } catch (const std::invalid_argument& e) {
        std::cout << "\nError caught: " << e.what() << "\n";
    }

    return 0;
}#include <iostream>
#include <stdexcept>

class Rectangle {
private:
    double width;
    double length;

public:
    // Constructors
    Rectangle() : width(1.0), length(1.0) {}
    Rectangle(double w, double l) : width(0), length(0) {
        setWidth(w);
        setLength(l);
    }

    // Getters
    double getWidth() const { return width; }
    double getLength() const { return length; }

    // Setters (reject non-positive values)
    void setWidth(double w) {
        if (w <= 0) throw std::invalid_argument("Width must be positive");
        width = w;
    }
    void setLength(double l) {
        if (l <= 0) throw std::invalid_argument("Length must be positive");
        length = l;
    }

    // Calculations
    double area() const { return width * length; }
    double perimeter() const { return 2 * (width + length); }
};

void printRectangle(const std::string& name, const Rectangle& r) {
    std::cout << name << ": width = " << r.getWidth()
              << ", length = " << r.getLength()
              << ", area = " << r.area()
              << ", perimeter = " << r.perimeter() << "\n";
}

int main() {
    // 1. Default constructor
    Rectangle r1;
    printRectangle("r1 (default)", r1);

    // 2. Parameterized constructor
    Rectangle r2(5.0, 3.0);
    printRectangle("r2 (5 x 3)", r2);

    // 3. Using setters on an existing object
    r1.setWidth(10.5);
    r1.setLength(4.2);
    printRectangle("r1 (after setters)", r1);

    // 4. Using getters directly
    std::cout << "\nr2 width: " << r2.getWidth() << "\n";
    std::cout << "r2 length: " << r2.getLength() << "\n";

    // 5. Modify one dimension and recalculate
    r2.setWidth(8.0);
    std::cout << "\nAfter changing r2 width to 8:\n";
    std::cout << "Area: " << r2.area() << "\n";
    std::cout << "Perimeter: " << r2.perimeter() << "\n";

    // 6. Invalid input handling
    try {
        r2.setLength(-2.0);
    } catch (const std::invalid_argument& e) {
        std::cout << "\nError caught: " << e.what() << "\n";
    }

    return 0;
}