#include "moarvm.h"
#include "gcc_diag.h"

/* Default REPR function handlers. */
GCC_DIAG_OFF(return-type)
static MVMuint64 default_elems(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) does not support elems",
        st->REPR->name);
}
GCC_DIAG_ON(return-type)
MVM_NO_RETURN
static void die_no_attrs(MVMThreadContext *tc, const char *repr_name) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) does not support attribute storage", repr_name);
}
static void default_get_attribute(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *class_handle, MVMString *name, MVMint64 hint, MVMRegister *result, MVMuint16 kind) {
    die_no_attrs(tc, st->REPR->name);
}
static void default_bind_attribute(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *class_handle, MVMString *name, MVMint64 hint, MVMRegister value, MVMuint16 kind) {
    die_no_attrs(tc, st->REPR->name);
}
GCC_DIAG_OFF(return-type)
static MVMint64 default_is_attribute_initialized(MVMThreadContext *tc, MVMSTable *st, void *data, MVMObject *class_handle, MVMString *name, MVMint64 hint) {
    die_no_attrs(tc, st->REPR->name);
}
GCC_DIAG_ON(return-type)
static MVMint64 default_hint_for(MVMThreadContext *tc, MVMSTable *st, MVMObject *class_handle, MVMString *name) {
    return MVM_NO_HINT;
}
static void default_set_int(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMint64 value) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) cannot box a native int", st->REPR->name);
}
static MVMint64 default_get_int(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) cannot unbox to a native int", st->REPR->name);
}
static void default_set_num(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMnum64 value) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) cannot box a native num", st->REPR->name);
}
static MVMnum64 default_get_num(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) cannot unbox to a native num", st->REPR->name);
}
static void default_set_str(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMString *value) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) cannot box a native string", st->REPR->name);
}
static MVMString * default_get_str(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) cannot unbox to a native string", st->REPR->name);
}
static void * default_get_boxed_ref(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMuint32 repr_id) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) cannot unbox to other types", st->REPR->name);
}
MVM_NO_RETURN
static void die_no_pos(MVMThreadContext *tc, const char *repr_name) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) does not support positional access", repr_name);
}
static void default_at_pos(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMint64 index, MVMRegister *value, MVMuint16 kind) {
    die_no_pos(tc, st->REPR->name);
}
static void default_bind_pos(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMint64 index, MVMRegister value, MVMuint16 kind) {
    die_no_pos(tc, st->REPR->name);
}
static void default_set_elems(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMuint64 count) {
    die_no_pos(tc, st->REPR->name);
}
static MVMint64 default_exists_pos(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMint64 index) {
    die_no_pos(tc, st->REPR->name);
}
static void default_push(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMRegister value, MVMuint16 kind) {
    die_no_pos(tc, st->REPR->name);
}
static void default_pop(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMRegister *value, MVMuint16 kind) {
    die_no_pos(tc, st->REPR->name);
}
static void default_unshift(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMRegister value, MVMuint16 kind) {
    die_no_pos(tc, st->REPR->name);
}
static void default_shift(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMRegister *value, MVMuint16 kind) {
    die_no_pos(tc, st->REPR->name);
}
GCC_DIAG_OFF(return-type)
static MVMStorageSpec default_get_elem_storage_spec(MVMThreadContext *tc, MVMSTable *st) {
    die_no_pos(tc, st->REPR->name);
}
GCC_DIAG_ON(return-type)
static void default_splice(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *target_array, MVMint64 offset, MVMuint64 elems) {
    die_no_pos(tc, st->REPR->name);
}
MVM_NO_RETURN
static void die_no_ass(MVMThreadContext *tc, const char *repr_name) {
    MVM_exception_throw_adhoc(tc,
        "This representation (%s) does not support associative access", repr_name);
}
GCC_DIAG_OFF(return-type)
void * default_at_key_ref(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *key) {
    die_no_ass(tc, st->REPR->name);
}
MVMObject * default_at_key_boxed(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *key) {
    die_no_ass(tc, st->REPR->name);
}
GCC_DIAG_ON(return-type)
void default_bind_key_ref(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *key, void *value_addr) {
    die_no_ass(tc, st->REPR->name);
}
void default_bind_key_boxed(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *key, MVMObject *value) {
    die_no_ass(tc, st->REPR->name);
}
GCC_DIAG_OFF(return-type)
MVMuint64 default_exists_key(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *key) {
    die_no_ass(tc, st->REPR->name);
}
GCC_DIAG_ON(return-type)
void default_delete_key(MVMThreadContext *tc, MVMSTable *st, MVMObject *root, void *data, MVMObject *key) {
    die_no_ass(tc, st->REPR->name);
}
GCC_DIAG_OFF(return-type)
MVMStorageSpec default_get_value_storage_spec(MVMThreadContext *tc, MVMSTable *st) {
    die_no_ass(tc, st->REPR->name);
}
GCC_DIAG_ON(return-type)

MVMREPROps_Attribute MVM_REPR_DEFAULT_ATTR_FUNCS = {
    default_get_attribute,
    default_bind_attribute,
    default_hint_for,
    default_is_attribute_initialized,
};

MVMREPROps_Boxing MVM_REPR_DEFAULT_BOX_FUNCS = {
    default_set_int,
    default_get_int,
    default_set_num,
    default_get_num,
    default_set_str,
    default_get_str,
    default_get_boxed_ref,
};

MVMREPROps_Positional MVM_REPR_DEFAULT_POS_FUNCS = {
    default_at_pos,
    default_bind_pos,
    default_set_elems,
    default_exists_pos,
    default_push,
    default_pop,
    default_unshift,
    default_shift,
    default_splice,
    default_get_elem_storage_spec,
};

MVMREPROps_Associative MVM_REPR_DEFAULT_ASS_FUNCS = {
    default_at_key_ref,
    default_at_key_boxed,
    default_bind_key_ref,
    default_bind_key_boxed,
    default_exists_key,
    default_delete_key,
    default_get_value_storage_spec,
};

/* Registers a representation. It this is ever made public, it should first be
 * made thread-safe, and it should check if the name is already registered. */
static void register_repr(MVMThreadContext *tc, MVMREPROps *repr) {
    MVMString *name = MVM_string_ascii_decode_nt(tc, tc->instance->VMString, repr->name);

    const MVMuint32 ID = repr->ID;

    /* Allocate a hash entry for the name-to-ID.
        Could one day be unified with MVMREPROps, I suppose. */
    MVMReprRegistry *entry = malloc(sizeof(MVMReprRegistry));
    entry->id = ID;

    tc->instance->repr_names[ID] = name;

    /* Name should become a permanent GC root. */
    MVM_gc_root_add_permanent(tc, (MVMCollectable **)&tc->instance->repr_names[ID]);

    /* Bump the repr count */
    tc->instance->num_reprs++;

    /* Enter into registry. */
    if (tc->instance->repr_registry)
        tc->instance->repr_registry = realloc(tc->instance->repr_registry,
            tc->instance->num_reprs * sizeof(MVMREPROps *)); /* TODO: don't realloc every time */
    else
        tc->instance->repr_registry = malloc(tc->instance->num_reprs * sizeof(MVMREPROps *));
    tc->instance->repr_registry[ID] = repr;

    MVM_string_flatten(tc, name);
    MVM_HASH_BIND(tc, tc->instance->repr_name_to_id_hash, name, entry);

    /* Add default "not implemented" function table implementations. */
    /* FIXME: needs to go if we want static REPRs */
    if (!repr->elems)
        repr->elems = default_elems;
}

#define repr_registrar(tc, init) \
    register_repr(tc, init(tc))

/* Initializes the representations registry, building up all of the various
 * representations. */
void MVM_repr_initialize_registry(MVMThreadContext *tc) {
    /* Add all core representations. (If order changed, update reprs.h IDs.) */
    repr_registrar(tc, MVMString_initialize);
    repr_registrar(tc, MVMArray_initialize);
    repr_registrar(tc, MVMHash_initialize);
    repr_registrar(tc,  MVMCFunction_initialize);
    repr_registrar(tc, MVMKnowHOWREPR_initialize);
    repr_registrar(tc, MVMP6opaque_initialize);
    repr_registrar(tc, MVMCode_initialize);
    repr_registrar(tc, MVMOSHandle_initialize);
    repr_registrar(tc, MVMP6int_initialize);
    repr_registrar(tc, MVMP6num_initialize);
    repr_registrar(tc, MVMUninstantiable_initialize);
    repr_registrar(tc, MVMHashAttrStore_initialize);
    repr_registrar(tc, MVMKnowHOWAttributeREPR_initialize);
    repr_registrar(tc, MVMP6str_initialize);
    repr_registrar(tc, MVMThread_initialize);
    repr_registrar(tc, MVMIter_initialize);
    repr_registrar(tc, MVMContext_initialize);
    repr_registrar(tc, MVMSCRef_initialize);
    repr_registrar(tc, MVMLexotic_initialize);
    repr_registrar(tc, MVMCallCapture_initialize);
    repr_registrar(tc, MVMP6bigint_initialize);
    repr_registrar(tc, MVMNFA_initialize);
    repr_registrar(tc, MVMException_initialize);
    repr_registrar(tc, MVMStaticFrame_initialize);
    repr_registrar(tc, MVMCompUnit_initialize);
}

/* Get a representation's ID from its name. Note that the IDs may change so
 * it's best not to store references to them in e.g. the bytecode stream. */
MVMuint32 MVM_repr_name_to_id(MVMThreadContext *tc, MVMString *name) {
    MVMReprRegistry *entry;

    MVM_string_flatten(tc, name);
    MVM_HASH_GET(tc, tc->instance->repr_name_to_id_hash, name, entry)

    if (entry == NULL)
        MVM_exception_throw_adhoc(tc, "Lookup by name of unknown REPR: %s",
            MVM_string_utf8_encode_C_string(tc, name));
    return entry->id;
}

/* Gets a representation by ID. */
MVMREPROps * MVM_repr_get_by_id(MVMThreadContext *tc, MVMuint32 id) {
    return tc->instance->repr_registry[id];
}

/* Gets a representation by name. */
MVMREPROps * MVM_repr_get_by_name(MVMThreadContext *tc, MVMString *name) {
    return tc->instance->repr_registry[MVM_repr_name_to_id(tc, name)];
}
