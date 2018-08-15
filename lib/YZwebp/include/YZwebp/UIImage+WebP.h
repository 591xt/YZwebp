

#import <UIKit/UIKit.h>
#import <WebP/decode.h>
#import <WebP/encode.h>

@interface UIImage (WebP)

+ (UIImage*)imageWithWebPData:(NSData*)imgData;

+ (UIImage*)imageWithWebP:(NSString*)filePath;


@end
