
Problem 11.11
Convert metric distances (meters, cm) to British system (feet, inches).

Implementation
c
Copy
Edit
struct Metric {
    float meters;
    float centimeters;
};

struct British {
    float feet;
    float inches;
};

// Function to convert Metric to British
struct British convertToBritish(struct Metric m) {
    struct British b;
    float totalCm = m.meters * 100 + m.centimeters;
    b.feet = totalCm / 30.48;
    b.inches = (totalCm / 2.54) - (b.feet * 12);
    return b;
}
1 foot = 30.48 cm, 1 inch = 2.54 cm.

