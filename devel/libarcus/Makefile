# $OpenBSD: Makefile.template,v 1.71 2014/07/10 12:33:17 sthen Exp $

COMMENT =		communication library between internal components for Ultimaker software 

VERSION =		15.06.03
DISTNAME =		libArcus-${VERSION}

CATEGORIES =		devel

HOMEPAGE =		https://github.com/Ultimaker/libARcus

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# AGPLv3
PERMIT_PACKAGE_CDROM =	Yes

WANTLIB += c m

GH_ACCOUNT =		Ultimaker
GH_PROJECT =		libArcus
GH_TAGNAME =		${VERSION}

USE_GMAKE =		Yes

MODULES +=		devel/cmake \
			gcc4
MODGCC4_LANGS =	c++

MAKE_ENV =		CXX=eg++ \
			VERSION=${VERSION}

.include <bsd.port.mk>
