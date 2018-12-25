DIR=1/ 3/ 6/ 10/ 13/ 17/ 18/ 23/ 25/ 28/ 29/ 31/ 33/ 34/ 35/ 36/ 37/ 38/ 39/ 40/ 41/ 42/ 43/ 44/ 45/ 46/ 47/ 48/ 49/ 50/ 51/ 52/ 53/ 54/
SYM_FILES=${addsuffix DIABPSX.SYM,${DIR}}
# No merge.
OUTPUT_C=${addsuffix _dump_c_,${DIR}}
OUTPUT_C_SRC=${addsuffix _dump_c_src_,${DIR}}
OUTPUT_IDA=${addsuffix _dump_ida_,${DIR}}
OUTPUT_TYPES=${addsuffix _dump_types_,${DIR}}
OUTPUT_NO_MERGE=${OUTPUT_C} ${OUTPUT_C_SRC} ${OUTPUT_IDA} ${OUTPUT_TYPES}
# Merge.
OUTPUT_MERGE_C=_dump_merge_c_
OUTPUT_MERGE_C_SRC=_dump_merge_c_src_
OUTPUT_MERGE_TYPES=_dump_merge_types_
OUTPUT_MERGE=${OUTPUT_MERGE_C} ${OUTPUT_MERGE_C_SRC} ${OUTPUT_MERGE_TYPES}
# Names.
OUTPUT_NAMES=${addsuffix names.txt,${DIR}}
# All output.
OUTPUT=${OUTPUT_NO_MERGE} ${OUTPUT_MERGE} ${OUTPUT_NAMES}

all: dump_no_merge dump_merge names

dump_no_merge: ${OUTPUT_NO_MERGE}

dump_merge: ${OUTPUT_MERGE}

names: ${OUTPUT_NAMES}

# No merge.

%/_dump_c_: %/DIABPSX.SYM
	sym_dump -c -dir $@ $<

%/_dump_c_src_: %/DIABPSX.SYM
	sym_dump -c -src -dir $@ $<

%/_dump_ida_: %/DIABPSX.SYM
	sym_dump -ida -dir $@ $<

%/_dump_types_: %/DIABPSX.SYM
	sym_dump -types -dir $@ $<

# Merge.

_dump_merge_c_: ${SYM_FILES}
	sym_dump -merge -c -dir $@ $^

_dump_merge_c_src_: ${SYM_FILES}
	sym_dump -merge -c -src -dir $@ $^

_dump_merge_types_: ${SYM_FILES}
	sym_dump -merge -types -dir $@ $^

# Names.

%/names.txt: %/DIABPSX.MAP
	sar '(.|[\n])+Names alphabetically[\r\n]*' "" $< | awk '{print $$2}' | sort > $@

.PHONY: all dump_no_merge dump_merge names clean

clean:
	$(RM) -r ${OUTPUT}
