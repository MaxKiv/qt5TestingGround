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
template<typename T>
QString QVectorToQString(QVector<T> InputVector) {
    QString Output = "";
    for(const auto& el: InputVector) {
        Output += QString(el) + " ";
    }
    return Output;
}
template <>
QString QVectorToQString<int>(QVector<int> InputVector) {
    QString Output = "";
    for(const auto& el: InputVector) {
        Output += QString::number(el) + " ";
    }
    return Output;
}

// template<typename T>
// QString QVectorToQString(QVector<T> InputVector) {
//     QString OutputQString = "";
//     std::accumulate(InputVector.begin(),InputVector.end(),OutputQString.begin(),"");
//     return OutputQString;
// }

int main(int argc, char* argv[]) {

    std::vector<size_t> v {2,4,6,8,10,12,14,16,18,20};

    auto i = std::adjacent_find(v.begin(), v.end(), [](const auto & left, const auto & right){return left > right;});
    std::cout << *i;

    QMap<int, int> InputTypeIndex2StackedWidgetIndexMap{{1,1},{2,1},{3,1},{4,2}};	//Maps input type combobox index to corresponding stackedWidget pages

    return 0;
}