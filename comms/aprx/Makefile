# $OpenBSD: Makefile,v 1.9 2013/04/27 16:02:59 kili Exp $

COMMENT=	multitalented APRS / DPRS / APRSIS "i-gate"

GH_ACCOUNT =	PhirePhly
GH_PROJECT =	aprx
GH_COMMIT =	820690e88726fa6320f5d1b8f7a274ded4c49776

DISTNAME=	aprx-2.08
CATEGORIES=	comms

HOMEPAGE=	https://github.com/PhirePhly/aprx

# ISC
PERMIT_PACKAGE_CDROM=	Yes

CONFIGURE_STYLE=	gnu

CONFIGURE_ARGS=		--bindir=${LOCALBASE}/bin \
			--sbindir=${LOCALBASE}/sbin \
			--datarootdir=${LOCALBASE}/share/aprx

USE_GMAKE=		Yes

CFLAGS+=	-I${X11BASE}/include
LDFLAGS+=	-L${X11BASE}/lib

.include <bsd.port.mk>
