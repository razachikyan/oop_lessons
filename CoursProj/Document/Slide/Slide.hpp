#pragma once
#include <string>
#include <vector>

class Slide {
public:
    Slide();

    void addItem(Item);
    void delItem(std::string id);
    std::vector<Item> getItems();
    Item getItemById(std::string id);

};
