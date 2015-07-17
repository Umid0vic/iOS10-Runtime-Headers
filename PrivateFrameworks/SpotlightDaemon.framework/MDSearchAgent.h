/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface MDSearchAgent : MDAgent <MDSearchQueryService> {
    NSString * _clientBundleID;
    BOOL  _finishedQuery;
    BOOL  _isInternal;
    SPCoreSpotlightTask * _queryTask;
    NSObject<MDSearchQueryResultProcessor> * _resultProcessor;
    NSObject<MDIndexer> * _searchIndex;
}

@property (retain) NSString *clientBundleID;
@property BOOL finishedQuery;
@property BOOL isInternal;
@property (retain) NSObject<MDSearchQueryResultProcessor> *resultProcessor;
@property (retain) NSObject<MDIndexer> *searchIndex;

+ (id)clientXPCInterface;
+ (id)machServiceName;
+ (id)xpcInterface;

- (void).cxx_destruct;
- (void)_badQueryWithCompletionHandler:(id /* block */)arg1;
- (void)_pullEntitlementsOffConnection:(id)arg1;
- (void)cancelWithCompletionHandler:(id /* block */)arg1;
- (id)clientBundleID;
- (BOOL)finishedQuery;
- (id)initWithClientConnection:(id)arg1 clientLink:(id)arg2 indexer:(id)arg3;
- (BOOL)isInternal;
- (id)resultProcessor;
- (id)searchIndex;
- (void)setClientBundleID:(id)arg1;
- (void)setFinishedQuery:(BOOL)arg1;
- (void)setIsInternal:(BOOL)arg1;
- (void)setResultProcessor:(id)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)startQueryForQueryString:(id)arg1 options:(id)arg2 resultProcessor:(id)arg3 limitToBundleID:(id)arg4 completionHandler:(id /* block */)arg5;

@end