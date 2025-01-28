#include "Greeting.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <chrono>

std::string Greeting::getCurrentDate() {
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);
    
    char date[11];
    std::strftime(date, sizeof(date), "%d/%m/%Y", localTime);
    
    return std::string(date);
}

std::string Greeting::getGreeting() {
    return "Hola Mundo. Saludo de Alejandro Jaramillo hoy " + getCurrentDate() + " .";
}
