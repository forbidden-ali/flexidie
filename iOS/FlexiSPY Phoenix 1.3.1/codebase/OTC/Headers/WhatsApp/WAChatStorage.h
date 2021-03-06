/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */
#import <Foundation/Foundation.h>
//#import "NSObject.h"

@class GDataHTTPFetcher, NSLock, NSManagedObjectContext, NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSMutableSet, NSPersistentStoreCoordinator, NSString;

@interface WAChatStorage : NSObject
{
    NSMutableArray *_chatSessions;
    int _blacklistSize;
    NSString *_fileUploadURL;
    NSMutableDictionary *_httpUploaders;
    NSMutableArray *_mediaDownloadQueue;
    GDataHTTPFetcher *_httpDownloader;
    BOOL _downloadInProgress;
    BOOL _movieSupported;
    NSMutableSet *_locationQueue;
    NSMutableSet *_thumbnailQueue;
    NSMutableSet *_placeDetailsQueue;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectContext *_dataRefreshContext;
    NSLock *_pscLock;
    NSLock *_momLock;
    //id <WAChatStorageDelegate> _delegate;
}

+ (id)errorWithDescription:(id)arg1 failureReason:(id)arg2;
@property(retain, nonatomic) GDataHTTPFetcher *httpDownloader; // @synthesize httpDownloader=_httpDownloader;
- (void)populateChatHistory:(id)arg1;
- (id)downloadText:(int)arg1 maxPhraseSize:(int)arg2;
- (void)pictureRequestFailed:(id)arg1 withUserData:(id)arg2;
- (void)pictureRequestSuccess:(id)arg1 withUserData:(id)arg2;
- (void)groupPictureFetchFailed:(id)arg1 withUserData:(id)arg2;
- (void)groupPictureFetched:(id)arg1 picture:(id)arg2 type:(id)arg3 withUserData:(id)arg4;
- (id)thumbnailForChatSession:(id)arg1;
- (void)requestPicturesForAllGroupsIfNeeded;
- (void)requestPictureOfType:(int)arg1 forChatSession:(id)arg2 userInfo:(id)arg3;
- (void)deleteFullsizeImageForChatSession:(id)arg1;
- (void)deleteImageForChatSessionWithID:(id)arg1 timestamp:(id)arg2 memberJID:(id)arg3;
- (void)setPictureData:(id)arg1 thumbnailData:(id)arg2 pictureID:(id)arg3 forChatSessionWithID:(id)arg4 timestamp:(id)arg5 memberJID:(id)arg6;
- (void)groupLeaveFailed:(id)arg1 withUserData:(id)arg2;
- (void)groupLeaveFinished:(id)arg1 withUserData:(id)arg2;
- (void)groupsRequestFailed:(id)arg1 withUserData:(id)arg2;
- (void)groupsRequestCompleted:(id)arg1 withUserData:(id)arg2;
- (void)cleanDirtyFlagsFailed:(id)arg1;
- (void)cleanDirtyFlagsFinished;
- (void)memberRequestFailed:(id)arg1 withUserData:(id)arg2;
- (void)memberRequestForGroup:(id)arg1 finishedWithResult:(id)arg2 withUserData:(id)arg3;
- (void)infoRequestFailed:(id)arg1 withUserData:(id)arg2;
- (void)infoRequestCompletedForGroup:(id)arg1 withUserData:(id)arg2;
- (void)groupUpdateFailed:(id)arg1 withUserData:(id)arg2;
- (void)groupUpdated:(id)arg1 addedContacts:(id)arg2 failedContacts:(id)arg3 withUserData:(id)arg4;
- (void)groupCreationFailed:(id)arg1 withUserData:(id)arg2;
- (void)groupCreationFinished:(id)arg1 withUserData:(id)arg2;
- (int)numberOfGroups;
- (id)groupChatSessions;
- (void)requestParticipatingGroups:(BOOL)arg1;
- (id)groupMessagesForJID:(id)arg1;
- (id)groupMemberWithObjectID:(id)arg1;
- (void)requestParticipantsForGroupWithJID:(id)arg1;
- (void)requestInfoForGroupWithJID:(id)arg1;
- (void)setSubject:(id)arg1 forChatSession:(id)arg2 byUserWithJID:(id)arg3 name:(id)arg4 date:(id)arg5;
- (void)removeContact:(id)arg1 fromChatSession:(id)arg2 authorJID:(id)arg3;
- (void)removeContactWithJID:(id)arg1 fromChatSession:(id)arg2 authorJID:(id)arg3;
- (id)addContact:(id)arg1 withJID:(id)arg2 toChatSession:(id)arg3 save:(BOOL)arg4;
- (id)groupMembersWithJID:(id)arg1 inContext:(id)arg2;
- (id)groupMemberWithJID:(id)arg1 inChatSession:(id)arg2;
- (BOOL)isJID:(id)arg1 memberOfChatSessionWithID:(id)arg2;
- (id)memberJIDsForChatSessionWithID:(id)arg1;
- (id)membersForChatSessionWithID:(id)arg1;
- (void)leaveGroupOnTheServer:(id)arg1;
- (void)registerGroupOnTheServer:(id)arg1;
- (id)createChatSessionForContacts:(id)arg1 subject:(id)arg2;
- (id)createChatSessionWithSubject:(id)arg1 groupJID:(id)arg2 ownerJID:(id)arg3 time:(id)arg4;
- (BOOL)isJIDBlocked:(id)arg1;
- (void)setBlacklistJIDs:(id)arg1;
- (id)blacklistJIDs;
- (id)blacklistItems;
@property(readonly, nonatomic) int blacklistSize;
- (void)checkMessageDeliveryByID:(id)arg1;
- (void)checkMessageDelivery:(id)arg1;
- (void)scheduleMessageDeliveryCheckForMessage:(id)arg1;
- (void)markMessageAsUnsent:(id)arg1;
- (void)storeModifiedMessageAndNotify:(id)arg1;
- (void)storeModifiedMessage:(id)arg1 notify:(BOOL)arg2;
- (void)forwardMessages:(id)arg1 toChatSession:(id)arg2;
- (void)sendMessages:(id)arg1;
- (void)sendMessage:(id)arg1 notify:(BOOL)arg2;
- (void)receiveError:(id)arg1 forMessage:(id)arg2;
- (void)receiveMessages:(id)arg1;
- (void)objectFetcher:(id)arg1 failedWithUploadError:(id)arg2;
- (void)objectFetcher:(id)arg1 finishedWithUploadData:(id)arg2;
- (void)objectFetcher:(id)arg1 receivedData:(id)arg2;
- (void)objectFetcher:(id)arg1 failedWithDownloadError:(id)arg2;
- (void)objectFetcher:(id)arg1 finishedWithFileData:(id)arg2;
- (void)objectFetcher:(id)arg1 failedWithFileUploadError:(id)arg2;
- (void)objectFetcher:(id)arg1 finishedWithFileUploadData:(id)arg2;
- (void)objectFetcher:(id)arg1 didSendBytes:(int)arg2 totalBytesSent:(int)arg3 totalBytesExpectedToSend:(int)arg4;
- (void)processMediaDownloadQueue;
- (void)cancelMediaDownloadForMessage:(id)arg1;
- (void)queueMediaDownloadForMessage:(id)arg1;
- (void)cancelFileUploadForMessage:(id)arg1;
- (id)uploadFile:(id)arg1 from:(id)arg2 to:(id)arg3 delegate:(id)arg4;
- (void)startMediaUploadForMessage:(id)arg1;
- (void)appendTextParam:(id)arg1 withName:(id)arg2 boundary:(id)arg3 toData:(id)arg4;
- (void)delegateDidFailToFindLocation:(id)arg1;
- (void)delegate:(id)arg1 didFoundLocation:(id)arg2 xmppThumbnail:(id)arg3 localThumbnail:(id)arg4;
- (void)fetcher:(id)arg1 finishedWithPlaceDetails:(id)arg2;
- (void)fetcher:(id)arg1 failedLoadingPlaceDetailsWithError:(id)arg2;
- (void)fetcher:(id)arg1 finishedWithThumbnailData:(id)arg2;
- (void)fetcher:(id)arg1 failedLoadingThumbnailWithError:(id)arg2;
- (id)thumbnailDataForMessage:(id)arg1;
- (void)updateMessage:(id)arg1 withLocationInfo:(id)arg2;
- (id)messageWithLocation:(id)arg1 placeID:(id)arg2 name:(id)arg3 address:(id)arg4 url:(id)arg5 inChatSession:(id)arg6;
- (id)locationMessageInChatSession:(id)arg1;
- (void)processLocationMessage:(id)arg1;
- (void)requestDetailsForPlaceID:(id)arg1 message:(id)arg2;
- (void)requestThumbnailForMessage:(id)arg1 location:(id)arg2;
- (void)requestLocationForMessage:(id)arg1;
- (id)messageWithLocation:(id)arg1 thumbnailData:(id)arg2 thumbnailPath:(id)arg3 inChatSession:(id)arg4 send:(BOOL)arg5;
- (id)messageWithVCard:(id)arg1 contactName:(id)arg2 inChatSession:(id)arg3 send:(BOOL)arg4;
- (id)messageWithAudioURL:(id)arg1 inChatSession:(id)arg2 error:(id *)arg3;
- (id)messageWithMovieURL:(id)arg1 inChatSession:(id)arg2 copyFile:(BOOL)arg3 error:(id *)arg4;
- (id)messageWithImage:(id)arg1 inChatSession:(id)arg2 saveToLibrary:(BOOL)arg3 error:(id *)arg4;
- (id)messageWithText:(id)arg1 inChatSession:(id)arg2 send:(BOOL)arg3;
- (id)messageWithMediaAtPath:(id)arg1 ofType:(int)arg2 mediaURL:(id)arg3 fileSize:(unsigned int)arg4 thumbnailPath:(id)arg5 thumbnailData:(id)arg6 inChatSession:(id)arg7 send:(BOOL)arg8;
- (id)messagesForSession:(id)arg1 startOffset:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithStanzaIDs:(id)arg1 inChatSession:(id)arg2;
- (id)messageWithStanzaID:(id)arg1 inChatSession:(id)arg2;
- (id)messageWithStanzaID:(id)arg1 contactJID:(id)arg2;
- (id)messageWithID:(id)arg1;
- (id)messageWithObjectID:(id)arg1;
- (int)indexOfMessageWithID:(id)arg1;
- (id)existingMessagesID:(id)arg1;
- (id)outgoingMessageTemplateForSession:(id)arg1 withMedia:(BOOL)arg2;
- (id)incomingMessageTemplateWithMedia:(BOOL)arg1;
- (id)cpVideoToTempDirectory:(id)arg1 preserveName:(BOOL)arg2 error:(id *)arg3;
- (id)saveImageToTempDirectory:(id)arg1 error:(id *)arg2;
- (id)fullPathForAudioRecord;
- (void)generateThumbnailsForAllMedia;
- (void)createThumbnailForMessageWithID:(id)arg1;
- (void)createThumbnailForMessage:(id)arg1 addressBook:(const void **)arg2 baseDir:(id)arg3 cachesDir:(id)arg4;
- (id)recentLocationsInChatSessionWithID:(id)arg1;
- (id)allMediaForContactWithID:(int)arg1;
- (id)allMediaInChatSessionWithID:(id)arg1;
- (unsigned int)countSentMedia;
- (unsigned int)countMediaInChatSessionWithID:(id)arg1;
- (void)deleteAllMedia;
- (void)deleteMediaForMessage:(id)arg1;
- (void)deleteProfilePicturesForSession:(id)arg1;
- (void)deleteMediaForSession:(id)arg1;
- (int)countMediaForMessage:(id)arg1 tag:(int)arg2;
- (void)deleteEmptyChatSessions;
- (void)deleteMessages:(id)arg1 inChatSession:(id)arg2;
- (void)deleteMessage:(id)arg1;
- (void)deleteMessagesInSession:(id)arg1;
- (void)deleteMessagesForContactWithID:(id)arg1;
- (void)deleteMessagesInAllSessions;
- (void)deleteAllChatSessions;
- (void)deleteChatSession:(id)arg1;
- (void)deleteNotificationsForAllGroups;
- (id)groupSettingsExcludingGroupJID:(id)arg1;
- (void)preparePropertiesForChatSession:(id)arg1;
- (void)updateChatSessionWithMessage:(id)arg1;
- (BOOL)hasChatHistoryWithContactABID:(int)arg1;
- (int)numberOfUnreadChatSessions;
- (void)prepareSessionToUse:(id)arg1;
- (void)storeModifiedChatSession:(id)arg1;
- (id)chatSessionWithObjectID:(id)arg1;
- (id)chatSessionForJID:(id)arg1 inContext:(id)arg2;
- (id)chatSessionForJID:(id)arg1 contactABID:(int)arg2;
- (id)chatSessionForJID:(id)arg1;
- (id)chatSessionIDsInContext:(id)arg1;
- (id)chatSessionsInContext:(id)arg1;
- (id)createChatSessionForContact:(id)arg1 JID:(id)arg2;
@property(readonly, nonatomic) NSMutableArray *chatSessions;
- (void)searchWithCriteria:(id)arg1 delegate:(id)arg2 selector:(SEL)arg3;
- (void)mergeChanges:(id)arg1;
- (void)asynchronousSave;
- (void)save;
- (void)saveContext:(id)arg1;
- (void)disposeDataRefreshContext;
- (id)fullPathToMediaInMessage:(id)arg1;
- (void)deleteStorage;
- (BOOL)dataMigrationRequired;
- (void)initializePersistentStoreCoordinator;
- (void)setMetadata:(id)arg1 forKey:(id)arg2;
- (id)metadataForKey:(id)arg1;
@property(readonly, nonatomic) NSManagedObjectContext *dataRefreshContext;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
- (id)persistentStoreCoordinator;
- (id)managedObjectModel;
- (id)persistentStoreURL;
- (id)persistentStorePath;
- (id)fileUploadURL;
- (void)dealloc;
- (id)initWithStorageDelegate:(id)arg1;

@end

