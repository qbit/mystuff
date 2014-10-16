# $OpenBSD: Makefile,v 1.8 2014/04/28 20:52:13 edd Exp $

COMMENT =		sockjs python server implementation for tornado

MODPY_EGG_VERSION =	1.0.1
DISTNAME =		sockjs-tornado-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		www

HOMEPAGE =		https://github.com/MrJoes/sockjs-tornado/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=s/sockjs-tornado/}

MODULES =		lang/python

RUN_DEPENDS +=		www/py-tornado

MODPY_SETUPTOOLS =	Yes

.include <bsd.port.mk>
