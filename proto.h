OP*	CopDBadd P((OP* cur));
OP*	add_label P((char* lbl, OP* cmd));
OP*	addcond P((OP* cmd, OP* arg));
OP*	addflags P((I32 i, I32 flags, OP* arg));
OP*	addloop P((OP* cmd, OP* arg));
OP*	append_elem P((I32 optype, OP* head, OP* tail));
OP*	append_list P((I32 optype, LISTOP* first, LISTOP* last));
I32	apply P((I32 type, SV** mark, SV** sp));
void	av_clear P((AV* ar));
AV*	av_fake P((I32 size, SV** svp));
SV**	av_fetch P((AV* ar, I32 key, I32 lval));
void	av_fill P((AV* ar, I32 fill));
void	av_free P((AV* ar));
I32	av_len P((AV* ar));
AV*	av_make P((I32 size, SV** svp));
SV*	av_pop P((AV* ar));
void	av_popnulls P((AV* ar));
bool	av_push P((AV* ar, SV* val));
SV*	av_shift P((AV* ar));
SV**	av_store P((AV* ar, I32 key, SV* val));
void	av_undef P((AV* ar));
void	av_unshift P((AV* ar, I32 num));
OP*	bind_match P((I32 type, OP* left, OP* pat));
OP*	block_head P((OP* o, OP** startp));
int	boot_DB_File P((int ix, int sp, int items));
int	boot_DynamicLoader P((void));
int	boot_NDBM_File P((int ix, int sp, int items));
int	boot_GDBM_File P((int ix, int sp, int items));
int	boot_SDBM_File P((int ix, int sp, int items));
int	boot_ODBM_File P((int ix, int sp, int items));
int	boot_DBZ_File P((int ix, int sp, int items));
int	boot_POSIX P((int ix, int sp, int items));
void	calllist P((AV* list));
I32	cando P((I32 bit, I32 effective, struct stat* statbufp));
U32	cast_ulong P((double f));
void	checkcomma P((char* s, char* name, char* what));
I32	chsize P((int fd, off_t length));
OP*	convert P((I32 optype, I32 flags, OP* op));
OP*	cop_to_arg P((OP* cmd));
I32	copyopt P((OP* cmd, OP* which));
void	cpy7bit P((char* d, char* s, I32 l));
char*	cpytill P((char* to, char* from, char* fromend, I32 delim, I32* retlen));
void	croak P((char* pat,...));
void	cryptfilter P((FILE* fil));
void	cryptswitch P((void));
void	cv_clear P((CV* cv));
void	deb P((char* pat,...));
void	deb_growlevel P((void));
OP*	die P((char* pat,...));
OP*	die_where P((char* message));
void	do_accept P((SV* sv, GV* ngv, GV* ggv));
bool	do_aexec P((SV* really, SV** mark, SV** sp));
void	do_chop P((SV* asv, SV* sv));
bool	do_close P((GV* gv, bool explicit));
int	do_ctl P((I32 optype, GV* gv, I32 func, SV* argsv));
bool	do_eof P((GV* gv));
bool	do_exec P((char* cmd));
void	do_execfree P((void));
SV*	do_fttext P((OP* arg, SV* sv));
I32	do_ipcctl P((I32 optype, SV** mark, SV** sp));
I32	do_ipcget P((I32 optype, SV** mark, SV** sp));
void	do_join P((SV* sv, SV* del, SV** mark, SV** sp));
OP*	do_kv P((void));
I32	do_msgrcv P((SV** mark, SV** sp));
I32	do_msgsnd P((SV** mark, SV** sp));
bool	do_open P((GV* gv, char* name, I32 len));
void	do_pipe P((SV* sv, GV* rgv, GV* wgv));
bool	do_print P((SV* sv, FILE* fp));
bool	do_seek P((GV* gv, long pos, int whence));
I32	do_semop P((SV** mark, SV** sp));
I32	do_shmio P((I32 optype, SV** mark, SV** sp));
void	do_sprintf P((SV* sv, int len, SV** sarg));
OP*	do_subr P((void));
long	do_tell P((GV* gv));
I32	do_trans P((SV* sv, OP* arg));
void	do_vecset P((SV* sv));
void	do_vop P((I32 optype, SV* sv, SV* left, SV* right));
void	do_write P((struct Outrec* orec, GV* gv));
void	dump_all P((void));
void	dump_cop P((OP* cmd, OP* alt));
void	dump_eval P((void));
int	dump_fds P((char* s));
void	dump_flags P((char* b, U32 flags));
void	dump_gv P((GV* gv));
void	dump_op P((OP* arg));
void	dump_pm P((PMOP* pm));
void	dump_packsubs P((HV* stash));
void	dump_sub P((GV* gv));
void	fbm_compile P((SV* sv, I32 iflag));
char*	fbm_instr P((unsigned char* big, unsigned char* bigend, SV* littlesv));
IO*	fetch_io P((OP* op, I32 num));
GV*	fetch_gv P((OP* op, I32 num));
HV*	fetch_stash P((SV* sv, I32 create));
OP*	flatten P((OP* arg));
void	force_ident P((char* s));
char*	force_word P((char* start, int token, int check_keyword, int allow_tick));
OP*	forcelist P((OP* arg));
void	free_tmps P((void));
OP*	gen_constant_list P((OP* op));
I32	getgimme P((OP*op));
void	gp_free P((GV* gv));
GP*	gp_ref P((GP* gp));
GV*	gv_AVadd P((GV* gv));
GV*	gv_HVadd P((GV* gv));
void	gv_check P((HV* stash));
void	gv_efullname P((SV* sv, GV* gv));
GV*	gv_fetchfile P((char* name));
GV*	gv_fetchmethod P((HV* stash, char* name));
GV*	gv_fetchpv P((char* name, I32 add));
void	gv_fullname P((SV* sv, GV* gv));
STRLEN	gv_len P((SV* sv));
SV*	gv_str P((SV* sv));
OP*	gv_to_op P((I32 atype, GV* gv));
void	he_delayfree P((HE* hent));
void	he_free P((HE* hent));
void	hoistmust P((PMOP* pm));
void	hv_clear P((HV* tb));
SV*	hv_delete P((HV* tb, char* key, U32 klen));
SV**	hv_fetch P((HV* tb, char* key, U32 klen, I32 lval));
void	hv_free P((HV* tb));
I32	hv_iterinit P((HV* tb));
char*	hv_iterkey P((HE* entry, I32* retlen));
HE*	hv_iternext P((HV* tb));
SV*	hv_iterval P((HV* tb, HE* entry));
void	hv_magic P((HV* hv, GV* gv, I32 how));
SV**	hv_store P((HV* tb, char* key, U32 klen, SV* val, U32 hash));
void	hv_undef P((HV* tb));
I32	ibcmp P((char* a, char* b, I32 len));
I32	ingroup P((int testgid, I32 effective));
char*	instr P((char* big, char* little));
OP*	invert P((OP* cmd));
OP*	jmaybe P((OP* arg));
I32	keyword P((char* d, I32 len));
void	leave_scope P((I32 base));
void	lex_end P((void));
void	lex_start P((SV *line));
OP*	linklist P((OP* op));
OP*	list P((OP* o));
OP*	listkids P((OP* o));
OP*	localize P((OP* arg, I32 lexical));
I32	looks_like_number P((SV* sv));
OP*	loopscope P((OP* o));
I32	lop P((I32 f, char* s));
int	magic_clearpack	P((SV* sv, MAGIC* mg));
int	magic_get	P((SV* sv, MAGIC* mg));
int	magic_getarylen	P((SV* sv, MAGIC* mg));
int	magic_getpack	P((SV* sv, MAGIC* mg));
int	magic_getglob	P((SV* sv, MAGIC* mg));
int	magic_gettaint	P((SV* sv, MAGIC* mg));
int	magic_getuvar	P((SV* sv, MAGIC* mg));
U32	magic_len	P((SV* sv, MAGIC* mg));
int	magic_set	P((SV* sv, MAGIC* mg));
int	magic_setarylen	P((SV* sv, MAGIC* mg));
int	magic_setbm	P((SV* sv, MAGIC* mg));
int	magic_setpack	P((SV* sv, MAGIC* mg));
int	magic_setdbline	P((SV* sv, MAGIC* mg));
int	magic_setenv	P((SV* sv, MAGIC* mg));
int	magic_setisa	P((SV* sv, MAGIC* mg));
int	magic_setglob	P((SV* sv, MAGIC* mg));
int	magic_setmglob	P((SV* sv, MAGIC* mg));
int	magic_setsig	P((SV* sv, MAGIC* mg));
int	magic_setsubstr	P((SV* sv, MAGIC* mg));
int	magic_settaint	P((SV* sv, MAGIC* mg));
int	magic_setuvar	P((SV* sv, MAGIC* mg));
int	magic_setvec	P((SV* sv, MAGIC* mg));
void	magicalize P((char* list));
void	magicname P((char* sym, char* name, I32 namlen));
int	main P((int argc, char** argv, char** env));
#ifndef STANDARD_C
MALLOCPTRTYPE*	malloc P((MEM_SIZE nbytes));
#endif
OP*	maybeforcelist P((I32 optype, OP* arg));
char*	mess P((char* pat, ...));
int	mg_clear P((SV* sv));
MAGIC*	mg_find P((SV* sv, char type));
int	mg_free P((SV* sv));
int	mg_get P((SV* sv));
U32	mg_len P((SV* sv));
void	mg_magical P((SV* sv));
int	mg_set P((SV* sv));
OP*	mod P((OP* op, I32 type));
char*	moreswitches P((char* s));
void	mstats P((char* s));
char*	my_bcopy P((char* from, char* to, I32 len));
char*	my_bzero P((char* loc, I32 len));
void	my_exit P((I32 status));
I32	my_lstat P((void));
I32	my_memcmp P((unsigned char* s1, unsigned char* s2, I32 len));
I32	my_pclose P((FILE* ptr));
FILE*	my_pfiopen P((FILE* fil, VOID (*func)()));
FILE*	my_popen P((char* cmd, char* mode));
void	my_setenv P((char* nam, char* val));
I32	my_stat P((void));
short	my_swap P((short s));
void	my_unexec P((void));
OP*	newANONLIST P((OP* op));
OP*	newANONHASH P((OP* op));
OP*	newASSIGNOP P((I32 flags, OP* left, OP* right));
OP*	newBINOP P((I32 optype, I32 flags, OP* left, OP* right));
OP*	newCONDOP P((I32 flags, OP* expr, OP* true, OP* false));
void	newFORM P((I32 floor, OP* op, OP* block));
OP*	newFOROP P((I32 flags, char* label, line_t forline, OP* scalar, OP* expr, OP*block, OP*cont));
OP*	newLOGOP P((I32 optype, I32 flags, OP* left, OP* right));
OP*	newLOOPEX P((I32 type, OP* label));
OP*	newLOOPOP P((I32 flags, I32 debuggable, OP* expr, OP* block));
OP*	newMETHOD P((OP* ref, OP* name));
OP*	newNAMEOP P((OP* o));
OP*	newNULLLIST P((void));
OP*	newOP P((I32 optype, I32 flags));
OP*	newRANGE P((I32 flags, OP* left, OP* right));
OP*	newSLICEOP P((I32 flags, OP* subscript, OP* list));
OP*	newSTATEOP P((I32 flags, char* label, OP* o));
void	newSUB P((I32 floor, OP* op, OP* block));
OP*	newUNOP P((I32 optype, I32 flags, OP* child));
void	newXSUB P((char *name, I32 ix, I32 (*subaddr)(int,int,int), char *filename));
AV*	newAV P((void));
OP*	newAVREF P((OP* o));
OP*	newBINOP P((I32 type, I32 flags, OP* first, OP* last));
OP*	newCVREF P((OP* o));
OP*	newGVOP P((I32 type, I32 flags, GV* gv));
GV*	newGVgen P((void));
OP*	newGVREF P((OP* o));
OP*	newHVREF P((OP* o));
HV*	newHV P((void));
IO*	newIO P((void));
OP*	newLISTOP P((I32 type, I32 flags, OP* first, OP* last));
OP*	newPMOP P((I32 type, I32 flags));
OP*	newPVOP P((I32 type, I32 flags, char* pv));
#ifdef LEAKTEST
SV*	newSV P((I32 x, STRLEN len));
#else
SV*	newSV P((STRLEN len));
#endif
OP*	newSVREF P((OP* o));
OP*	newSVOP P((I32 type, I32 flags, SV* sv));
SV*	newSViv P((I32 i));
SV*	newSVnv P((double n));
SV*	newSVpv P((char* s, STRLEN len));
SV*	newSVsv P((SV* old));
OP*	newUNOP P((I32 type, I32 flags, OP* first));
OP *	newWHILEOP P((I32 flags, I32 debuggable, LOOP* loop, OP* expr, OP* block, OP* cont));
FILE*	nextargv P((GV* gv));
char*	ninstr P((char* big, char* bigend, char* little, char* lend));
char*	nsavestr P((char* sv, I32 len));
void	op_behead P((OP* arg));
OP*	op_fold_const P((OP* arg));
void	op_free P((OP* arg));
void	op_optimize P((OP* cmd, I32 fliporflop, I32 acmd));
OP*	over P((GV* eachgv, OP* cmd));
PADOFFSET	pad_alloc P((I32 optype, U32 tmptype));
PADOFFSET	pad_allocmy P((char* name));
PADOFFSET	pad_findmy P((char* name));
OP*	oopsAV P((OP* o));
OP*	oopsHV P((OP* o));
void	pad_leavemy P((I32 fill));
SV*	pad_sv P((PADOFFSET po));
void	pad_free P((PADOFFSET po));
void	pad_reset P((void));
void	pad_swipe P((PADOFFSET po));
OP*	parse_list P((SV* sv));
void	peep P((OP* op));
PerlInterpreter*	perl_alloc P((void));
I32	perl_callargv P((char* subname, I32 sp, I32 gimme, char** argv));
I32	perl_callpv P((char* subname, I32 sp, I32 gimme, I32 hasargs, I32 numargs));
I32	perl_callsv P((CV* cv, I32 sp, I32 gimme, I32 hasargs, I32 numargs));
void	perl_construct P((PerlInterpreter* sv_interp));
void	perl_destruct P((PerlInterpreter* sv_interp));
void	perl_free P((PerlInterpreter* sv_interp));
void	perl_init_ext P((void));
I32	perl_parse P((PerlInterpreter* sv_interp, int argc, char** argv, char** env));
I32	perl_run P((PerlInterpreter* sv_interp));
void	pidgone P((int pid, int status));
OP*	pmruntime P((OP* pm, OP* expr, OP* repl));
OP*	pop_return P((void));
OP*	prepend_elem P((I32 optype, OP* head, OP* tail));
void	push_return P((OP* op));
OP*	rcatmaybe P((OP* arg));
regexp*	regcomp P((char* exp, char* xend, I32 fold));
OP*	ref P((OP* op, I32 type));
OP*	refkids P((OP* op, I32 type));
void	regdump P((regexp* r));
I32	regexec P((regexp* prog, char* stringarg, char* strend, char* strbeg, I32 minend, SV* screamer, I32 safebase));
void	regfree P((struct regexp* r));
char*	regnext P((char* p));
char*	regprop P((char* op));
void	repeatcpy P((char* to, char* from, I32 len, I32 count));
char*	rninstr P((char* big, char* bigend, char* little, char* lend));
void	run_format P((struct Outrec* orec, FF* fcmd));
#ifndef safemalloc
void	safefree P((char* where));
char*	safemalloc P((MEM_SIZE size));
char*	saferealloc P((char* where, unsigned long size));
#endif
void	safexfree P((char* where));
char*	safexmalloc P((I32 x, MEM_SIZE size));
char*	safexrealloc P((char* where, MEM_SIZE size));
I32	same_dirent P((char* a, char* b));
void	savestack_grow P((void));
void	save_aptr P((AV** aptr));
AV*	save_ary P((GV* gv));
void	save_clearsv P((SV** svp));
void	save_delete P((HV* hv, char* key, I32 klen));
void	save_freesv P((SV* sv));
void	save_freeop P((OP* op));
void	save_freepv P((char* pv));
HV*	save_hash P((GV* gv));
void	save_hptr P((HV** hptr));
void	save_I32 P((I32* intp));
void	save_int P((int* intp));
void	save_item P((SV* item));
void	save_list P((SV** sarg, I32 maxsarg));
void	save_nogv P((GV* gv));
SV*	save_scalar P((GV* gv));
void	save_sptr P((SV** sptr));
SV*	save_svref P((SV** sptr));
char*	savestr P((char* sv));
OP*	sawparens P((OP* o));
OP*	scalar P((OP* o));
OP*	scalarkids P((OP* op));
OP*	scalarseq P((OP* o));
OP*	scalarvoid P((OP* op));
char*	scan_formline P((char* s));
unsigned long	scan_hex P((char* start, I32 len, I32* retlen));
char*	scan_heredoc P((char* s));
char*	scan_inputsymbol P((char* s));
char*	scan_ident P((char* s, char* send, char* dest, I32 ck_uni));
char*	scan_num P((char* s));
unsigned long	scan_oct P((char* start, I32 len, I32* retlen));
char*	scan_pat P((char* s));
void	scan_prefix P((PMOP* pm, char* string, I32 len));
char*	scan_str P((char* start));
char*	scan_subst P((char* start));
char*	scan_trans P((char* start));
char*	scan_word P((char* s, char* dest, int allow_package, STRLEN *slp));
OP*	scope P((OP* o));
char*	screaminstr P((SV* bigsv, SV* littlesv));
I32	setenv_getix P((char* nam));
char*	skipspace P((char* s));
int	start_subparse P((void));
bool	sv_2bool P((SV* sv));
CV*	sv_2cv P((SV* sv, HV** st, GV** gvp, I32 lref));
I32	sv_2iv P((SV* sv));
SV*	sv_2mortal P((SV* sv));
double	sv_2nv P((SV* sv));
char*	sv_2pv P((SV* sv, STRLEN* lp));
char*	sv_append_till P((SV* sv, char* from, char* fromend, I32 delim, char* keeplist));
int	sv_backoff P((SV* sv));
void	sv_catpv P((SV* sv, char* ptr));
void	sv_catpvn P((SV* sv, char* ptr, STRLEN len));
void	sv_catsv P((SV* dsv, SV* ssv));
void	sv_chop P((SV* sv, char* ptr));
void	sv_clean_all P((void));
void	sv_clean_magic P((void));
void	sv_clean_refs P((void));
void	sv_clear P((SV* sv));
I32	sv_cmp P((SV* sv1, SV* sv2));
void	sv_dec P((SV* sv));
void	sv_dump P((SV* sv));
I32	sv_eq P((SV* sv1, SV* sv2));
void	sv_free P((SV* sv));
char*	sv_gets P((SV* sv, FILE* fp, I32 append));
#ifndef DOSISH
char*	sv_grow P((SV* sv, I32 newlen));
#else
char*	sv_grow P((SV* sv, unsigned long newlen));
#endif
void	sv_inc P((SV* sv));
void	sv_insert P((SV* bigsv, STRLEN offset, STRLEN len, char* little, STRLEN littlelen));
SV*	sv_interp P((SV* sv, SV* src, I32 sp));
void	sv_intrpcompile P((SV* src));
STRLEN	sv_len P((SV* sv));
void	sv_magic P((SV* sv, SV* obj, char how, char* name, I32 namlen));
SV*	sv_mortalcopy P((SV* oldsv));
SV*	sv_newmortal P((void));
SV*	sv_newref P((SV* sv));
void	sv_replace P((SV* sv, SV* nsv));
void	sv_report_used P((void));
void	sv_reset P((char* s, HV* stash));
void	sv_setiv P((SV* sv, I32 num));
void	sv_setnv P((SV* sv, double num));
void	sv_setpv P((SV* sv, char* ptr));
void	sv_setpvn P((SV* sv, char* ptr, STRLEN len));
void	sv_setsv P((SV* dsv, SV* ssv));
int	sv_unmagic P((SV* sv, char type));
void	sv_unref P((SV* sv));
void	sv_usepvn P((SV* sv, char* ptr, STRLEN len));
void	taint_env P((void));
void	taint_not P((char *s));
void	taint_proper P((char* f, char* s));
I32	uni P((I32 f, char* s));
I32	unlnk P((char* f));
I32	userinit P((void));
I32	wait4pid P((int pid, int* statusp, int flags));
void	warn P((char* pat,...));
I32	whichsig P((char* sig));
void	while_io P((OP* cmd));
OP*	wopt P((OP* cmd));
int	yyerror P((char* s));
int	yylex P((void));
int	yyparse P((void));
int	yywarn P((char* s));
