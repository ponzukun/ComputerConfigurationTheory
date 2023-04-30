#include <iostream>

// 2x2の行列と2次元ベクトルの逆行列を求める関数
void solve(int a_11, int a_12, int a_21, int a_22, int b_1, int b_2, double& x, double& y) {
    int det = a_11 * a_22 - a_12 * a_21;
    // 行列式detが0のとき逆行列が存在しないため、
    // その連立一次方程式は解を持たないか、または無数に解を持つ可能性がある
    if (det == 0) {
        if ((a_11 * b_2 - a_21 * b_1) == 0 && (a_12 * b_2 - a_22 * b_1) == 0) {
            std::cout << "無数に解が存在します。\n";
        }
        else {
            std::cout << "解が存在しません。\n";
        }
    }
    else {
        x = (b_1 * a_22 - a_12 * b_2) / static_cast<double>(det);
        y = (a_11 * b_2 - b_1 * a_21) / static_cast<double>(det);
        std::cout << "解は次の通りです: \n";
        std::cout << "x = " << x << "\n";
        std::cout << "y = " << y << "\n";
    }
}

int main() {
    int a_11, a_12, a_21, a_22, b_1, b_2; // 連立一次方程式の係数
    std::cout << "連立一次方程式 a_11 * x + a_12 * y = b_1, a_21 * x + a_22 * y = b_2 の係数を入力してください。\n";
    std::cout << "a_11, a_12, a_21, a_22, b_1, b_2の順に入力: \n";
    std::cin >> a_11 >> a_12 >> a_21 >> a_22 >> b_1 >> b_2;

    double x, y;
    solve(a_11, a_12, a_21, a_22, b_1, b_2, x, y);

    return 0;
}
