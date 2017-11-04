// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to KGChannel.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

#import "KGManagedObject.h"

NS_ASSUME_NONNULL_BEGIN

@class KGUser;
@class KGPost;
@class KGTeam;

@interface KGChannelID : NSManagedObjectID {}
@end

@interface _KGChannel : KGManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) KGChannelID *objectID;

@property (nonatomic, strong, nullable) NSString* backendType;

@property (nonatomic, strong, nullable) NSDate* createdAt;

@property (nonatomic, strong, nullable) NSString* displayName;

@property (nonatomic, strong, nullable) NSNumber* firstLoaded;

@property (atomic) BOOL firstLoadedValue;
- (BOOL)firstLoadedValue;
- (void)setFirstLoadedValue:(BOOL)value_;

@property (nonatomic, strong, nullable) NSString* header;

@property (nonatomic, strong, nullable) NSString* identifier;

@property (nonatomic, strong, nullable) NSDate* lastPostDate;

@property (nonatomic, strong, nullable) NSDate* lastViewDate;

@property (nonatomic, strong, nullable) NSNumber* messagesCount;

@property (atomic) int64_t messagesCountValue;
- (int64_t)messagesCountValue;
- (void)setMessagesCountValue:(int64_t)value_;

@property (nonatomic, strong, nullable) NSString* name;

@property (nonatomic, strong, nullable) NSString* purpose;

@property (nonatomic, strong, nullable) NSDate* shouldUpdateAt;

@property (nonatomic, strong, nullable) NSString* teamId;

@property (nonatomic, strong, nullable) NSDate* updatedAt;

@property (nonatomic, strong, nullable) NSSet<KGUser*> *members;
- (nullable NSMutableSet<KGUser*>*)membersSet;

@property (nonatomic, strong, nullable) NSSet<KGPost*> *posts;
- (nullable NSMutableSet<KGPost*>*)postsSet;

@property (nonatomic, strong, nullable) KGTeam *team;

@end

@interface _KGChannel (MembersCoreDataGeneratedAccessors)
- (void)addMembers:(NSSet<KGUser*>*)value_;
- (void)removeMembers:(NSSet<KGUser*>*)value_;
- (void)addMembersObject:(KGUser*)value_;
- (void)removeMembersObject:(KGUser*)value_;

@end

@interface _KGChannel (PostsCoreDataGeneratedAccessors)
- (void)addPosts:(NSSet<KGPost*>*)value_;
- (void)removePosts:(NSSet<KGPost*>*)value_;
- (void)addPostsObject:(KGPost*)value_;
- (void)removePostsObject:(KGPost*)value_;

@end

@interface _KGChannel (CoreDataGeneratedPrimitiveAccessors)

- (nullable NSString*)primitiveBackendType;
- (void)setPrimitiveBackendType:(nullable NSString*)value;

- (nullable NSDate*)primitiveCreatedAt;
- (void)setPrimitiveCreatedAt:(nullable NSDate*)value;

- (nullable NSString*)primitiveDisplayName;
- (void)setPrimitiveDisplayName:(nullable NSString*)value;

- (nullable NSNumber*)primitiveFirstLoaded;
- (void)setPrimitiveFirstLoaded:(nullable NSNumber*)value;

- (BOOL)primitiveFirstLoadedValue;
- (void)setPrimitiveFirstLoadedValue:(BOOL)value_;

- (nullable NSString*)primitiveHeader;
- (void)setPrimitiveHeader:(nullable NSString*)value;

- (nullable NSString*)primitiveIdentifier;
- (void)setPrimitiveIdentifier:(nullable NSString*)value;

- (nullable NSDate*)primitiveLastPostDate;
- (void)setPrimitiveLastPostDate:(nullable NSDate*)value;

- (nullable NSDate*)primitiveLastViewDate;
- (void)setPrimitiveLastViewDate:(nullable NSDate*)value;

- (nullable NSNumber*)primitiveMessagesCount;
- (void)setPrimitiveMessagesCount:(nullable NSNumber*)value;

- (int64_t)primitiveMessagesCountValue;
- (void)setPrimitiveMessagesCountValue:(int64_t)value_;

- (nullable NSString*)primitiveName;
- (void)setPrimitiveName:(nullable NSString*)value;

- (nullable NSString*)primitivePurpose;
- (void)setPrimitivePurpose:(nullable NSString*)value;

- (nullable NSDate*)primitiveShouldUpdateAt;
- (void)setPrimitiveShouldUpdateAt:(nullable NSDate*)value;

- (nullable NSString*)primitiveTeamId;
- (void)setPrimitiveTeamId:(nullable NSString*)value;

- (nullable NSDate*)primitiveUpdatedAt;
- (void)setPrimitiveUpdatedAt:(nullable NSDate*)value;

- (NSMutableSet<KGUser*>*)primitiveMembers;
- (void)setPrimitiveMembers:(NSMutableSet<KGUser*>*)value;

- (NSMutableSet<KGPost*>*)primitivePosts;
- (void)setPrimitivePosts:(NSMutableSet<KGPost*>*)value;

- (KGTeam*)primitiveTeam;
- (void)setPrimitiveTeam:(KGTeam*)value;

@end

@interface KGChannelAttributes: NSObject 
+ (NSString *)backendType;
+ (NSString *)createdAt;
+ (NSString *)displayName;
+ (NSString *)firstLoaded;
+ (NSString *)header;
+ (NSString *)identifier;
+ (NSString *)lastPostDate;
+ (NSString *)lastViewDate;
+ (NSString *)messagesCount;
+ (NSString *)name;
+ (NSString *)purpose;
+ (NSString *)shouldUpdateAt;
+ (NSString *)teamId;
+ (NSString *)updatedAt;
@end

@interface KGChannelRelationships: NSObject
+ (NSString *)members;
+ (NSString *)posts;
+ (NSString *)team;
@end

NS_ASSUME_NONNULL_END
