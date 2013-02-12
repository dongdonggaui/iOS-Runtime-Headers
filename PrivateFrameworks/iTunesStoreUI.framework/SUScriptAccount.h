/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString, SSAccount;

@interface SUScriptAccount : SUScriptObject {
    SSAccount *_account;
}

@property(retain) SSAccount * account;
@property(copy) NSString * credits;
@property(retain) NSNumber * dsID;
@property(copy) NSString * identifier;
@property(copy) NSString * kind;
@property(retain) id lockerEnabled;
@property(getter=isPrimaryLockerAccount,readonly) id primaryLockerAccount;
@property(retain) id purchaseHistoryEnabled;
@property(retain) id socialEnabled;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_commitChanges;
- (void)_setServiceType:(int)arg1 enabled:(id)arg2;
- (id)account;
- (id)attributeKeys;
- (id)credits;
- (void)dealloc;
- (id)dsID;
- (id)identifier;
- (id)init;
- (BOOL)isPrimaryAccount;
- (id)isPrimaryLockerAccount;
- (BOOL)isSecureTokenValid;
- (id)kind;
- (id)lockerEnabled;
- (id)purchaseHistoryEnabled;
- (id)scriptAttributeKeys;
- (void)setAccount:(id)arg1;
- (void)setCredits:(id)arg1;
- (void)setDsID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLockerEnabled:(id)arg1;
- (void)setPurchaseHistoryEnabled:(id)arg1;
- (void)setSecureToken:(id)arg1;
- (void)setSocialEnabled:(id)arg1;
- (id)socialEnabled;

@end