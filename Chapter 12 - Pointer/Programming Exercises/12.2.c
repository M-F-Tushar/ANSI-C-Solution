
✅ 12.2 Quadratic roots using pointers
Use the formula:


void findRoots(float a, float b, float c, float *r1, float *r2) {
    float d = b*b - 4*a*c;
    *r1 = (-b + sqrt(d)) / (2*a);
    *r2 = (-b - sqrt(d)) / (2*a);
}
