//
//  HelloWorldLayer.h
//  Cocos2DSimpleGame
//
//  Created by Rickie Cheng on 5/17/13.
//  Copyright Rickie Cheng 2013. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
//@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
//{
//}

@interface HelloWorldLayer : CCLayerColor {
    int _monstersDestroyed;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;


@end
