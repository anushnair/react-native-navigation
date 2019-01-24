#import "RNNOptions.h"
#import "RNNTransitionStateHolder.h"

@interface RNNScreenTransition : RNNOptions

@property (nonatomic, strong) RNNTransitionStateHolder* topBar;
@property (nonatomic, strong) RNNTransitionStateHolder* content;
@property (nonatomic, strong) RNNTransitionStateHolder* bottomTabs;

@property (nonatomic) BOOL hasTopBar;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL hasBottomTabs;

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL waitForRender;

- (BOOL)hasCustomAnimation;

@end
