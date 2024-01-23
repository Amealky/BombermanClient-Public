//
//  IController.hpp
//  BombermanClient
//
//  Created by Amealky on 18/06/2018.
//  Copyright © 2018 Amealky. All rights reserved.
//

#ifndef IController_hpp
#define IController_hpp

#include <SFML/Graphics.hpp>
#include <stdio.h>

enum class KEYS {NOKEY, BOMB, UP, LEFT, RIGHT, DOWN, EXIT, ENTER, RETURN};

class IController{
    
public:
    virtual ~IController() {};
    virtual KEYS manageEvent(sf::Event event) = 0;

    
};

#endif /* IController_hpp */
