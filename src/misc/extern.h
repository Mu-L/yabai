#define CONNECTION_CALLBACK(name) void name(uint32_t type, void *data, size_t data_length, void *context, int cid)
typedef CONNECTION_CALLBACK(connection_callback);

static mach_port_t (* CGSGetConnectionPortById)(int);
extern mach_port_t mig_get_special_reply_port(void);
extern AXUIElementRef _AXUIElementCreateWithRemoteToken(CFDataRef data);
extern AXError _AXUIElementGetWindow(AXUIElementRef ref, uint32_t *wid);
extern int SLSMainConnectionID(void);
extern CGError SLSNewConnection(int zero, int *cid);
extern CGError SLSReleaseConnection(int cid);
extern CGError SLSRegisterConnectionNotifyProc(int cid, connection_callback *handler, uint32_t event, void *context);
extern CGError SLSGetWindowBounds(int cid, uint32_t wid, CGRect *frame);
extern CGError SLSGetWindowLevel(int cid, uint32_t wid, int *level);
extern int SLSGetWindowSubLevel(int cid, uint32_t wid);
extern CGError SLSGetWindowAlpha(int cid, uint32_t wid, float *alpha);
extern CGError SLSSetWindowAlpha(int cid, uint32_t wid, float alpha);
extern CGError SLSSetWindowResolution(int cid, uint32_t wid, double resolution);
extern CGError SLSCopyWindowProperty(int cid, uint32_t wid, CFStringRef property, CFTypeRef *value);
extern CFStringRef SLSCopyManagedDisplayForWindow(int cid, uint32_t wid);
extern CFStringRef SLSCopyBestManagedDisplayForRect(int cid, CGRect rect);
extern CFArrayRef SLSCopySpacesForWindows(int cid, int selector, CFArrayRef window_list);
extern CGError SLSDisableUpdate(int cid);
extern CGError SLSReenableUpdate(int cid);
extern CGError SLSNewWindow(int cid, int type, float x, float y, CFTypeRef region, uint32_t *wid);
extern CGError SLSNewWindowWithOpaqueShapeAndContext(int cid, int type, CFTypeRef region, CFTypeRef opaque_shape, int options, uint64_t *tags, float x, float y, int tag_size, uint32_t *wid, void *context);
extern CGError SLSReleaseWindow(int cid, uint32_t wid);
extern CGError SLSSetWindowTags(int cid, uint32_t wid, uint64_t *tags, int tag_size);
extern CGError SLSClearWindowTags(int cid, uint32_t wid, uint64_t *tags, int tag_size);
extern CGError SLSSetWindowShape(int cid, uint32_t wid, float x_offset, float y_offset, CFTypeRef shape);
extern CGError SLSSetWindowOpacity(int cid, uint32_t wid, bool opaque);
extern CGError SLSSetWindowBackgroundBlurRadiusStyle(int cid, uint32_t wid, int radius, int style);
extern CGError SLSOrderWindow(int cid, uint32_t wid, int mode, uint32_t rel_wid);
extern CGError SLSWindowIsOrderedIn(int cid, uint32_t wid, uint8_t *value);
extern CGError SLSSetWindowLevel(int cid, uint32_t wid, int level);
extern CGError SLSSetWindowSubLevel(int cid, uint32_t wid, int sub_level);
extern CGContextRef SLWindowContextCreate(int cid, uint32_t wid, CFDictionaryRef options);
extern CFTypeRef CGRegionCreateEmptyRegion(void);
extern CGError CGSNewRegionWithRect(CGRect *rect, CFTypeRef *region);
extern CFUUIDRef CGDisplayCreateUUIDFromDisplayID(uint32_t did);
extern CFArrayRef SLSCopyManagedDisplays(int cid);
extern uint64_t SLSManagedDisplayGetCurrentSpace(int cid, CFStringRef uuid);
extern CFStringRef SLSCopyActiveMenuBarDisplayIdentifier(int cid);
extern CFStringRef SLSCopyBestManagedDisplayForPoint(int cid, CGPoint point);
extern bool SLSManagedDisplayIsAnimating(int cid, CFStringRef uuid);
extern CGError SLSSetMenuBarInsetAndAlpha(int cid, double unused1, double unused2, float alpha);
extern CGError SLSGetMenuBarAutohideEnabled(int cid, int *enabled);
extern CGError SLSGetRevealedMenuBarBounds(CGRect *rect, int cid, uint64_t sid);
extern CGError SLSGetDisplayMenubarHeight(uint32_t did, uint32_t *height);
extern CGError SLSGetDockRectWithReason(int cid, CGRect *rect, int *reason);
extern Boolean CoreDockGetAutoHideEnabled(void);
extern void CoreDockGetOrientationAndPinning(int *orientation, int *pinning);
extern CFStringRef SLSCopyManagedDisplayForSpace(int cid, uint64_t sid);
extern int SLSSpaceGetType(int cid, uint64_t sid);
extern CFStringRef SLSSpaceCopyName(int cid, uint64_t sid);
extern CFArrayRef SLSCopyWindowsWithOptionsAndTags(int cid, uint32_t owner, CFArrayRef spaces, uint32_t options, uint64_t *set_tags, uint64_t *clear_tags);
extern int SLSGetSpaceManagementMode(int cid);
extern CFArrayRef SLSCopyManagedDisplaySpaces(int cid);
extern CGError SLSProcessAssignToSpace(int cid, pid_t pid, uint64_t sid);
extern CGError SLSProcessAssignToAllSpaces(int cid, pid_t pid);
extern void SLSMoveWindowsToManagedSpace(int cid, CFArrayRef window_list, uint64_t sid);
extern CGError CoreDockSendNotification(CFStringRef notification, int unknown);
extern CGError SLSMoveWindow(int cid, uint32_t wid, CGPoint *point);
extern CFArrayRef SLSCopyAssociatedWindows(int cid, uint32_t wid);
extern CFTypeRef SLSWindowQueryWindows(int cid, CFArrayRef windows, int count);
extern CFTypeRef SLSWindowQueryResultCopyWindows(CFTypeRef window_query);
extern int SLSWindowIteratorGetCount(CFTypeRef iterator);
extern bool SLSWindowIteratorAdvance(CFTypeRef iterator);
extern uint32_t SLSWindowIteratorGetParentID(CFTypeRef iterator);
extern uint32_t SLSWindowIteratorGetWindowID(CFTypeRef iterator);
extern uint64_t SLSWindowIteratorGetTags(CFTypeRef iterator);
extern uint64_t SLSWindowIteratorGetAttributes(CFTypeRef iterator);
extern int SLSWindowIteratorGetLevel(CFTypeRef iterator, int32_t index);
extern OSStatus _SLPSGetFrontProcess(ProcessSerialNumber *psn);
extern CGError SLSGetWindowOwner(int cid, uint32_t wid, int *wcid);
extern CGError SLSGetConnectionPSN(int cid, ProcessSerialNumber *psn);
extern CGError SLSConnectionGetPID(int cid, pid_t *pid);
extern CGError SLSGetConnectionIDForPSN(int cid, ProcessSerialNumber *psn, int *psn_cid);
extern CGError _SLPSSetFrontProcessWithOptions(ProcessSerialNumber *psn, uint32_t wid, uint32_t mode);
extern CGError SLPSPostEventRecordTo(ProcessSerialNumber *psn, uint8_t *bytes);
extern OSStatus SLSFindWindowAndOwner(int cid, int zero, int one, int zero_again, CGPoint *screen_point, CGPoint *window_point, uint32_t *wid, int *wcid);
extern CGError SLSGetCurrentCursorLocation(int cid, CGPoint *point);
extern CGError SLSWindowSetShadowProperties(uint32_t wid, CFDictionaryRef options);
extern CGError SLSRequestNotificationsForWindows(int cid, uint32_t *window_list, int window_count);
extern CGError SLSSetWindowTransform(int cid, uint32_t wid, CGAffineTransform t);
extern CFTypeRef SLSTransactionCreate(int cid);
extern CGError SLSTransactionCommit(CFTypeRef transaction, int synchronous);
extern CGError SLSTransactionSetWindowTransform(CFTypeRef transaction, uint32_t wid, int unknown, int unknown2, CGAffineTransform t);
extern CGError SLSTransactionOrderWindow(CFTypeRef transaction, uint32_t wid, int order, uint32_t rel_wid);
extern CGError SLSTransactionOrderWindowGroup(CFTypeRef transaction, uint32_t wid, int order, uint32_t rel_wid);
extern CGError SLSTransactionSetWindowAlpha(CFTypeRef transaction, uint32_t wid, float alpha);
extern CGError SLSTransactionSetWindowSystemAlpha(CFTypeRef transaction, uint32_t wid, float alpha);
extern CFArrayRef SLSHWCaptureWindowList(int cid, uint32_t *window_list, int window_count, uint32_t options);
extern CGError SLSSpaceSetCompatID(int cid, uint64_t sid, int workspace);
extern CGError SLSSetWindowListWorkspace(int cid, uint32_t *window_list, int window_count, int workspace);
