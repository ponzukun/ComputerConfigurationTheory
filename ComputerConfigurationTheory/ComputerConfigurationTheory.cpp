#include <iostream>

double Triangle_Square(double a, double b, double c) {
    double s = (a + b + c) / 2;
    double S = std::sqrt(s * (s - a) * (s - b) * (s - c));

    return S;
}

double Length(double x0, double y0, double x1, double y1) {
    double dx = x0 - x1;
    double dy = y0 - y1;
    double L = std::sqrt(dx * dx + dy * dy);

    return L;
}

double Read_data(double *x, double *y) {
    std::cout << "x座標を入力してください：";
    std::cin >> *x;

    std::cout << "y座標を入力してください：";
    std::cin >> *y;

    return 0;
}

int main() {
    double L[3];
    double X[3];
    double Y[3];

    for (int i = 0; i < 3; i++) {
        Read_data(&X[i], &Y[i]);
    }

    std::cout << "A座標：" << X[0] << ", " << Y[0] << "\n";
    std::cout << "B座標：" << X[1] << ", " << Y[1] << "\n";
    std::cout << "C座標：" << X[2] << ", " << Y[2] << "\n";

    L[0] = Length(X[0], Y[0], X[1], Y[1]);
    L[1] = Length(X[1], Y[1], X[2], Y[2]);
    L[2] = Length(X[2], Y[2], X[0], Y[0]);

    std::cout << "aの長さ：" << L[0] << "\n";
    std::cout << "bの長さ：" << L[1] << "\n";
    std::cout << "cの長さ：" << L[2] << "\n";

    std::cout << "面積：" << Triangle_Square(L[0], L[1], L[2]) << "\n";

    return 0;
}
