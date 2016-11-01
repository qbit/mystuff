# $OpenBSD: Makefile,v 1.52 2016/09/10 13:03:41 ajacoutot Exp $

# XXX:
# - Needs __ARM_NR_cacheflush (or the like) to work on arm-based ports.
# - Needs bundled libcares as arpa/nameser.h does not include ns_t_a.

NODE_VERSION=	v7.0.0
PLEDGE_VER=	1.1.0
PORTROACH =	limit:^7\.0

CONFIGURE_ARGS +=	--prefix=${PREFIX}/node/7.x

.include <bsd.port.mk>
