//
//  GameScene.h
//  sample
//
//  Created by 石川 雅之 on 12/01/01.
//  Copyright 2012 専修大学. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface GameScene : CCScene {
    CCSprite *plane1;
    CCSprite *tree1;
    CCSprite *tree2;
    CCSprite *tree3;
    CCSprite *tree4;
    CCSprite *tree5;
    CCSprite *human1;
    CCSprite *human2;
    CCSprite *end;
    CCMenu *menu;
    CCLabelTTF *label4;
    CCLabelTTF *label5;
    float time;
    float time1;
    float high;
    float value1;
}

+(id)node:(float)v;

@end
