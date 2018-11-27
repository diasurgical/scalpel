DIR=1/ 3/ 6/ 10/ 13/ 17/ 18/ 23/ 25/ 28/ 29/ 31/ 33/ 34/ 35/ 36/
OUTPUT_C=${addsuffix _dump_c_,${DIR}}
OUTPUT_C_SRC=${addsuffix _dump_c_src_,${DIR}}
OUTPUT_IDA=${addsuffix _dump_ida_,${DIR}}
OUTPUT_TYPES=${addsuffix _dump_types_,${DIR}}
OUTPUT=${OUTPUT_C} ${OUTPUT_C_SRC} ${OUTPUT_IDA} ${OUTPUT_TYPES}

all: ${OUTPUT}

%/_dump_c_: %/DIABPSX.SYM
	sym_dump -c -dir $@ $<

%/_dump_c_src_: %/DIABPSX.SYM
	sym_dump -c -src -dir $@ $<

%/_dump_ida_: %/DIABPSX.SYM
	sym_dump -ida -dir $@ $<

%/_dump_types_: %/DIABPSX.SYM
	sym_dump -types -dir $@ $<

.PHONY: all clean

clean:
	$(RM) -r ${OUTPUT}
