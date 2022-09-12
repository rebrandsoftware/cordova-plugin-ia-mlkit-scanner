@protocol senddataProtocol <NSObject>

-(void)closeScanner;
-(void)sendResult:(NSString *)result;

@end

@interface MLKitCameraViewController : UIViewController<UITextFieldDelegate,UIGestureRecognizerDelegate>

@property(nonatomic,assign)id delegate;
@property(nonatomic,assign) NSNumber *barcodeFormats;
@property(nonatomic,assign) CGFloat scanAreaWidth;
@property(nonatomic,assign) CGFloat scanAreaHeight;

@end

