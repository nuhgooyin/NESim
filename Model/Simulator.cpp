//
// Created by danng on 2023-12-26.
//

#include "Simulator.h"
#include <string>
#include "Nation.h"

simulator::Simulator::Simulator(std::string economicType) {
    nation = nation::Nation();
}

void simulator::Simulator::startSimulation() {}

void simulator::Simulator::nextDay() {}

void simulator::Simulator::playAtSpeed(int speed) {}

void simulator::Simulator::pause() {}



