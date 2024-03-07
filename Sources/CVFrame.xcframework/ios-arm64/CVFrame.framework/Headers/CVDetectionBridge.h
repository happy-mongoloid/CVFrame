//
//  CVDetectionBridge.h
//  Hip
//
//  Created by Demian Nezhdanov on 04.02.2021.
//  Copyright © 2021 Demian Nezhdanov. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#include <simd/simd.h>
@interface CVDetectionBridge : NSObject
    
- (UIImage *) track_Mat: (UIImage *) image;
- (UIImage *) halation: (UIImage *) image;
//- (CGImage *) detectPupils: (UIImage *) image;
- (vector_float2)track_Point:(UIImage *)image;
- (NSArray *)track_Points:(UIImage *)image ;
- (NSArray *)track_Points:(UIImage *)image withCondition:(BOOL)first;
//- (NSArray *)track_Points:(UIImage *)image;
    
@end
