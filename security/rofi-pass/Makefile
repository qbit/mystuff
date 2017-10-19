# $OpenBSD: Makefile,v 1.2 2016/07/14 16:57:55 ajacoutot Exp $

COMMENT =	rofi frontend for password-store

GH_ACCOUNT =	carnager
GH_PROJECT =	rofi-pass
GH_TAGNAME =	1.5.1

CATEGORIES =	security

# GPLv3.0
PERMIT_PACKAGE_CDROM =	Yes

RUN_DEPENDS =	security/password-store \
		sysutils/ggrep \
		sysutils/rofi \
		x11/xdotool

TEST_DEPENDS =	${RUN_DEPENDS}

USE_GMAKE =	Yes
FAKE_FLAGS =	PREFIX=${PREFIX} MANDIR=${PREFIX}/man

NO_BUILD =	Yes

.include <bsd.port.mk>
