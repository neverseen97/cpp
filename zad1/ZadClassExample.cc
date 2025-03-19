#include <iostream>
#include <string>

class Car
{
private:
    std::string company;
    std::string model;
    int year;

public:
    Car(const std::string &comp, const std::string &mdl, int yr)
        : company(comp), model(mdl), year(yr) {}

    std::string getCompany() const { return company; }
    std::string getModel() const { return model; }
    int getYear() const { return year; }

    void setCompany(const std::string &comp) { company = comp; }
    void setModel(const std::string &mdl) { model = mdl; }
    void setYear(int yr) { year = yr; }
};

int main()
{
    Car myCar("Toyota", "Corolla", 2020);

    std::cout << "Firma: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Rok: " << myCar.getYear() << std::endl;

    myCar.setCompany("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2022);

    std::cout << "Nowa firma: " << myCar.getCompany() << std::endl;
    std::cout << "Nowy model: " << myCar.getModel() << std::endl;
    std::cout << "Nowy rok: " << myCar.getYear() << std::endl;

    return 0;
}
