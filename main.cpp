#include <iostream>
#include <vector>

#include <QtCore/QtCore>

template <typename T>
void printVector(std::vector<T>& vector) {
    for (const auto& el : vector) {
        std::cout << "{" << el << "} ";
    }
    std::cout << std::endl;
}

template <typename T>
void qDebugVector(std::vector<T>& vector) {
    for (const auto& el : vector) {
        qDebug() << el;
    }
}

int main(int argc, char* argv[]) {

    std::vector<size_t> v {2,4,6,8,10,12,14,16,18,20};
    std::vector<size_t> r {2,4,6,8,10,12,14,16,18,20};

    std::adjacent_difference(v.begin(), v.end(), r.begin());

    printVector(r);
    
    return 0;
}