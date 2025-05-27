#include <iostream>
#include <string>

class Dishes {
protected:
    std::string _doping;

public:
    int ID;
    static int totalIDCount;

    Dishes(std::string doping) : _doping(doping) { ID = totalIDCount++; }

    Dishes() { .ID = totalIDCount++; }

    std::string GetDoping() const { return _doping; }

    virtual ~Dishes() = default;
};

int Dishes::totalIDCount = 0;

class FirstDishes : public Dishes {
public:
    FirstDishes(std::string doping) : Dishes(doping) {}
    FirstDishes() : Dishes() {}
};

class SecondDishes : public Dishes {
public:
    SecondDishes(std::string doping) : Dishes(doping) {}
    SecondDishes() : Dishes() {}
};

class SoupWithFish : public FirstDishes {
public:
    SoupWithFish() : FirstDishes("Soup with fish doping.") {}
};

class PastaWithIcecream : public FirstDishes {
public:
    PastaWithIcecream() : FirstDishes("Pasta with icecream doping.") {}
};

class PizzaWithFish : public SecondDishes {
public:
    PizzaWithFish() : SecondDishes("Pizza with fish doping.") {}
};

class SushiWithIcecream : public SecondDishes {
public:
    SushiWithIcecream() : SecondDishes("Sushi with icecream doping.") {}
};

class IDishesFactory {
public:
    virtual FirstDishes* GetFirstDishes() = 0;
    virtual SecondDishes* GetSecondDishes() = 0;
    virtual ~IDishesFactory() = default;
};

class FishDopingDishesFactory : public IDishesFactory {
public:
    FirstDishes* GetFirstDishes() override {
        return new SoupWithFish();
    }

    SecondDishes* GetSecondDishes() override {
        return new PizzaWithFish();
    }
};

class IcecreamDopingDishesFactory : public IDishesFactory {
public:
    FirstDishes* GetFirstDishes() override {
        return new PastaWithIcecream();
    }

    SecondDishes* GetSecondDishes() override {
        return new SushiWithIcecream();
    }
};

int main() {
    IDishesFactory* dishesFishFactory = new FishDopingDishesFactory();
    FirstDishes* firstDish = dishesFishFactory->GetFirstDishes();
    SecondDishes* secondDish = dishesFishFactory->GetSecondDishes();

    std::cout << "Got: " << firstDish->GetDoping() << " | ID: " << firstDish->ID << std::endl;
    std::cout << "Got: " << secondDish->GetDoping() << " | ID: " << secondDish->ID << std::endl;

    delete firstDish;
    delete secondDish;
    delete dishesFishFactory;

    return 0;
}
