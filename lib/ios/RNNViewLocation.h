#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface RNNViewLocation : NSObject

@property (nonatomic) CGRect fromFrame;
@property (nonatomic) CGRect toFrame;

- (instancetype)initWithFromElement:(UIView*)fromElement toElement:(UIView*)toElement;

@end
