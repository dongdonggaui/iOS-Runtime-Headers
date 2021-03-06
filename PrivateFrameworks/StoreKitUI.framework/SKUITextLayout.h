/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUITextLayout : NSObject <SKUICachedLayout> {
    struct __CTFramesetter { } *_framesetter;
    float _lineHeight;
    BOOL _requiresTruncation;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    struct __CTFrame { } *_textFrame;
    struct CGSize { 
        float width; 
        float height; 
    } _truncatedSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float lineHeight;
@property (nonatomic, readonly) BOOL requiresTruncation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __CTFrame { }*textFrame;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } textSize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } truncatedSize;

+ (struct __CFAttributedString { }*)_newAttributedStringWithRequest:(id)arg1;
+ (struct __CFAttributedString { }*)newAttributedStringWithText:(id)arg1;

- (void)dealloc;
- (id)initWithLayoutRequest:(id)arg1;
- (float)lineHeight;
- (BOOL)requiresTruncation;
- (struct __CTFrame { }*)textFrame;
- (struct CGSize { float x1; float x2; })textSize;
- (struct CGSize { float x1; float x2; })truncatedSize;

@end
