//
//  AWHBRSUtilities.h
//  AWHBoneResources
//
//  Created by 王恒 on 2022/9/2.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRSUtilities : NSObject

+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

+ (UIImage *)imageNamed:(NSString *)name;
/**
 * 获取本地APP设置配置文件
 */
+ (NSDictionary *)getLocationAppSettingConfigBundle;

@end

NS_ASSUME_NONNULL_END
