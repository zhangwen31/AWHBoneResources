//
//  NSDictionary+AWHBRS.h
//  AWHBoneResources
//
//  Created by 王恒 on 2022/9/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (AWHBRS)

+ (NSDictionary *)brs_readMainBundleJson2DicWithFileName:(NSString *)fileName;

+ (NSDictionary *)brs_readJson2DicWithFileName:(NSString *)path;

/** JSON字符串转i字典*/
+ (NSDictionary *)brs_jsonDictFromJsonstring_h2o:(NSString *)jsonString;

@end

NS_ASSUME_NONNULL_END
