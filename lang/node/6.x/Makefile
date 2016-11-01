# $OpenBSD: Makefile,v 1.52 2016/09/10 13:03:41 ajacoutot Exp $

# XXX:
# - Needs __ARM_NR_cacheflush (or the like) to work on arm-based ports.
# - Needs bundled libcares as arpa/nameser.h does not include ns_t_a.

NODE_VERSION=	v6.9.1
VERSION=	6.x
PLEDGE_VER=	1.1.0
PORTROACH =	limit:^6\.9

LIB_DEPENDS=    devel/libexecinfo

CONFIGURE_ARGS +=	--prefix=${PREFIX}/node/6.x \
			--shared-zlib

WANTLIB += c execinfo kvm m pthread z

.include <bsd.port.mk>
