# $OpenBSD: Makefile.template,v 1.73 2016/01/11 09:17:22 sthen Exp $
#		|----------------------------------------------------------|
COMMENT =	provides 256bit AES encryption of database files for sqlite3

#DISTNAME =	sqlcipher

SHARED_LIBS +=	sqlcipher                 8.6 # 8.6

GH_ACCOUNT =	sqlcipher
GH_PROJECT =	sqlcipher
GH_TAGNAME =	v3.3.1

CATEGORIES =	databases

HOMEPAGE =	https://www.zetetic.net/sqlcipher/

MAINTAINER =		Aaron Bieber <abieber@openbsd.org>

# BSD-like
PERMIT_PACKAGE_CDROM =	Yes

CONFIGURE_ARGS =	--enable-tempstore=yes CFLAGS="-DSQLITE_HAS_CODEC" \
			LDFLAGS="-lcrypto"

WANTLIB += c crypto ncurses pthread readline

CONFIGURE_STYLE =	gnu

.include <bsd.port.mk>
