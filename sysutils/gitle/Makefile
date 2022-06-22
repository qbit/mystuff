COMMENT =	small, standalone git server

MODGO_MODNAME =	suah.dev/gitle
MODGO_VERSION =	v0.1.1

DISTNAME =	gitle-${MODGO_VERSION}

CATEGORIES =	sysutils

# ISC
PERMIT_PACKAGE =	Yes

SUBST_VARS =		VARBASE

MODULES =		lang/go

MODGO_MODULES =	\
	github.com/davecgh/go-spew	 v1.1.0 \
	github.com/gofrs/uuid		 v4.0.0+incompatible \
	github.com/pmezard/go-difflib	 v1.0.0 \
	github.com/stretchr/objx	 v0.1.0 \
	github.com/stretchr/testify	 v1.7.0 \
	golang.org/x/crypto		 v0.0.0-20210513164829-c07d793c2f9a \
	golang.org/x/net		 v0.0.0-20210226172049-e18ecbb05110 \
	golang.org/x/sys		 v0.0.0-20210917161153-d61c044b1678 \
	golang.org/x/term		 v0.0.0-20201126162022-7de9c90e9dd1 \
	golang.org/x/text		 v0.3.3 \
	golang.org/x/tools		 v0.0.0-20180917221912-90fa682c2a6e \
	gopkg.in/check.v1		 v0.0.0-20161208181325-20d25e280405 \
	gopkg.in/yaml.v3		 v3.0.0-20200313102051-9f266ea9e77c \
	suah.dev/gitkit			 v0.0.0-20220621212808-66c835b2b4a7 \
	suah.dev/protect		 v1.2.0
MODGO_MODFILES =	\
	golang.org/x/sys	 v0.0.0-20201119102817-f84b799fce68

.include <bsd.port.mk>
