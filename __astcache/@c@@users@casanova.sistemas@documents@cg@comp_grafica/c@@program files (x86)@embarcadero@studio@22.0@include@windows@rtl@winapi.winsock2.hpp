// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.Winsock2.pas' rev: 35.00 (Windows)

#ifndef Winapi_Winsock2HPP
#define Winapi_Winsock2HPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Qos.hpp>

//-- user supplied -----------------------------------------------------------

#include "winsock2.h"


namespace Winapi
{
namespace Winsock2
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef NativeUInt TSocket;

typedef fd_set TFdSet;

typedef fd_set *PFdSet;

typedef timeval TTimeVal;

typedef timeval *PTimeVal;

typedef char * *MarshaledAStringList;

typedef hostent THostEnt;

typedef hostent *PHostEnt;

typedef netent TNetEnt;

typedef netent *PNetEnt;

typedef servent TServEnt;

typedef servent *PServEnt;

typedef protoent TProtoEnt;

typedef protoent *PProtoEnt;

typedef in_addr TInAddr;

typedef in_addr *PInAddr;

typedef sockaddr_in TSockAddrIn;

typedef sockaddr_in *PSockAddrIn;

typedef WSAData TWsaData;

typedef LPWSADATA PWsaData;

typedef sockaddr TSockAddr;

typedef sockaddr *PSockAddr;

typedef sockaddr_storage TSockAddrStorage;

typedef sockaddr_storage *PSockAddrStorage;

typedef sockaddr_storage_xp TSockAddrStorageXP;

typedef sockaddr_storage_xp *PSockAddrStorageXP;

typedef sockproto TSockProto;

typedef sockproto *PSockProto;

typedef linger TLinger;

typedef linger *PLinger;

typedef NativeUInt TWsaEvent;

typedef Winapi::Windows::PHandle PWsaEvent;

typedef _OVERLAPPED TWsaOverlapped;

typedef LPWSAOVERLAPPED PWsaOverlapped;

typedef _WSABUF TWsaBuf;

typedef LPWSABUF PWsaBuf;

typedef _QualityOfService TQOS;

typedef LPQOS PQOS;

typedef unsigned TGroup;

typedef unsigned *PGroup;

typedef _WSANETWORKEVENTS TWsaNetworkEvents;

typedef LPWSANETWORKEVENTS PWsaNetworkEvents;

typedef _WSAPROTOCOLCHAIN TWsaProtocolChain;

typedef LPWSAPROTOCOLCHAIN PWsaProtocolChain;

typedef _WSAPROTOCOL_INFOA TWsaProtocolInfoA;

typedef LPWSAPROTOCOL_INFOA PWsaProtocolInfoA;

typedef _WSAPROTOCOL_INFOW TWsaProtocolInfoW;

typedef LPWSAPROTOCOL_INFOW PWsaProtocolInfoW;

typedef _WSAPROTOCOL_INFOW TWsaProtocolInfo;

typedef LPWSAPROTOCOL_INFOW PWsaProtocolInfo;

typedef _WSACOMPLETIONTYPE TWsaCompletionType;

typedef _WSACOMPLETION TWsaCompletion;

typedef LPBLOB PBlob;

typedef _SOCKET_ADDRESS TSocketAddress;

typedef PSOCKET_ADDRESS PSocketAddress;

typedef _CSADDR_INFO TCsAddrInfo;

typedef PCSADDR_INFO PCsAddrInfo;

typedef _SOCKET_ADDRESS_LIST TSocketAddressList;

typedef LPSOCKET_ADDRESS_LIST PSocketAddressList;

typedef _AFPROTOCOLS TAfProtocols;

typedef _WSAVersion TWsaVersion;

typedef _WSAQuerySetA TWsaQuerySetA;

typedef _WSAQuerySetW TWsaQuerySetW;

typedef _WSAQuerySetW TWsaQuerySet;

typedef _WSANSClassInfoA TWsaNsClassInfoA;

typedef _WSANSClassInfoW TWsaNsClassInfoW;

typedef _WSANSClassInfoW TWsaNsClassInfo;

typedef _WSAServiceClassInfoA TWsaServiceClassInfoA;

typedef _WSAServiceClassInfoW TWsaServiceClassInfoW;

typedef _WSAServiceClassInfoW TWsaServiceClassInfo;

typedef _WSANAMESPACE_INFOA TWsaNameSpaceInfoA;

typedef LPWSANAMESPACE_INFOA PWsaNameSpaceInfoA;

typedef _WSANAMESPACE_INFOW TWsaNameSpaceInfoW;

typedef PWSANAMESPACE_INFOW PWsaNameSpaceInfoW;

typedef _WSANAMESPACE_INFOW TWsaNameSpaceInfo;

typedef PWSANAMESPACE_INFOW PWsaNameSpaceInfo;

typedef _WSANAMESPACE_INFOEXA WSANAMESPACE_INFOEXA;

typedef _WSANAMESPACE_INFOEXA TWsaNameSpaceInfoEXA;

typedef LPWSANAMESPACE_INFOEXA PWsaNameSpaceInfoEXA;

typedef _WSANAMESPACE_INFOEXW TWsaNameSpaceInfoEXW;

typedef PWSANAMESPACE_INFOEXW PWsaNameSpaceInfoEXW;

typedef _WSANAMESPACE_INFOEXW TWsaNameSpaceInfoEX;

typedef PWSANAMESPACE_INFOEXW PWsaNameSpaceInfoEX;

typedef WSAMSG TWSAMsg;

typedef WSAMSG *PWSAMsg;

typedef WSACMSGHDR TWSACMsgHdr;

typedef WSACMSGHDR *PWSACMsgHdr;

typedef WSAPOLLFD TWSAPollFd;

typedef WSAPOLLFD *PWSAPollFD;

typedef addrinfo *Paddrinfo;

typedef addrinfo TAddrInfoA;

typedef addrinfoW *PaddrinfoW;

typedef addrinfoW TAddrInfoW;

typedef addrinfo TAddrInfo;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall _FD_SET(NativeUInt fd, fd_set &fdset);
}	/* namespace Winsock2 */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_WINSOCK2)
using namespace Winapi::Winsock2;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_Winsock2HPP
