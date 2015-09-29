# $OpenBSD: Makefile,v 1.4 2015/09/29 10:52:54 sthen Exp $

COMMENT =		adds i18n and l10n support to any flask app

MODPY_EGG_VERSION =	0.9
DISTNAME =		Flask-Babel-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME:L}

CATEGORIES =		www

HOMEPAGE =		https://pythonhosted.org/Flask-Babel/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# MIT
PERMIT_PACKAGE_CDROM =	Yes

MODPY_PI =		Yes

MODULES =		lang/python

RUN_DEPENDS +=		www/py-flask

MODPY_SETUPTOOLS =	Yes

.include <bsd.port.mk>
