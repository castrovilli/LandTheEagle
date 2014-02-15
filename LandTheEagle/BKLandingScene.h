//
//  BKMyScene.h
//  LandTheEagle
//

//  Copyright (c) 2014 Bryan Klimt. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface BKLandingScene : SKScene<SKPhysicsContactDelegate>

+ (instancetype)landingSceneWithSize:(CGSize)size level:(int)level;

@end
