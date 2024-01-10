//
// Created by danng on 2023-12-26.
//

#ifndef NESIM_SIMULATOR_H
#define NESIM_SIMULATOR_H
#include "Nation.h"
#include <string>

namespace simulator {
    class Simulator {
    public:
        explicit Simulator(std::string economicType);
        void startSimulation();
        void nextDay();
        void playAtSpeed(int speed);
        void pause();

    private:
        nation::Nation nation;
    };
}

#endif //NESIM_SIMULATOR_H
