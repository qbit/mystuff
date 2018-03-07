# $OpenBSD: Makefile,v 1.2 2016/07/14 16:57:55 ajacoutot Exp $

COMMENT =	otp extension for password-store

V =		1.1.0
DISTNAME =	pass-otp-${V}

CATEGORIES =	security

HOMEPAGE =	https://github.com/tadfisher/pass-otp

MAINTAINER =	Aaron Bieber <abieber@openbsd.org>

# GPLv2+
PERMIT_PACKAGE_CDROM =	Yes

MASTER_SITES =	https://github.com/tadfisher/pass-otp/releases/download/v${V}/

RUN_DEPENDS =	security/password-store \
		security/oath-toolkit \
		graphics/libqrencode

TEST_DEPENDS =	${RUN_DEPENDS}

MAKE_FLAGS =	SHELL=${LOCALBASE}/bin/bash
FAKE_FLAGS =	PREFIX=${PREFIX} \
		MANDIR=${PREFIX}/man

USE_GMAKE =	Yes

NO_BUILD =	Yes

.include <bsd.port.mk>
