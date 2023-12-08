#pragma once
#include <memory>

#include "Controller.hpp"
#include "../Document/Document.hpp"

class Application {
public:
    std::shared_ptr<Document> getDocument();

    Controller& getController();

private:
    Application() {}

    Application(const Application&) = delete;
    Application& operator=(const Application&) = delete;
};