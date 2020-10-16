// Copyright (c) 2020, NLnet Labs. All rights reserved.
// See LICENSE for the details

#ifndef _NSD_XDP_SERVER_
#define _NSD_XDP_SERVER_

typedef struct xdp_server_options {
	char const* _interface_name;
	int _queue_count;
	int _promiscious_mode;
} xdp_server_options_type;

typedef struct xdp_server {
	xdp_server_options_type _options;
	region_type* _region;
} xdp_server_type;

int xdp_server_init( xdp_server_type* xdp );
int xdp_server_deinit( xdp_server_type* xdp );

#endif
