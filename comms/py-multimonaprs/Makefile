# $OpenBSD: Makefile,v 1.9 2013/04/27 16:02:59 kili Exp $

COMMENT =		APRS-IS Gateway

GH_ACCOUNT =		asdil12
GH_PROJECT =		pymultimonaprs
GH_TAGNAME =		1.0.1

REVISION =		0

DISTNAME =		pymultimonaprs-${GH_TAGNAME}
PKGNAME =		${DISTNAME:S/^py/py-/}
CATEGORIES =		comms

HOMEPAGE =		http://asdil12.github.io/pymultimonaprs/

# GPLv3
PERMIT_PACKAGE_CDROM=	Yes

MODULES=		lang/python

BUILD_DEPENDS=		${RUN_DEPENDS}
RUN_DEPENDS=		comms/rtl-sdr

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/examples/py-multimonaprs
	${INSTALL_DATA} ${WRKSRC}/pymultimonaprs.json \
		${PREFIX}/share/examples/py-multimonaprs

.include <bsd.port.mk>
