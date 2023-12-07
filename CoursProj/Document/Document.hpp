#pragma once
#include "./Item/Item.hpp"
#include <string>
#include <vector>


class Document {
public:
    Document() {};

    void addSlide(Item);
    void delSlide(std::string id);
    std::vector<Item> getSlides();
    Item getSlideById(std::string);
};
