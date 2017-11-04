// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to KGCommand.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

#import "KGManagedObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface KGCommandID : NSManagedObjectID {}
@end

@interface _KGCommand : KGManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) KGCommandID *objectID;

@property (nonatomic, strong, nullable) NSString* hint;

@property (nonatomic, strong, nullable) NSString* message;

@property (nonatomic, strong, nullable) NSString* name;

@property (nonatomic, strong, nullable) NSString* trigger;

@end

@interface _KGCommand (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString*)primitiveHint;
- (void)setPrimitiveHint:(nullable NSString*)value;

- (nullable NSString*)primitiveMessage;
- (void)setPrimitiveMessage:(nullable NSString*)value;

- (nullable NSString*)primitiveName;
- (void)setPrimitiveName:(nullable NSString*)value;

- (nullable NSString*)primitiveTrigger;
- (void)setPrimitiveTrigger:(nullable NSString*)value;

@end

@interface KGCommandAttributes: NSObject 
+ (NSString *)hint;
+ (NSString *)message;
+ (NSString *)name;
+ (NSString *)trigger;
@end

NS_ASSUME_NONNULL_END
