TARGET_EXEC ?= sim_test.so

BUIILD_REP ?= $(TOPDIR)/build

BUILD_DIR ?= $(TOPDIR)/build/sim_test
SRC_DIRS ?= $(TOPDIR)/frontend
SRC_DIRS += $(TOPDIR)/backend
SRC_DIRS += $(TOPDIR)/common

SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c -or -name *.s)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP -g -fPIC

LDFLAGS = -shared

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@


.PHONY: clean

clean:
	$(RM) -r $(BUIILD_REP)

-include $(DEPS)

MKDIR_P ?= mkdir -p
