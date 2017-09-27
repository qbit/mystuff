# $OpenBSD: Makefile,v 1.2 2016/07/14 16:57:55 ajacoutot Exp $

COMMENT =	otp extension for password-store

GH_ACCOUNT =	tadfisher
GH_PROJECT =	pass-otp
GH_TAGNAME =	v1.0.0

CATEGORIES =	security

HOMEPAGE =	https://github.com/tadfisher/pass-otp

# GPLv2+
PERMIT_PACKAGE_CDROM =	Yes

RUN_DEPENDS =	security/password-store \
		security/oath-toolkit \
		graphics/libqrencode

TEST_DEPENDS =	${RUN_DEPENDS}

USE_GMAKE =	Yes
FAKE_FLAGS =	PREFIX=${PREFIX} MANDIR=${PREFIX}/man

NO_BUILD =	Yes

.include <bsd.port.mk>
