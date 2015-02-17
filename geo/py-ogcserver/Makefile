# $OpenBSD: Makefile,v 1.1.1.1 2014/11/01 20:46:24 abieber Exp $

COMMENT =		mapnik based wms implementation

GH_ACCOUNT =		mapnik
GH_PROJECT =		OGCServer
GH_COMMIT =		4e56689164887b6e4352e90c2d961815af6b9002

DISTNAME =		OGCServer-2015.02.17
PKGNAME =		py-${DISTNAME}

CATEGORIES =		geo

HOMEPAGE =		https://github.com/mapnik/OGCServer

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

RUN_DEPENDS =		graphics/mapnik \
			graphics/py-Pillow \
			www/py-paste-script \
			www/py-webob

MODULES =		lang/python

MODPY_SETUPTOOLS =	Yes

NO_TEST =		Yes

.include <bsd.port.mk>
