/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EXState, NSString, NSURL;

@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {
    NSURL *mPackageLocation;
    EXState *mSheetState;
    NSString *mType;
}

- (void)dealloc;
- (id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;
- (bool)loadDelayedNode:(id)arg1;

@end