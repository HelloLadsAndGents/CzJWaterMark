//
//  AddWaterMark.h
//
//  Created by exe on 2017/10/10.
//  Copyright © 2017年 CzJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface AddWaterMark : NSObject
- (UIImage *) addWaterMark:(UIImage*) backImage watemarkText:(NSString *) watemarkText;
- (UIImage *) watemarkText:(NSString *) watemarkText;
@end
