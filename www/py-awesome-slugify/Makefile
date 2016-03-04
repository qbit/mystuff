# $OpenBSD: Makefile,v 1.4 2015/09/29 10:52:54 sthen Exp $

COMMENT =		flexible slugify function

MODPY_EGG_VERSION =	1.6.5
DISTNAME =		awesome-slugify-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}

CATEGORIES =		www

HOMEPAGE =		https://github.com/dimka665/awesome-slugify

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

RUN_DEPENDS =		devel/py-regex

MODPY_PI =		Yes

MODULES =		lang/python

MODPY_SETUPTOOLS =	Yes

.include <bsd.port.mk>
