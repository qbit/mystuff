# $OpenBSD: Makefile,v 1.52 2016/09/10 13:03:41 ajacoutot Exp $

# XXX:
# - Needs __ARM_NR_cacheflush (or the like) to work on arm-based ports.
# - Needs bundled libcares as arpa/nameser.h does not include ns_t_a.

NODE_VERSION=	v8.9.4
VERSION=	8.x
PLEDGE_VER=	1.1.0
PORTROACH =	limit:^8\.9

LIB_DEPENDS=    devel/libexecinfo

CONFIGURE_ARGS +=	--prefix=${PREFIX}/node/8.x

WANTLIB += c execinfo kvm m pthread z ${COMPILER_LIBCXX}

.include <bsd.port.mk>
