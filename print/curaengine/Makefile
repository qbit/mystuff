# $OpenBSD: Makefile.template,v 1.71 2014/07/10 12:33:17 sthen Exp $

COMMENT =		console application for gcode generation

VERSION =		15.04.6
DISTNAME =		CuraEngine-${VERSION}

CATEGORIES =		print

HOMEPAGE =		https://github.com/Ultimaker/CuraEngine

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# AGPLv3
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c m

GH_ACCOUNT =		Ultimaker
GH_PROJECT =		CuraEngine
GH_TAGNAME =		${VERSION}

USE_GMAKE =		Yes

MODULES +=		gcc4
MODGCC4_LANGS =	c++

MAKE_ENV =		CXX=eg++ \
			VERSION=${VERSION}

do-install:
	${INSTALL_PROGRAM} ${WRKBUILD}/build/CuraEngine ${PREFIX}/bin

.include <bsd.port.mk>
