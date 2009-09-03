/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@class ActivityMonitor, MFError, Message, MimeBody, NSArray, NSAttributedString, NSDictionary, NSSet, NSString;

@interface MessageViewingState
{
    NSAttributedString *_headerAttributedString;
    NSDictionary *_addressAttachments;
    NSDictionary *_plainAddresses;
    NSSet *_expandedAddressKeys;
    NSAttributedString *_attachmentsDescription;
    NSArray *_headerOrder;
    NSArray *_attachments;
    Message *_message;
    ActivityMonitor *_monitor;
    MimeBody *mimeBody;
    id document;
    MFError *error;
    long long headerIndent;
    long long headerFontAdjustmentDebt;
    int preferredAlternative;
    BOOL accountWasOffline;
    BOOL dontCache;
    BOOL showAllHeaders;
    BOOL showDefaultHeaders;
    BOOL isPrinting;
    BOOL viewSource;
    BOOL showControlChars;
    BOOL showAttachments;
    BOOL downloadRemoteURLs;
    BOOL triedToDownloadRemoteURLs;
    BOOL messageIsFromMicrosoft;
    BOOL isChildRequestForSenders;
    int displayType;
    unsigned int preferredEncoding;
    NSString *sender;
    NSString *senderName;
    NSString *childAddress;
    NSArray *requestedAddressesFromChild;
    id <MessageContentDisplay> displayer;
    id editor;
}

@property(readonly) NSArray *attachments;
@property(retain) NSAttributedString *headerAttributedString;
@property(retain) NSDictionary *addressAttachments;
@property(retain) NSDictionary *plainAddresses;
@property(retain) NSSet *expandedAddressKeys;
@property(retain) NSAttributedString *attachmentsDescription;
@property(retain) NSArray *headerOrder;
@property(readonly) int headerDetailLevel;
@property(retain) id editor;
@property(retain) ActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain) Message *message; // @synthesize message=_message;
@property(retain) id <MessageContentDisplay> displayer; // @synthesize displayer;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"<MessageContentDisplay>",&,N,Vdisplayer

@property(retain) NSArray *requestedAddressesFromChild; // @synthesize requestedAddressesFromChild;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"NSArray",&,N,VrequestedAddressesFromChild

@property(copy) NSString *childAddress; // @synthesize childAddress;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"NSString",C,N,VchildAddress

@property(copy) NSString *senderName; // @synthesize senderName;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"NSString",C,N,VsenderName

@property(copy) NSString *sender; // @synthesize sender;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"NSString",C,N,Vsender

@property unsigned int preferredEncoding; // @synthesize preferredEncoding;
// Preceeding property had unknown attributes: N
// Original attribute string: TI,N,VpreferredEncoding

@property int displayType; // @synthesize displayType;
// Preceeding property had unknown attributes: N
// Original attribute string: Ti,N,VdisplayType

@property BOOL isChildRequestForSenders; // @synthesize isChildRequestForSenders;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VisChildRequestForSenders

@property BOOL messageIsFromMicrosoft; // @synthesize messageIsFromMicrosoft;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VmessageIsFromMicrosoft

@property BOOL triedToDownloadRemoteURLs; // @synthesize triedToDownloadRemoteURLs;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VtriedToDownloadRemoteURLs

@property BOOL downloadRemoteURLs; // @synthesize downloadRemoteURLs;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VdownloadRemoteURLs

@property BOOL showAttachments; // @synthesize showAttachments;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VshowAttachments

@property BOOL showControlChars; // @synthesize showControlChars;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VshowControlChars

@property BOOL viewSource; // @synthesize viewSource;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VviewSource

@property BOOL isPrinting; // @synthesize isPrinting;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VisPrinting

@property BOOL showDefaultHeaders; // @synthesize showDefaultHeaders;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VshowDefaultHeaders

@property BOOL showAllHeaders; // @synthesize showAllHeaders;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VshowAllHeaders

@property BOOL dontCache; // @synthesize dontCache;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VdontCache

@property BOOL accountWasOffline; // @synthesize accountWasOffline;
// Preceeding property had unknown attributes: N
// Original attribute string: Tc,N,VaccountWasOffline

@property int preferredAlternative; // @synthesize preferredAlternative;
// Preceeding property had unknown attributes: N
// Original attribute string: Ti,N,VpreferredAlternative

@property long long headerFontAdjustmentDebt; // @synthesize headerFontAdjustmentDebt;
// Preceeding property had unknown attributes: N
// Original attribute string: Tq,N,VheaderFontAdjustmentDebt

@property long long headerIndent; // @synthesize headerIndent;
// Preceeding property had unknown attributes: N
// Original attribute string: Tq,N,VheaderIndent

@property(retain) MFError *error; // @synthesize error;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"MFError",&,N,Verror

@property(retain) id document; // @synthesize document;
// Preceeding property had unknown attributes: N
// Original attribute string: T@,&,N,Vdocument

@property(retain) MimeBody *mimeBody; // @synthesize mimeBody;
// Preceeding property had unknown attributes: N
// Original attribute string: T@"MimeBody",&,N,VmimeBody


+ (void)initialize;
- (void)release;
- (void)dealloc;
- (id)init;
- (id)editor;
- (void)setEditor:(id)arg1;
- (void)editorClosed:(id)arg1;
- (id)mimeBody;
- (id)attachments;
- (id)headerAttributedString;
- (void)setHeaderAttributedString:(id)arg1;
- (id)plainAddresses;
- (void)setPlainAddresses:(id)arg1;
- (id)addressAttachments;
- (void)setAddressAttachments:(id)arg1;
- (id)expandedAddressKeys;
- (void)setExpandedAddressKeys:(id)arg1;
- (id)attachmentsDescription;
- (void)setAttachmentsDescription:(id)arg1;
- (id)headerOrder;
- (void)setHeaderOrder:(id)arg1;
- (int)headerDetailLevel;
- (id)description;
- (id)monitor;
- (void)setMonitor:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)displayer;
- (void)setDisplayer:(id)arg1;
- (id)requestedAddressesFromChild;
- (void)setRequestedAddressesFromChild:(id)arg1;
- (id)childAddress;
- (void)setChildAddress:(id)arg1;
- (id)senderName;
- (void)setSenderName:(id)arg1;
- (id)sender;
- (void)setSender:(id)arg1;
- (unsigned int)preferredEncoding;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (BOOL)isChildRequestForSenders;
- (void)setIsChildRequestForSenders:(BOOL)arg1;
- (BOOL)messageIsFromMicrosoft;
- (void)setMessageIsFromMicrosoft:(BOOL)arg1;
- (BOOL)triedToDownloadRemoteURLs;
- (void)setTriedToDownloadRemoteURLs:(BOOL)arg1;
- (BOOL)downloadRemoteURLs;
- (void)setDownloadRemoteURLs:(BOOL)arg1;
- (BOOL)showAttachments;
- (void)setShowAttachments:(BOOL)arg1;
- (BOOL)showControlChars;
- (void)setShowControlChars:(BOOL)arg1;
- (BOOL)viewSource;
- (void)setViewSource:(BOOL)arg1;
- (BOOL)isPrinting;
- (void)setIsPrinting:(BOOL)arg1;
- (BOOL)showDefaultHeaders;
- (void)setShowDefaultHeaders:(BOOL)arg1;
- (BOOL)showAllHeaders;
- (void)setShowAllHeaders:(BOOL)arg1;
- (BOOL)dontCache;
- (void)setDontCache:(BOOL)arg1;
- (BOOL)accountWasOffline;
- (void)setAccountWasOffline:(BOOL)arg1;
- (int)preferredAlternative;
- (void)setPreferredAlternative:(int)arg1;
- (long long)headerFontAdjustmentDebt;
- (void)setHeaderFontAdjustmentDebt:(long long)arg1;
- (long long)headerIndent;
- (void)setHeaderIndent:(long long)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)document;
- (void)setDocument:(id)arg1;
- (void)setMimeBody:(id)arg1;

@end

