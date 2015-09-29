# $OpenBSD: Makefile,v 1.9 2013/03/10 22:55:05 espie Exp $

COMMENT =		least recently used cache implementation

MODPY_EGG_VERSION =	1.0.9
DISTNAME =		pylru-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}
CATEGORIES =		devel

HOMEPAGE =		https://github.com/jlhutch/pylru

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# Apache
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =		${MASTER_SITE_PYPI:=p/pylru/}

MODULES =		lang/python

NO_TEST =		Yes

.include <bsd.port.mk>
