#include<stdio.h>
#include<math.h>

// euler
// problema de valor inicial

float func(float t , float y) {
    t=t*t;
    return y-t + 1;
}

int main() {
    int n = 10, a = 0, b = 2;
    float x, h, alpha=0.5, t, y;
    h=b-a;
    h=h/n;
    t=a;
    for (int i = 1; i < n+1; i++) {
        alpha = alpha + h * func(t, alpha);
        t = a + i * h; 
        printf("Iteracao %d: alpha = %f\n", i-1, alpha);
            }

    return 0;
}
