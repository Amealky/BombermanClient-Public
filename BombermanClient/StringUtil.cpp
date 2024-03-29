//
//  StringUtil.cpp
//  BombermanClient
//
//  Created by Amealky on 06/07/2018.
//  Copyright © 2018 Amealky. All rights reserved.
//

#include "StringUtil.hpp"

template<typename Out>
void split(const std::string &s, char delim, Out result) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        *(result++) = item;
    }
}

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}
