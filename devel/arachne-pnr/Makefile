# $OpenBSD: Makefile,v 1.2 2015/05/28 19:59:29 ajacoutot Exp $

DISTNAME =		arachne-pnr-0.0.1

COMMENT =		place and route tool for fpgas
CATEGORIES =		devel

HOMEPAGE =		https://github.com/cseed/arachne-pnr

GH_COMMIT =		a94ed399b263fc98f4fe8a6b39eff8915df5f4ef
GH_ACCOUNT =		cseed
GH_PROJECT =		arachne-pnr

# GPLv2
PERMIT_PACKAGE_CDROM =	Yes

USE_GMAKE =		Yes

MAKE_ENV =		CXX="eg++" \
			DESTDIR=${DESTDIR} \
			LDFLAGS+=${LDFLAGS}

MODULES =		gcc4

CONFIGURE_STYLE =	none

MODGCC4_ARCHS =		*
MODGCC4_LANGS =		c c++

.include <bsd.port.mk>
