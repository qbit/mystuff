# $OpenBSD: Makefile,v 1.52 2016/09/10 13:03:41 ajacoutot Exp $

# XXX:
# - Needs __ARM_NR_cacheflush (or the like) to work on arm-based ports.
# - Needs bundled libcares as arpa/nameser.h does not include ns_t_a.

NODE_VERSION=	v4.6.1
PLEDGE_VER=	1.1.0
PORTROACH =	limit:^4\.6

LIB_DEPENDS+=	security/openssl

CONFIGURE_ARGS= --shared-openssl \
                --shared-openssl-includes=${LOCALBASE}/include/eopenssl \
                --shared-openssl-libpath=${LOCALBASE}/lib/eopenssl \
		--prefix=${PREFIX}/node/4.x \
		--shared-zlib


.include <bsd.port.mk>
