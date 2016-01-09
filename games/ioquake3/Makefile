# $OpenBSD: Makefile,v 1.25 2013/03/21 08:45:17 ajacoutot Exp $

ONLY_FOR_ARCHS= 	amd64 i386
SHARED_ONLY=		Yes

COMMENT=		first person shooter

GH_ACCOUNT=		ioquake
GH_PROJECT=		ioq3
GH_COMMIT=		42dee17663cfc841fe6d0933f5c1dc10463e2dbd

DISTNAME=		ioquake3-2016.01.09
CATEGORIES=		games

HOMEPAGE=		http://ioquake3.org/
MAINTAINER=		Aaron Bieber <abieber@openbsd.org>

# GPL
PERMIT_PACKAGE_CDROM=	Yes

LIB_DEPENDS=		devel/sdl2 \
			net/curl

USE_GMAKE=		Yes
NO_TEST=		Yes

MAKE_ENV=		"V=1"

CFLAGS+=                -pthread -g

WANTLIB += GL SDL2 c curl m pthread

do-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/ioquake3/
	cp -rp ${WRKSRC}/build/release-openbsd-x86_64/* ${PREFIX}/share/ioquake3/
	${INSTALL_PROGRAM} ${WRKSRC}/build/release-openbsd-x86_64/ioq3ded.x86_64 \
		${PREFIX}/bin/ioq3ded
	${INSTALL_PROGRAM} ${WRKSRC}/build/release-openbsd-x86_64/ioquake3.x86_64 \
		${PREFIX}/bin/ioquake3

.include <bsd.port.mk>
