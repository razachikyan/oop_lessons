#include "./Application.hpp"

Controller& Application::getController() {
    return Controller::getInstance();
}

std::shared_ptr<Document> Application::getDocument() {
    return std::make_shared<Document>();
}
