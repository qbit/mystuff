# $OpenBSD: Makefile,v 1.4 2015/09/29 10:52:54 sthen Exp $

COMMENT =		integrate webassets into your flask application

MODPY_EGG_VERSION =	0.11
DISTNAME =		Flask-Assets-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME:L}

CATEGORIES =		www

HOMEPAGE =		http://flask-assets.readthedocs.org/en/latest/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MODPY_PI =		Yes

MODULES =		lang/python

RUN_DEPENDS +=		www/py-flask \
			www/py-webassets

MODPY_SETUPTOOLS =	Yes

.include <bsd.port.mk>
