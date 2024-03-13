// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Winapi.IpExport.pas' rev: 35.00 (Windows)

#ifndef Winapi_IpexportHPP
#define Winapi_IpexportHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

#include "ipexport.h"


namespace Winapi
{
namespace Ipexport
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef IN6_ADDR TIn6Addr;

typedef IN6_ADDR *PIn6Addr;

typedef IN6_ADDR TInAddr6;

typedef IN6_ADDR *PInAddr6;

typedef IN6_ADDR TIPv6Addr;

typedef IN6_ADDR *PIPv6Addr;

typedef IP_OPTION_INFORMATION TIpOptionInformation;

typedef PIP_OPTION_INFORMATION PIpOptionInformation;

typedef ICMP_ECHO_REPLY TIcmpEchoReply;

typedef PICMP_ECHO_REPLY PIcmpEchoReply;

typedef ARP_SEND_REPLY TArpSendReply;

typedef PARP_SEND_REPLY PArpSendReply;

typedef TCP_RESERVE_PORT_RANGE TTcpReservePortRange;

typedef PTCP_RESERVE_PORT_RANGE PTcpReservePortRange;

typedef _IP_ADAPTER_INDEX_MAP TIpAdapterIndexMap;

typedef PIP_ADAPTER_INDEX_MAP PIpAdapterIndexMap;

typedef _IP_INTERFACE_INFO TIpInterfaceInfo;

typedef PIP_INTERFACE_INFO PIpInterfaceInfo;

typedef _IP_UNIDIRECTIONAL_ADAPTER_ADDRESS TIpUnidirectionalAdapterAddress;

typedef PIP_UNIDIRECTIONAL_ADAPTER_ADDRESS PIpUnidirectionalAdapterAddress;

typedef _IP_ADAPTER_ORDER_MAP TIpAdapterOrderMap;

typedef PIP_ADAPTER_ORDER_MAP PIpAdapterOrderMap;

typedef _IP_MCAST_COUNTER_INFO TIpMCastCounterInfo;

typedef PIP_MCAST_COUNTER_INFO PIpMCastCounterInfo;

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ipexport */
}	/* namespace Winapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI_IPEXPORT)
using namespace Winapi::Ipexport;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_WINAPI)
using namespace Winapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Winapi_IpexportHPP
