/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRoutePath : NSObject {
    NSInteger _mode;
    struct CGPath { } *_path;
}

@property(readonly) CGPath *path;
@property(readonly) NSInteger mode;

- (void)dealloc;
- (id)initWithPath:(struct CGPath { }*)arg1 mode:(NSInteger)arg2;
- (NSInteger)mode;
- (struct CGPath { }*)path;

@end