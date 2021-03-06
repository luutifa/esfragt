// Copyright 2014-2016 Lauri Gustafsson
/*
This file is part of esfragt.

    esfragt is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    esfragt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with esfragt, see COPYING. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <string>
#include <vector>
#include "3dapp_config.hpp"

class ApplicationConfig: public Lib3dapp::Config {
    public:
        ApplicationConfig(int argc, char* argv[]);
    
        std::string fsName;
        std::string ppName;
        float internalW, internalH;
    
        std::vector<std::string> inames;
    
        bool fpsCounter;
        float fpsCounterInterval;
        float alpha;
};

