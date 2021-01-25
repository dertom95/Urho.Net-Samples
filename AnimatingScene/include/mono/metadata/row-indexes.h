/**
 * \file
 */

#ifndef __MONO_METADATA_ROW_INDEXES_H__
#define __MONO_METADATA_ROW_INDEXES_H__

/*
 * The last entry in the enum is used to give the number
 * of columns in the row.
 */

enum {
	MONO_ASSEMBLY_HASH_ALG,
	MONO_ASSEMBLY_MAJOR_VERSION,
	MONO_ASSEMBLY_MINOR_VERSION,
	MONO_ASSEMBLY_BUILD_NUMBER,
	MONO_ASSEMBLY_REV_NUMBER,
	MONO_ASSEMBLY_FLAGS,
	MONO_ASSEMBLY_PUBLIC_KEY,
	MONO_ASSEMBLY_NAME,
	MONO_ASSEMBLY_CULTURE,
	MONO_ASSEMBLY_SIZE
};

enum {
	MONO_ASSEMBLYOS_PLATFORM,
	MONO_ASSEMBLYOS_MAJOR_VERSION,
	MONO_ASSEMBLYOS_MINOR_VERSION,
	MONO_ASSEMBLYOS_SIZE
};

enum {
	MONO_ASSEMBLY_PROCESSOR,
	MONO_ASSEMBLY_PROCESSOR_SIZE
};

enum {
	MONO_ASSEMBLYREF_MAJOR_VERSION,
	MONO_ASSEMBLYREF_MINOR_VERSION,
	MONO_ASSEMBLYREF_BUILD_NUMBER,
	MONO_ASSEMBLYREF_REV_NUMBER,
	MONO_ASSEMBLYREF_FLAGS,
	MONO_ASSEMBLYREF_PUBLIC_KEY,
	MONO_ASSEMBLYREF_NAME,
	MONO_ASSEMBLYREF_CULTURE,
	MONO_ASSEMBLYREF_HASH_VALUE,
	MONO_ASSEMBLYREF_SIZE
};

enum {
	MONO_ASSEMBLYREFOS_PLATFORM,
	MONO_ASSEMBLYREFOS_MAJOR_VERSION,
	MONO_ASSEMBLYREFOS_MINOR_VERSION,
	MONO_ASSEMBLYREFOS_ASSEMBLYREF,
	MONO_ASSEMBLYREFOS_SIZE
};

enum {
	MONO_ASSEMBLYREFPROC_PROCESSOR,
	MONO_ASSEMBLYREFPROC_ASSEMBLYREF,
	MONO_ASSEMBLYREFPROC_SIZE
};

enum {
	MONO_CLASS_LAYOUT_PACKING_SIZE,
	MONO_CLASS_LAYOUT_CLASS_SIZE,
	MONO_CLASS_LAYOUT_PARENT,
	MONO_CLASS_LAYOUT_SIZE
};

enum {
	MONO_CONSTANT_TYPE,
	MONO_CONSTANT_PADDING,
	MONO_CONSTANT_PARENT,
	MONO_CONSTANT_VALUE,
	MONO_CONSTANT_SIZE
};

enum {
	MONO_CUSTOM_ATTR_PARENT,
	MONO_CUSTOM_ATTR_TYPE,
	MONO_CUSTOM_ATTR_VALUE,
	MONO_CUSTOM_ATTR_SIZE
};

enum {
	MONO_DECL_SECURITY_ACTION,
	MONO_DECL_SECURITY_PARENT,
	MONO_DECL_SECURITY_PERMISSIONSET,
	MONO_DECL_SECURITY_SIZE
};

enum {
	MONO_EVENT_MAP_PARENT,
	MONO_EVENT_MAP_EVENTLIST,
	MONO_EVENT_MAP_SIZE
};

enum {
	MONO_EVENT_FLAGS,
	MONO_EVENT_NAME,
	MONO_EVENT_TYPE,
	MONO_EVENT_SIZE
};

enum {
	MONO_EVENT_POINTER_EVENT,
	MONO_EVENT_POINTER_SIZE
};

enum {
	MONO_EXP_TYPE_FLAGS,
	MONO_EXP_TYPE_TYPEDEF,
	MONO_EXP_TYPE_NAME,
	MONO_EXP_TYPE_NAMESPACE,
	MONO_EXP_TYPE_IMPLEMENTATION,
	MONO_EXP_TYPE_SIZE
};

enum {
	MONO_FIELD_FLAGS,
	MONO_FIELD_NAME,
	MONO_FIELD_SIGNATURE,
	MONO_FIELD_SIZE
};

enum {
	MONO_FIELD_LAYOUT_OFFSET,
	MONO_FIELD_LAYOUT_FIELD,
	MONO_FIELD_LAYOUT_SIZE
};

enum {
	MONO_FIELD_MARSHAL_PARENT,
	MONO_FIELD_MARSHAL_NATIVE_TYPE,
	MONO_FIELD_MARSHAL_SIZE
};

enum {
	MONO_FIELD_POINTER_FIELD,
	MONO_FIELD_POINTER_SIZE
};

enum {
	MONO_FIELD_RVA_RVA,
	MONO_FIELD_RVA_FIELD,
	MONO_FIELD_RVA_SIZE
};

enum {
	MONO_ENCLOG_TOKEN,
	MONO_ENCLOG_FUNC_CODE,
	MONO_ENCLOG_SIZE
};

enum {
	MONO_ENCMAP_TOKEN,
	MONO_ENCMAP_SIZE
};

enum {
	MONO_FILE_FLAGS,
	MONO_FILE_NAME,
	MONO_FILE_HASH_VALUE,
	MONO_FILE_SIZE
};

enum {
	MONO_IMPLMAP_FLAGS,
	MONO_IMPLMAP_MEMBER,
	MONO_IMPLMAP_NAME,
	MONO_IMPLMAP_SCOPE,
	MONO_IMPLMAP_SIZE
};

enum {
	MONO_INTERFACEIMPL_CLASS,
	MONO_INTERFACEIMPL_INTERFACE,
	MONO_INTERFACEIMPL_SIZE
};

enum {
	MONO_MANIFEST_OFFSET,
	MONO_MANIFEST_FLAGS,
	MONO_MANIFEST_NAME,
	MONO_MANIFEST_IMPLEMENTATION,
	MONO_MANIFEST_SIZE
};

enum {
	MONO_MEMBERREF_CLASS,
	MONO_MEMBERREF_NAME,
	MONO_MEMBERREF_SIGNATURE,
	MONO_MEMBERREF_SIZE
};

enum {
	MONO_METHOD_RVA,
	MONO_METHOD_IMPLFLAGS,
	MONO_METHOD_FLAGS,
	MONO_METHOD_NAME,
	MONO_METHOD_SIGNATURE,
	MONO_METHOD_PARAMLIST,
	MONO_METHOD_SIZE
};

enum {
	MONO_METHODIMPL_CLASS,
	MONO_METHODIMPL_BODY,
	MONO_METHODIMPL_DECLARATION,
	MONO_METHODIMPL_SIZE
};

enum {
	MONO_METHOD_POINTER_METHOD,
	MONO_METHOD_POINTER_SIZE
};

enum {
	MONO_METHOD_SEMA_SEMANTICS,
	MONO_METHOD_SEMA_METHOD,
	MONO_METHOD_SEMA_ASSOCIATION,
	MONO_METHOD_SEMA_SIZE
};

enum {
	MONO_MODULE_GENERATION,
	MONO_MODULE_NAME,
	MONO_MODULE_MVID,
	MONO_MODULE_ENC,
	MONO_MODULE_ENCBASE,
	MONO_MODULE_SIZE
};

enum {
	MONO_MODULEREF_NAME,
	MONO_MODULEREF_SIZE
};

enum {
	MONO_NESTED_CLASS_NESTED,
	MONO_NESTED_CLASS_ENCLOSING,
	MONO_NESTED_CLASS_SIZE
};

enum {
	MONO_PARAM_FLAGS,
	MONO_PARAM_SEQUENCE,
	MONO_PARAM_NAME,
	MONO_PARAM_SIZE
};

enum {
	MONO_PARAM_POINTER_PARAM,
	MONO_PARAM_POINTER_SIZE
};

enum {
	MONO_PROPERTY_FLAGS,
	MONO_PROPERTY_NAME,
	MONO_PROPERTY_TYPE,
	MONO_PROPERTY_SIZE
};

enum {
	MONO_PROPERTY_POINTER_PROPERTY,
	MONO_PROPERTY_POINTER_SIZE
};

enum {
	MONO_PROPERTY_MAP_PARENT,
	MONO_PROPERTY_MAP_PROPERTY_LIST,
	MONO_PROPERTY_MAP_SIZE
};

enum {
	MONO_STAND_ALONE_SIGNATURE,
	MONO_STAND_ALONE_SIGNATURE_SIZE
};

enum {
	MONO_TYPEDEF_FLAGS,
	MONO_TYPEDEF_NAME,
	MONO_TYPEDEF_NAMESPACE,
	MONO_TYPEDEF_EXTENDS,
	MONO_TYPEDEF_FIELD_LIST,
	MONO_TYPEDEF_METHOD_LIST,
	MONO_TYPEDEF_SIZE
};

enum {
	MONO_TYPEREF_SCOPE,
	MONO_TYPEREF_NAME,
	MONO_TYPEREF_NAMESPACE,
	MONO_TYPEREF_SIZE
};

enum {
	MONO_TYPESPEC_SIGNATURE,
	MONO_TYPESPEC_SIZE
};

enum {
	MONO_GENERICPARAM_NUMBER,
	MONO_GENERICPARAM_FLAGS,
	MONO_GENERICPARAM_OWNER,
	MONO_GENERICPARAM_NAME,
	
	MONO_GENERICPARAM_SIZE
};

enum {
	MONO_METHODSPEC_METHOD,
	MONO_METHODSPEC_SIGNATURE,
	MONO_METHODSPEC_SIZE
};

enum {
	MONO_GENPARCONSTRAINT_GENERICPAR,
	MONO_GENPARCONSTRAINT_CONSTRAINT,
	MONO_GENPARCONSTRAINT_SIZE
};

enum {
	MONO_DOCUMENT_NAME,
	MONO_DOCUMENT_HASHALG,
	MONO_DOCUMENT_HASH,
	MONO_DOCUMENT_LANGUAGE,
	MONO_DOCUMENT_SIZE
};

enum {
	MONO_METHODBODY_DOCUMENT,
	MONO_METHODBODY_SEQ_POINTS,
	MONO_METHODBODY_SIZE
};

enum {
	MONO_LOCALSCOPE_METHOD,
	MONO_LOCALSCOPE_IMPORTSCOPE,
	MONO_LOCALSCOPE_VARIABLELIST,
	MONO_LOCALSCOPE_CONSTANTLIST,
	MONO_LOCALSCOPE_STARTOFFSET,
	MONO_LOCALSCOPE_LENGTH,
	MONO_LOCALSCOPE_SIZE
};

enum {
	MONO_LOCALVARIABLE_ATTRIBUTES,
	MONO_LOCALVARIABLE_INDEX,
	MONO_LOCALVARIABLE_NAME,
	MONO_LOCALVARIABLE_SIZE
};

enum {
	MONO_CUSTOMDEBUGINFORMATION_PARENT,
	MONO_CUSTOMDEBUGINFORMATION_KIND,
	MONO_CUSTOMDEBUGINFORMATION_VALUE,
	MONO_CUSTOMDEBUGINFORMATION_SIZE
};

/*
 * Coded Tokens
 * The _BITS entry is for the bits used in the token.
 * The _MASK entry is for mask the index out.
 */

enum {
	MONO_TYPEDEFORREF_TYPEDEF,
	MONO_TYPEDEFORREF_TYPEREF,
	MONO_TYPEDEFORREF_TYPESPEC,
	MONO_TYPEDEFORREF_BITS = 2,
	MONO_TYPEDEFORREF_MASK = 3
};

enum {
	MONO_HASCONSTANT_FIEDDEF,
	MONO_HASCONSTANT_PARAM,
	MONO_HASCONSTANT_PROPERTY,
	MONO_HASCONSTANT_BITS = 2,
	MONO_HASCONSTANT_MASK = 3
};

enum {
	MONO_CUSTOM_ATTR_METHODDEF,
	MONO_CUSTOM_ATTR_FIELDDEF,
	MONO_CUSTOM_ATTR_TYPEREF,
	MONO_CUSTOM_ATTR_TYPEDEF,
	MONO_CUSTOM_ATTR_PARAMDEF,
	MONO_CUSTOM_ATTR_INTERFACE,
	MONO_CUSTOM_ATTR_MEMBERREF,
	MONO_CUSTOM_ATTR_MODULE,
	MONO_CUSTOM_ATTR_PERMISSION,
	MONO_CUSTOM_ATTR_PROPERTY,
	MONO_CUSTOM_ATTR_EVENT,
	MONO_CUSTOM_ATTR_SIGNATURE,
	MONO_CUSTOM_ATTR_MODULEREF,
	MONO_CUSTOM_ATTR_TYPESPEC,
	MONO_CUSTOM_ATTR_ASSEMBLY,
	MONO_CUSTOM_ATTR_ASSEMBLYREF,
	MONO_CUSTOM_ATTR_FILE,
	MONO_CUSTOM_ATTR_EXP_TYPE,
	MONO_CUSTOM_ATTR_MANIFEST,
	MONO_CUSTOM_ATTR_GENERICPAR,
	MONO_CUSTOM_ATTR_GENERICPARAMCONSTRAINT,
	MONO_CUSTOM_ATTR_BITS = 5,
	MONO_CUSTOM_ATTR_MASK = 0x1F
};

enum {
	MONO_HAS_FIELD_MARSHAL_FIELDSREF,
	MONO_HAS_FIELD_MARSHAL_PARAMDEF,
	MONO_HAS_FIELD_MARSHAL_BITS = 1,
	MONO_HAS_FIELD_MARSHAL_MASK = 1
};

enum {
	MONO_HAS_DECL_SECURITY_TYPEDEF,
	MONO_HAS_DECL_SECURITY_METHODDEF,
	MONO_HAS_DECL_SECURITY_ASSEMBLY,
	MONO_HAS_DECL_SECURITY_BITS = 2,
	MONO_HAS_DECL_SECURITY_MASK = 3
};

enum {
	MONO_MEMBERREF_PARENT_TYPEDEF, /* not used */
	MONO_MEMBERREF_PARENT_TYPEREF,
	MONO_MEMBERREF_PARENT_MODULEREF,
	MONO_MEMBERREF_PARENT_METHODDEF,
	MONO_MEMBERREF_PARENT_TYPESPEC,
	MONO_MEMBERREF_PARENT_BITS = 3,
	MONO_MEMBERREF_PARENT_MASK = 7
};

enum {
	MONO_HAS_SEMANTICS_EVENT,
	MONO_HAS_SEMANTICS_PROPERTY,
	MONO_HAS_SEMANTICS_BITS = 1,
	MONO_HAS_SEMANTICS_MASK = 1
};

enum {
	MONO_METHODDEFORREF_METHODDEF,
	MONO_METHODDEFORREF_METHODREF,
	MONO_METHODDEFORREF_BITS = 1,
	MONO_METHODDEFORREF_MASK = 1
};

enum {
	MONO_MEMBERFORWD_FIELDDEF,
	MONO_MEMBERFORWD_METHODDEF,
	MONO_MEMBERFORWD_BITS = 1,
	MONO_MEMBERFORWD_MASK = 1
};

enum {
	MONO_IMPLEMENTATION_FILE,
	MONO_IMPLEMENTATION_ASSEMBLYREF,
	MONO_IMPLEMENTATION_EXP_TYPE,
	MONO_IMPLEMENTATION_BITS = 2,
	MONO_IMPLEMENTATION_MASK = 3
};

enum {
	MONO_CUSTOM_ATTR_TYPE_TYPEREF, /* not used */
	MONO_CUSTOM_ATTR_TYPE_TYPEDEF, /* not used */
	MONO_CUSTOM_ATTR_TYPE_METHODDEF,
	MONO_CUSTOM_ATTR_TYPE_MEMBERREF,
	MONO_CUSTOM_ATTR_TYPE_STRING, /* not used */
	MONO_CUSTOM_ATTR_TYPE_BITS = 3,
	MONO_CUSTOM_ATTR_TYPE_MASK = 7
};

enum {
	MONO_RESOLUTION_SCOPE_MODULE,
	MONO_RESOLUTION_SCOPE_MODULEREF,
	MONO_RESOLUTION_SCOPE_ASSEMBLYREF,
	MONO_RESOLUTION_SCOPE_TYPEREF,
	MONO_RESOLUTION_SCOPE_BITS = 2,
	MONO_RESOLUTION_SCOPE_MASK = 3
};

/* Kept for compatibility since this is a public header file */
enum {
	MONO_RESOLTION_SCOPE_MODULE,
	MONO_RESOLTION_SCOPE_MODULEREF,
	MONO_RESOLTION_SCOPE_ASSEMBLYREF,
	MONO_RESOLTION_SCOPE_TYPEREF,
	MONO_RESOLTION_SCOPE_BITS = 2,
	MONO_RESOLTION_SCOPE_MASK = 3
};

enum {
	MONO_TYPEORMETHOD_TYPE,
	MONO_TYPEORMETHOD_METHOD,
	MONO_TYPEORMETHOD_BITS = 1,
	MONO_TYPEORMETHOD_MASK = 1
};

#endif /* __MONO_METADATA_ROW_INDEXES_H__ */


