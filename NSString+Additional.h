//
//  NSString+Additional.h
//  LiveStore


#import <Foundation/Foundation.h>

@interface NSString (Additional)
+ (float) heightForString:(NSString *)value fontSize:(float)fontSize andWidth:(float)width;
+ (CGFloat)heightForString:(NSString *)value fontSize:(float)fontSize andWidth:(float)width maximumNumberOfLines:(int)lines;
+ (CGFloat)widthForString:(NSString *)value fontSize:(float)fontSize;   //计算字符串宽度
+ (BOOL) isValidateEmail:(NSString *)email;
+ (BOOL) isValidateMobile:(NSString *)mobile;
+ (BOOL) isValidateIBC:(NSString *)number;//11位数字
+ (BOOL) validateCarNo:(NSString*) carNo;
+ (BOOL) isBlankString:(NSString *)string;
+ (BOOL) isValidatePhone:(NSString *)phone;

@end
