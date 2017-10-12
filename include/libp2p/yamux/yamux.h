#pragma once

#include "libp2p/net/protocol.h"

/**
 * Build a handler that can handle the yamux protocol
 */
struct Libp2pProtocolHandler* yamux_build_protocol_handler();
/***
 * Send the yamux protocol out the default stream
 * NOTE: if we initiate the connection, we should expect the same back
 * @param context the SessionContext
 * @returns true(1) on success, false(0) otherwise
 */
int yamux_send_protocol(struct SessionContext* context);
