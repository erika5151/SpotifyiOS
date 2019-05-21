#ifndef _SPOTIFYIOS_
#define _SPOTIFYIOS_

#import "SpotifyAppRemote.h"
#import "SPTLogin.h"

#endif /* _SPOTIFYIOS_ */

/*!
 
 [SPTConfiguration configurationWithClientID:@"2AEBA91A38DF2821FA01C0AA70DDDA5E" redirectURL:[NSURL URLWithString:@"28CFAD79363C0F7FE981402BA40DD4AE"]];
 
 [SPTConfiguration alloc].tokenSwapURL = [NSURL URLWithString: @"http://localhost:1234/swap"];
 
 [SPTConfiguration alloc].tokenRefreshURL = [NSURL URLWithString: @"http://localhost:1234/refresh"];
 
 [SPTAppRemote checkIfSpotifyAppIsActive:^(BOOL active) { }];
 `
 [SPTAppRemote appRemoteVersion];
 
 [SPTAppRemote spotifyItunesItemIdentifier];
 
 [[SPTAppRemote alloc] connect];
 
 [[SPTAppRemote alloc] disconnect];
 
 !*/
