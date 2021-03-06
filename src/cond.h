#ifndef FINIT_COND_H_
#define FINIT_COND_H_

#include <paths.h>

#define COND_DIR      "finit/cond"
#define COND_PATH     _PATH_VARRUN COND_DIR
#define COND_RECONF   COND_PATH "/reconf"

typedef enum cond_state {
	COND_OFF = 0,
	COND_FLUX,
	COND_ON
} cond_state_t;

const char     *condstr      (enum cond_state s);
const char     *cond_path    (const char *name);
unsigned int    cond_get_gen (const char *path);
enum cond_state cond_get_path(const char *path);
enum cond_state cond_get     (const char *name);
enum cond_state cond_get_agg (const char *names);
int             cond_affects (const char *name, const char *names);

int  cond_set_path    (const char *path, enum cond_state new);
void cond_set         (const char *name);
void cond_set_oneshot (const char *name);
void cond_clear       (const char *name);
void cond_reload      (void);
void cond_reassert    (const char *pat);
void cond_init        (void);

#endif	/* FINIT_COND_H_ */

/**
 * Local Variables:
 *  indent-tabs-mode: t
 *  c-file-style: "linux"
 * End:
 */
