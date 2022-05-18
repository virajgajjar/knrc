SUBDIRS := $(wildcard ch*/*/)

SUBTARGETS := clean all install

$(SUBTARGETS): $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@  $(MAKECMDGOALS)
	
.PHONY: $(SUBTARGETS) $(SUBDIRS)
