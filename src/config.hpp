// Copyright 2014 Lauri Gustafsson
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

#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>
#include "rpi_gfx.hpp"

class Config
{
public:
    Config(int argc, char* argv[]);

    std::string fsName;
    int w, h;
    float stretch;

    std::string inames[4];
    unsigned short imgs;

    bool devmode;
    bool prepend;
    bool fpsCounter;
    unsigned short fpsIn;
};

#endif
