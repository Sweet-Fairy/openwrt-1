/*
 ******************************************************************************
 * Copyright (c) 2017, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 * ****************************************************************************
 */

#ifndef __NSS_CAPWAP_STATS_H__
#define __NSS_CAPWAP_STATS_H__

/*
 * CAPWAP encap statistics
 */
enum nss_capwap_stats_encap_types {
	NSS_CAPWAP_STATS_ENCAP_TX_PKTS,
	NSS_CAPWAP_STATS_ENCAP_TX_BYTES,
	NSS_CAPWAP_STATS_ENCAP_TX_SEGMENTS,
	NSS_CAPWAP_STATS_ENCAP_TX_DROP_SG_REF,
	NSS_CAPWAP_STATS_ENCAP_TX_DROP_VER_MISMATCH,
	NSS_CAPWAP_STATS_ENCAP_TX_DROP_UNALIGN,
	NSS_CAPWAP_STATS_ENCAP_TX_DROP_HEADER_ROOM,
	NSS_CAPWAP_STATS_ENCAP_TX_DROP_DTLS,
	NSS_CAPWAP_STATS_ENCAP_TX_DROP_NWIRELESS,
	NSS_CAPWAP_STATS_ENCAP_TX_DROP_QUEUE_FULL,
	NSS_CAPWAP_STATS_ENCAP_TX_DROP_MEM_FAIL,
	NSS_CAPWAP_STATS_ENCAP_MAX
};

/*
 * CAPWAP decap statistics
 */
enum nss_capwap_stats_decap_types {
	NSS_CAPWAP_STATS_DECAP_RX_PKTS,
	NSS_CAPWAP_STATS_DECAP_RX_BYTES,
	NSS_CAPWAP_STATS_DECAP_RX_DTLS_PKTS,
	NSS_CAPWAP_STATS_DECAP_RX_SEGMENTS,
	NSS_CAPWAP_STATS_DECAP_RX_DROP,
	NSS_CAPWAP_STATS_DECAP_RX_DROP_OVERSIZE,
	NSS_CAPWAP_STATS_DECAP_RX_DROP_FRAG_TIMEOUT,
	NSS_CAPWAP_STATS_DECAP_RX_DROP_DUP_FRAG,
	NSS_CAPWAP_STATS_DECAP_RX_DROP_FRAG_GAP,
	NSS_CAPWAP_STATS_DECAP_RX_DROP_QUEUE_FULL,
	NSS_CAPWAP_STATS_DECAP_RX_DROP_MEM_FAIL,
	NSS_CAPWAP_STATS_DECAP_RX_DROP_CHECKSUM,
	NSS_CAPWAP_STATS_DECAP_RX_MALFORMED,
	NSS_CAPWAP_STATS_DECAP_MAX
};

/*
 * CAPWAP statistics APIs
 */
extern void nss_capwap_stats_dentry_create(void);

#endif /* __NSS_CAPWAP_STATS_H__ */