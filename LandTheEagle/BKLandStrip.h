//
//  BKLandStrip.h
//  LandTheEagle
//
//  Created by Bryan Klimt on 2/14/14.
//  Copyright (c) 2014 Bryan Klimt. All rights reserved.
//
//  This source code is licensed as described in the LICENSE file in the root directory of this
//  source tree.
//

#import <SpriteKit/SpriteKit.h>

@class BKTheme;

@interface BKLandStrip : SKNode

+ (instancetype)landStripWithTopDelta:(int)delta
                                    X:(int)x
                                    Y:(int)y
                           tileHeight:(int)tileHeight
                                count:(int)count
                                theme:(BKTheme *)theme;

@end
