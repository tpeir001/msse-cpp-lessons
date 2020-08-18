#include <iostream>

int main(void)
{
    double i = 10;

    //Create an array of 10 doubles
    double arr[10] = {0.0,2.0,4.0,6.0,8.0,10.0,12.0,14.0,16.0,18.0};
    double arr2[10] = arr;

    for(int idx = 0; idx < 10; idx++)
    {
        std::cout<< idx << " : " << arr[idx] << std::endl;
    }

    //std::cout << "i = " << i << std::endl;
    return 0;
}

#include <iostream>

int main(void)
{
    int i = 1234;
    std::cout << "Value of i " << i << std::endl; 
    std::cout << "Address of i " << &i << std::endl;

    int * pi = &i;
    std::cout << "Value of pi "<< pi << std::endl;
    std::cout << "Value of *pi "<< *pi << std::endl;
    
    *pi = 5678;
    std::cout << "Value of i " << i << std::endl;

    i = 10000;
    std::cout << "Value of *pi "<< *pi << std::endl;

    int * point = nullptr;
    std::cout << *point << std::endl;

    return 0;
}

int main(void)
{
    int ndoubles = 100;

    std::vector<double> dvec;
    dvec.resize(ndoubles);

    for(size_t i = 0; i < dvec.size(); i++)
    {
        dvec.at(i) = 0.0;
    }

    std::cout << "Size: " << dvec.size() << std::endl;
    dvec.push_back(3.1415);
    std::cout << "Size: " << dvec.size() << std::endl;

    dvec.pop_back();
    std::cout << "Size: "<< dvec.size() <<std::endl;

    dvec.at(50) = 66.789;
    std::cout << "Size: "<< dvec.size() <<std::endl;

    
    //dvec.clear();
    //std::cout << "Size: " << dvec.size() << std::endl;

    return 0;
}

typedef std::array<double, 3> AtomCoord;
typedef std::vector<AtomCoord> Coordinates;

int main(void)
{
    AtomCoord coord = {1.0,2.0,3.0};
    Coordinates coordinates;
    coordinates.push_back(coord);

    std::cout << "Coordinate: "<< coordinates.at(0)[0] <<std::endl;

    std::cout << "Size: " << coord.size() << std::endl;
    //coord.at(3) = 1.0;

    std::array<double, 3> coord2 = coord;
    std::cout << coord2[0] << std::endl;

    return 0;
}