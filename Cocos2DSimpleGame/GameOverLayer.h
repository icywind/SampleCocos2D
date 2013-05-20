//
//  GameOverLayer.h
//  Cocos2DSimpleGame
//
//  Created by Rickie Cheng on 5/20/13.
//  Copyright 2013 Rickie Cheng. All rights reserved.
//
#import "cocos2d.h"

@interface GameOverLayer : CCLayerColor 
    
+(CCScene *) sceneWithWon:(BOOL)won;
- (id)initWithWon:(BOOL)won;

@end
