//
//  Grid.h
//  GameOfLife
//
//  Created by Kristopher Hamoud on 8/6/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

- (void)onEnter;
- (void)setupGrid;

@end
