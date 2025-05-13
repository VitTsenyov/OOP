#pragma once
#include <string>
#include <iostream>

class Details {
protected:
    std::string frameMaterial;
    std::string color;

public:
    Details(const std::string& frameMaterial = "Aluminum",
            const std::string& color = "Black");

    virtual void display() const;

    std::string getFrameMaterial() const;
    void setFrameMaterial(const std::string& frameMaterial);

    std::string getColor() const;
    void setColor(const std::string& color);

    virtual ~Details() = default;
};
