
#import <UIKit/UIKit.h>
#import <WebP/decode.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (YZWebp)

/// Webp Data转Image
/// @param imgData webp图片的Data数据
+ (UIImage*)imageWithWebPData:(NSData*)imgData;


/// Webp转Image
/// @param name 图片名字例如：Demo或者Demo.webp
+ (UIImage*)imageWithWebP:(NSString*)name;

@end

NS_ASSUME_NONNULL_END
