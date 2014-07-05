//
//  Creatures.h
//  GameOfLife
//
//  Created by PHENOM on 7/5/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creatures : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

-(id)initCreature;

@end
