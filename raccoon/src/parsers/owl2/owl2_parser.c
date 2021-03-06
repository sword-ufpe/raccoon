#include "owl2_parser.h"


// Name: OWL2 Functional Syntax
// Prefix: OWL2_
// StartRule: 1000000001
// StartStateName: default
// Output File: 
// Helper File: 

// States:
// 0 - default
// Symbol List
// 1 - TOKEN: $COMMENT
// 0 - TOKEN: $WHITESPACE
// 9 - TOKEN: ABBREVIATEDIRI
// 18 - TOKEN: ANNOTATION
// 13 - TOKEN: ANNOTATIONASSERTION
// 17 - TOKEN: ANNOTATIONPROPERTY
// 15 - TOKEN: ANNOTATIONPROPERTYDOMAIN
// 16 - TOKEN: ANNOTATIONPROPERTYRANGE
// 56 - TOKEN: ASYMMETRICOBJECTPROPERTY
// 35 - TOKEN: CLASS
// 34 - TOKEN: CLASSASSERTION
// 22 - TOKEN: DATAALLVALUESFROM
// 29 - TOKEN: DATACOMPLEMENTOF
// 26 - TOKEN: DATAEXACTCARDINALITY
// 23 - TOKEN: DATAHASVALUE
// 27 - TOKEN: DATAINTERSECTIONOF
// 25 - TOKEN: DATAMAXCARDINALITY
// 24 - TOKEN: DATAMINCARDINALITY
// 30 - TOKEN: DATAONEOF
// 44 - TOKEN: DATAPROPERTY
// 20 - TOKEN: DATAPROPERTYASSERTION
// 42 - TOKEN: DATAPROPERTYDOMAIN
// 43 - TOKEN: DATAPROPERTYRANGE
// 21 - TOKEN: DATASOMEVALUESFROM
// 36 - TOKEN: DATATYPE
// 32 - TOKEN: DATATYPEDEFINITION
// 31 - TOKEN: DATATYPERESTRICTION
// 28 - TOKEN: DATAUNIONOF
// 19 - TOKEN: DECLARATION
// 5 - TOKEN: DHAT
// 63 - TOKEN: DIFFERENTINDIVIDUALS
// 81 - TOKEN: DISJOINTCLASSES
// 60 - TOKEN: DISJOINTDATAPROPERTIES
// 50 - TOKEN: DISJOINTOBJECTPROPERTIES
// 82 - TOKEN: DISJOINTUNION
// 2 - TOKEN: EQ
// 47 - TOKEN: EQUIVALENTCLASSES
// 59 - TOKEN: EQUIVALENTDATAPROPERTIES
// 49 - TOKEN: EQUIVALENTOBJECTPROPERTIES
// 12 - TOKEN: FULLIRI
// 61 - TOKEN: FUNCTIONALDATAPROPERTY
// 51 - TOKEN: FUNCTIONALOBJECTPROPERTY
// 33 - TOKEN: HASKEY
// 80 - TOKEN: IMPORT
// 52 - TOKEN: INVERSEFUNCTIONALOBJECTPROPERTY
// 83 - TOKEN: INVERSEOBJECTPROPERTIES
// 54 - TOKEN: IRREFLEXIVEOBJECTPROPERTY
// 3 - TOKEN: LPAR
// 45 - TOKEN: NAMEDINDIVIDUAL
// 65 - TOKEN: NEGATIVEDATAPROPERTYASSERTION
// 64 - TOKEN: NEGATIVEOBJECTPROPERTYASSERTION
// 10 - TOKEN: NODEID
// 71 - TOKEN: OBJECTALLVALUESFROM
// 68 - TOKEN: OBJECTCOMPLEMENTOF
// 76 - TOKEN: OBJECTEXACTCARDINALITY
// 73 - TOKEN: OBJECTHASSELF
// 72 - TOKEN: OBJECTHASVALUE
// 66 - TOKEN: OBJECTINTERSECTIONOF
// 77 - TOKEN: OBJECTINVERSEOF
// 75 - TOKEN: OBJECTMAXCARDINALITY
// 74 - TOKEN: OBJECTMINCARDINALITY
// 69 - TOKEN: OBJECTONEOF
// 41 - TOKEN: OBJECTPROPERTY
// 38 - TOKEN: OBJECTPROPERTYASSERTION
// 37 - TOKEN: OBJECTPROPERTYCHAIN
// 39 - TOKEN: OBJECTPROPERTYDOMAIN
// 40 - TOKEN: OBJECTPROPERTYRANGE
// 70 - TOKEN: OBJECTSOMEVALUESFROM
// 67 - TOKEN: OBJECTUNIONOF
// 79 - TOKEN: ONTOLOGY
// 78 - TOKEN: PREFIX
// 11 - TOKEN: PREFIXNAME
// 53 - TOKEN: REFLEXIVEOBJECTPROPERTY
// 4 - TOKEN: RPAR
// 62 - TOKEN: SAMEINDIVIDUAL
// 14 - TOKEN: SUBANNOTATIONPROPERTYOF
// 46 - TOKEN: SUBCLASSOF
// 58 - TOKEN: SUBDATAPROPERTYOF
// 48 - TOKEN: SUBOBJECTPROPERTYOF
// 55 - TOKEN: SYMMETRICOBJECTPROPERTY
// 57 - TOKEN: TRANSITIVEOBJECTPROPERTY
// 8 - TOKEN: languageTag
// 6 - TOKEN: nonNegativeInteger
// 7 - TOKEN: quotedString
// 1000000000 - RULE: IRI
// 1000000001 - RULE: ontologyDocument
// 1000000002 - RULE: prefixDeclaration
// 1000000003 - RULE: Ontology
// 1000000004 - RULE: ontologyIRI
// 1000000005 - RULE: versionIRI
// 1000000006 - RULE: directlyImportsDocuments
// 1000000007 - RULE: ontologyAnnotations
// 1000000008 - RULE: axioms
// 1000000009 - RULE: Annotation
// 1000000010 - RULE: annotationAnnotations
// 1000000011 - RULE: AnnotationProperty
// 1000000012 - RULE: AnnotationValue
// 1000000013 - RULE: AnonymousIndividual
// 1000000014 - RULE: Literal
// 1000000015 - RULE: typedLiteral
// 1000000016 - RULE: stringLiteralNoLanguage
// 1000000017 - RULE: stringLiteralWithLanguage
// 1000000018 - RULE: lexicalForm
// 1000000019 - RULE: Datatype
// 1000000020 - RULE: Axiom
// 1000000021 - RULE: Declaration
// 1000000022 - RULE: ClassAxiom
// 1000000023 - RULE: ObjectPropertyAxiom
// 1000000024 - RULE: DataPropertyAxiom
// 1000000025 - RULE: DatatypeDefinition
// 1000000026 - RULE: HasKey
// 1000000027 - RULE: Assertion
// 1000000028 - RULE: AnnotationAxiom
// 1000000029 - RULE: axiomAnnotations
// 1000000030 - RULE: Entity
// 1000000031 - RULE: SubClassOf
// 1000000032 - RULE: subClassExpression
// 1000000033 - RULE: superClassExpression
// 1000000034 - RULE: EquivalentClasses
// 1000000035 - RULE: ClassExpressionList
// 1000000036 - RULE: ClassExpression
// 1000000037 - RULE: DisjointClasses
// 1000000038 - RULE: DisjointUnion
// 1000000039 - RULE: SubObjectPropertyOf
// 1000000040 - RULE: EquivalentObjectProperties
// 1000000041 - RULE: DisjointObjectProperties
// 1000000042 - RULE: InverseObjectProperties
// 1000000043 - RULE: ObjectPropertyDomain
// 1000000044 - RULE: ObjectPropertyRange
// 1000000045 - RULE: FunctionalObjectProperty
// 1000000046 - RULE: InverseFunctionalObjectProperty
// 1000000047 - RULE: ReflexiveObjectProperty
// 1000000048 - RULE: IrreflexiveObjectProperty
// 1000000049 - RULE: SymmetricObjectProperty
// 1000000050 - RULE: AsymmetricObjectProperty
// 1000000051 - RULE: TransitiveObjectProperty
// 1000000052 - RULE: ObjectPropertyExpressionList
// 1000000053 - RULE: SubDataPropertyOf
// 1000000054 - RULE: EquivalentDataProperties
// 1000000055 - RULE: DisjointDataProperties
// 1000000056 - RULE: DataPropertyDomain
// 1000000057 - RULE: DataPropertyRange
// 1000000058 - RULE: FunctionalDataProperty
// 1000000059 - RULE: DataPropertyExpressionList
// 1000000060 - RULE: DataRange
// 1000000061 - RULE: SameIndividual
// 1000000062 - RULE: DifferentIndividuals
// 1000000063 - RULE: ClassAssertion
// 1000000064 - RULE: ObjectPropertyAssertion
// 1000000065 - RULE: NegativeObjectPropertyAssertion
// 1000000066 - RULE: DataPropertyAssertion
// 1000000067 - RULE: NegativeDataPropertyAssertion
// 1000000068 - RULE: IndividualList
// 1000000069 - RULE: AnnotationAssertion
// 1000000070 - RULE: SubAnnotationPropertyOf
// 1000000071 - RULE: AnnotationPropertyDomain
// 1000000072 - RULE: AnnotationPropertyRange
// 1000000073 - RULE: Class
// 1000000074 - RULE: ObjectProperty
// 1000000075 - RULE: DataProperty
// 1000000076 - RULE: NamedIndividual
// 1000000077 - RULE: ObjectIntersectionOf
// 1000000078 - RULE: ObjectUnionOf
// 1000000079 - RULE: ObjectComplementOf
// 1000000080 - RULE: ObjectOneOf
// 1000000081 - RULE: ObjectSomeValuesFrom
// 1000000082 - RULE: ObjectAllValuesFrom
// 1000000083 - RULE: ObjectHasValue
// 1000000084 - RULE: ObjectHasSelf
// 1000000085 - RULE: ObjectMinCardinality
// 1000000086 - RULE: ObjectMaxCardinality
// 1000000087 - RULE: ObjectExactCardinality
// 1000000088 - RULE: DataSomeValuesFrom
// 1000000089 - RULE: DataAllValuesFrom
// 1000000090 - RULE: DataHasValue
// 1000000091 - RULE: DataMinCardinality
// 1000000092 - RULE: DataMaxCardinality
// 1000000093 - RULE: DataExactCardinality
// 1000000094 - RULE: disjointClassExpressions
// 1000000095 - RULE: subObjectPropertyExpression
// 1000000096 - RULE: propertyExpressionChain
// 1000000097 - RULE: superObjectPropertyExpression
// 1000000098 - RULE: ObjectPropertyExpression
// 1000000099 - RULE: InverseObjectProperty
// 1000000100 - RULE: subDataPropertyExpression
// 1000000101 - RULE: superDataPropertyExpression
// 1000000102 - RULE: DataPropertyExpression
// 1000000103 - RULE: DataIntersectionOf
// 1000000104 - RULE: DataUnionOf
// 1000000105 - RULE: DataComplementOf
// 1000000106 - RULE: DataOneOf
// 1000000107 - RULE: DatatypeRestriction
// 1000000108 - RULE: DataRangeList
// 1000000109 - RULE: LiteralList
// 1000000110 - RULE: crList
// 1000000111 - RULE: constrainingFacet
// 1000000112 - RULE: restrictionValue
// 1000000113 - RULE: Individual
// 1000000114 - RULE: sourceIndividual
// 1000000115 - RULE: targetIndividual
// 1000000116 - RULE: targetValue
// 1000000117 - RULE: AnnotationSubject
char* getSymbolName(int id) {
 switch (id) {
  case 1000000000: return "IRI";
  case 1000000001: return "ontologyDocument";
  case 1000000002: return "prefixDeclaration";
  case 1000000003: return "Ontology";
  case 1000000004: return "ontologyIRI";
  case 1000000005: return "versionIRI";
  case 1000000006: return "directlyImportsDocuments";
  case 1000000007: return "ontologyAnnotations";
  case 1000000008: return "axioms";
  case 1000000009: return "Annotation";
  case 1000000010: return "annotationAnnotations";
  case 1000000011: return "AnnotationProperty";
  case 1000000012: return "AnnotationValue";
  case 1000000013: return "AnonymousIndividual";
  case 1000000014: return "Literal";
  case 1000000015: return "typedLiteral";
  case 1000000016: return "stringLiteralNoLanguage";
  case 1000000017: return "stringLiteralWithLanguage";
  case 1000000018: return "lexicalForm";
  case 1000000019: return "Datatype";
  case 1000000020: return "Axiom";
  case 1000000021: return "Declaration";
  case 1000000022: return "ClassAxiom";
  case 1000000023: return "ObjectPropertyAxiom";
  case 1000000024: return "DataPropertyAxiom";
  case 1000000025: return "DatatypeDefinition";
  case 1000000026: return "HasKey";
  case 1000000027: return "Assertion";
  case 1000000028: return "AnnotationAxiom";
  case 1000000029: return "axiomAnnotations";
  case 1000000030: return "Entity";
  case 1000000031: return "SubClassOf";
  case 1000000032: return "subClassExpression";
  case 1000000033: return "superClassExpression";
  case 1000000034: return "EquivalentClasses";
  case 1000000035: return "ClassExpressionList";
  case 1000000036: return "ClassExpression";
  case 1000000037: return "DisjointClasses";
  case 1000000038: return "DisjointUnion";
  case 1000000039: return "SubObjectPropertyOf";
  case 1000000040: return "EquivalentObjectProperties";
  case 1000000041: return "DisjointObjectProperties";
  case 1000000042: return "InverseObjectProperties";
  case 1000000043: return "ObjectPropertyDomain";
  case 1000000044: return "ObjectPropertyRange";
  case 1000000045: return "FunctionalObjectProperty";
  case 1000000046: return "InverseFunctionalObjectProperty";
  case 1000000047: return "ReflexiveObjectProperty";
  case 1000000048: return "IrreflexiveObjectProperty";
  case 1000000049: return "SymmetricObjectProperty";
  case 1000000050: return "AsymmetricObjectProperty";
  case 1000000051: return "TransitiveObjectProperty";
  case 1000000052: return "ObjectPropertyExpressionList";
  case 1000000053: return "SubDataPropertyOf";
  case 1000000054: return "EquivalentDataProperties";
  case 1000000055: return "DisjointDataProperties";
  case 1000000056: return "DataPropertyDomain";
  case 1000000057: return "DataPropertyRange";
  case 1000000058: return "FunctionalDataProperty";
  case 1000000059: return "DataPropertyExpressionList";
  case 1000000060: return "DataRange";
  case 1000000061: return "SameIndividual";
  case 1000000062: return "DifferentIndividuals";
  case 1000000063: return "ClassAssertion";
  case 1000000064: return "ObjectPropertyAssertion";
  case 1000000065: return "NegativeObjectPropertyAssertion";
  case 1000000066: return "DataPropertyAssertion";
  case 1000000067: return "NegativeDataPropertyAssertion";
  case 1000000068: return "IndividualList";
  case 1000000069: return "AnnotationAssertion";
  case 1000000070: return "SubAnnotationPropertyOf";
  case 1000000071: return "AnnotationPropertyDomain";
  case 1000000072: return "AnnotationPropertyRange";
  case 1000000073: return "Class";
  case 1000000074: return "ObjectProperty";
  case 1000000075: return "DataProperty";
  case 1000000076: return "NamedIndividual";
  case 1000000077: return "ObjectIntersectionOf";
  case 1000000078: return "ObjectUnionOf";
  case 1000000079: return "ObjectComplementOf";
  case 1000000080: return "ObjectOneOf";
  case 1000000081: return "ObjectSomeValuesFrom";
  case 1000000082: return "ObjectAllValuesFrom";
  case 1000000083: return "ObjectHasValue";
  case 1000000084: return "ObjectHasSelf";
  case 1000000085: return "ObjectMinCardinality";
  case 1000000086: return "ObjectMaxCardinality";
  case 1000000087: return "ObjectExactCardinality";
  case 1000000088: return "DataSomeValuesFrom";
  case 1000000089: return "DataAllValuesFrom";
  case 1000000090: return "DataHasValue";
  case 1000000091: return "DataMinCardinality";
  case 1000000092: return "DataMaxCardinality";
  case 1000000093: return "DataExactCardinality";
  case 1000000094: return "disjointClassExpressions";
  case 1000000095: return "subObjectPropertyExpression";
  case 1000000096: return "propertyExpressionChain";
  case 1000000097: return "superObjectPropertyExpression";
  case 1000000098: return "ObjectPropertyExpression";
  case 1000000099: return "InverseObjectProperty";
  case 1000000100: return "subDataPropertyExpression";
  case 1000000101: return "superDataPropertyExpression";
  case 1000000102: return "DataPropertyExpression";
  case 1000000103: return "DataIntersectionOf";
  case 1000000104: return "DataUnionOf";
  case 1000000105: return "DataComplementOf";
  case 1000000106: return "DataOneOf";
  case 1000000107: return "DatatypeRestriction";
  case 1000000108: return "DataRangeList";
  case 1000000109: return "LiteralList";
  case 1000000110: return "crList";
  case 1000000111: return "constrainingFacet";
  case 1000000112: return "restrictionValue";
  case 1000000113: return "Individual";
  case 1000000114: return "sourceIndividual";
  case 1000000115: return "targetIndividual";
  case 1000000116: return "targetValue";
  case 1000000117: return "AnnotationSubject";
  case 1: return "$COMMENT";
  case 0: return "$WHITESPACE";
  case 9: return "ABBREVIATEDIRI";
  case 18: return "ANNOTATION";
  case 13: return "ANNOTATIONASSERTION";
  case 17: return "ANNOTATIONPROPERTY";
  case 15: return "ANNOTATIONPROPERTYDOMAIN";
  case 16: return "ANNOTATIONPROPERTYRANGE";
  case 56: return "ASYMMETRICOBJECTPROPERTY";
  case 35: return "CLASS";
  case 34: return "CLASSASSERTION";
  case 22: return "DATAALLVALUESFROM";
  case 29: return "DATACOMPLEMENTOF";
  case 26: return "DATAEXACTCARDINALITY";
  case 23: return "DATAHASVALUE";
  case 27: return "DATAINTERSECTIONOF";
  case 25: return "DATAMAXCARDINALITY";
  case 24: return "DATAMINCARDINALITY";
  case 30: return "DATAONEOF";
  case 44: return "DATAPROPERTY";
  case 20: return "DATAPROPERTYASSERTION";
  case 42: return "DATAPROPERTYDOMAIN";
  case 43: return "DATAPROPERTYRANGE";
  case 21: return "DATASOMEVALUESFROM";
  case 36: return "DATATYPE";
  case 32: return "DATATYPEDEFINITION";
  case 31: return "DATATYPERESTRICTION";
  case 28: return "DATAUNIONOF";
  case 19: return "DECLARATION";
  case 5: return "DHAT";
  case 63: return "DIFFERENTINDIVIDUALS";
  case 81: return "DISJOINTCLASSES";
  case 60: return "DISJOINTDATAPROPERTIES";
  case 50: return "DISJOINTOBJECTPROPERTIES";
  case 82: return "DISJOINTUNION";
  case 2: return "EQ";
  case 47: return "EQUIVALENTCLASSES";
  case 59: return "EQUIVALENTDATAPROPERTIES";
  case 49: return "EQUIVALENTOBJECTPROPERTIES";
  case 12: return "FULLIRI";
  case 61: return "FUNCTIONALDATAPROPERTY";
  case 51: return "FUNCTIONALOBJECTPROPERTY";
  case 33: return "HASKEY";
  case 80: return "IMPORT";
  case 52: return "INVERSEFUNCTIONALOBJECTPROPERTY";
  case 83: return "INVERSEOBJECTPROPERTIES";
  case 54: return "IRREFLEXIVEOBJECTPROPERTY";
  case 3: return "LPAR";
  case 45: return "NAMEDINDIVIDUAL";
  case 65: return "NEGATIVEDATAPROPERTYASSERTION";
  case 64: return "NEGATIVEOBJECTPROPERTYASSERTION";
  case 10: return "NODEID";
  case 71: return "OBJECTALLVALUESFROM";
  case 68: return "OBJECTCOMPLEMENTOF";
  case 76: return "OBJECTEXACTCARDINALITY";
  case 73: return "OBJECTHASSELF";
  case 72: return "OBJECTHASVALUE";
  case 66: return "OBJECTINTERSECTIONOF";
  case 77: return "OBJECTINVERSEOF";
  case 75: return "OBJECTMAXCARDINALITY";
  case 74: return "OBJECTMINCARDINALITY";
  case 69: return "OBJECTONEOF";
  case 41: return "OBJECTPROPERTY";
  case 38: return "OBJECTPROPERTYASSERTION";
  case 37: return "OBJECTPROPERTYCHAIN";
  case 39: return "OBJECTPROPERTYDOMAIN";
  case 40: return "OBJECTPROPERTYRANGE";
  case 70: return "OBJECTSOMEVALUESFROM";
  case 67: return "OBJECTUNIONOF";
  case 79: return "ONTOLOGY";
  case 78: return "PREFIX";
  case 11: return "PREFIXNAME";
  case 53: return "REFLEXIVEOBJECTPROPERTY";
  case 4: return "RPAR";
  case 62: return "SAMEINDIVIDUAL";
  case 14: return "SUBANNOTATIONPROPERTYOF";
  case 46: return "SUBCLASSOF";
  case 58: return "SUBDATAPROPERTYOF";
  case 48: return "SUBOBJECTPROPERTYOF";
  case 55: return "SYMMETRICOBJECTPROPERTY";
  case 57: return "TRANSITIVEOBJECTPROPERTY";
  case 8: return "languageTag";
  case 6: return "nonNegativeInteger";
  case 7: return "quotedString";
  default: return "__INVALID_SYMBOL__";
 }
}

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <errno.h>

unsigned int next_utf8(const char * text, int * pos) {
 register unsigned int c,d;
 c = text[(*pos)++];
 if ((c & 0x80) == 0) return c;
 if ((c & 0xE0) == 0xC0) {
  c &= 0x3F;
  c <<= 6;
  d = text[(*pos)++];
  if ((d & 0x80) == 0) goto utf8_error;
  c |= (d & 0x3F);
  return c;
 }
 if ((c & 0xF0) == 0xE0) {
  c &= 0x1F;
  c <<= 6;
  d = text[(*pos)++];
  if ((d & 0x80) == 0) goto utf8_error;
  c |= (d & 0x3F);
  c <<= 6;
  d = text[(*pos)++];
  if ((d & 0x80) == 0) goto utf8_error;
  c |= (d & 0x3F);
  return c;
 }
 if ((c & 0xF8) == 0xF0) {
  c &= 0x0F;
  c <<= 6;
  d = text[(*pos)++];
  if ((d & 0x80) == 0) goto utf8_error;
  c |= (d & 0x3F);
  c <<= 6;
  d = text[(*pos)++];
  if ((d & 0x80) == 0) goto utf8_error;
  c |= (d & 0x3F);
  c <<= 6;
  d = text[(*pos)++];
  if ((d & 0x80) == 0) goto utf8_error;
  c |= (d & 0x3F);
  return c;
 }
 utf8_error:
 return 0xFFFD;
}

unsigned int strlen_utf8(const char * text) {
 int pos = 0;
 while (next_utf8(text, &pos) != 0);
 return (pos-1);
}

typedef struct _stack_int {
 int* data;
 unsigned int size;
 int top;
} stack_int;

void stack_int_init(stack_int* s) {
 s->size = 32;
 s->data = (int*) malloc(sizeof(int) * s->size);
 s->top = 0;
}

void stack_int_free(stack_int* s) {
 if (s != NULL && s->data != NULL) free(s->data);
}

int stack_int_grow(stack_int* s) {
 s->size *= 2;
 void* ndata = realloc(s->data, sizeof(int) * s->size);
 if (ndata == NULL) s->size /= 2;
 else s->data = (int*) ndata;
 return (s->data == ndata);
}

void stack_int_push(stack_int* s, int val) {
 if (s->top >= s->size && !stack_int_grow(s)) {
  printf("Could not allocate enough memory for a regex stack.");
  abort();
 }
 s->data[s->top++] = val;
}

int stack_int_pop(stack_int *s) {
 if (s->top > 0) return s->data[--s->top];
 return 0;
}

typedef union _chainptr {
 int (*func)();
 union _chainptr * subchain;
} chainptr;
int CHAIN_JUMP() { return -1; }
#define chain_next(text, chain) \
( \
	chain[0].func == CHAIN_JUMP ? \
	( \
		chain[1].subchain[0].func != NULL ? \
		( \
			chain[1].subchain[1].func != NULL ? \
				((int (*)(const char*, chainptr*))chain[1].subchain[0].func)(text, &chain[1].subchain[1]) : \
				((int (*)(const char*))chain[1].subchain[0].func)(text) \
		) : 0 \
	) : ( \
		chain[0].func != NULL ? \
		( \
			chain[1].func != NULL ? \
				((int (*)(const char*, chainptr*))chain[0].func)(text, &chain[1]) : \
				((int (*)(const char*))chain[0].func)(text) \
		) : 0 \
	) \
)

ast_node* ast_new_node() {
 ast_node* node = (ast_node*)malloc(sizeof(ast_node));
 node->tokenId = -1;
 node->data = NULL;
 node->nextSibling = NULL;
 node->firstChild = NULL;
 return node;
}

void ast_add_child(ast_node* parent, ast_node* child) {
 child->nextSibling = parent->firstChild;
 parent->firstChild = child;
}

void ast_add_sibling(ast_node* sibling, ast_node* sibling_new) {
 sibling_new->nextSibling = sibling->nextSibling;
 sibling->nextSibling = sibling_new;
}

void ast_free(ast_node* node) {
 if (node == NULL) return;
 ast_free(node->firstChild);
 ast_free(node->nextSibling);
 free(node);
}

void ast_clear(ast_node* node) {
 ast_free(node->firstChild);
 ast_free(node->nextSibling);
 node->firstChild = 0;
 node->nextSibling = 0;
}

ast_node* ast_invert_siblings(ast_node* node, ast_node* newNextSibling) {
 ast_node* next;
 while (node != 0) {
  node->firstChild = ast_invert_siblings(node->firstChild, NULL);
  next = node->nextSibling;
  node->nextSibling = newNextSibling;
  newNextSibling = node;
  node = next;
 }
 return newNextSibling;
}
token_list* token_list_init(int num_tokens, int data_len) {
 token_list* tokens = (token_list*) malloc(sizeof(token_list));
 tokens->items = (token*) malloc(num_tokens * sizeof(token));
 tokens->data = (char*) malloc(data_len + num_tokens);
 tokens->data_ptr = tokens->data;
 tokens->count = 0;
 return tokens;
}

void token_list_free(token_list* tokens) {
 free(tokens->items);
 free(tokens->data);
 free(tokens);
}

void token_list_add(token_list* tokens, int type, const char* value, int value_len) {
 token* tok = &tokens->items[tokens->count];
 tok->type = type;
 tok->value = tokens->data_ptr;
 memcpy(tok->value, value, value_len);
 tok->value[value_len] = 0;
 tokens->data_ptr += value_len+1;
 tokens->count++;
}

parse_result* parse_result_new() {
 parse_result* pr = (parse_result*) malloc(sizeof(parse_result));
 if (pr != NULL) memset(pr, 0, sizeof(parse_result));
 return pr;
}

void parse_result_free(parse_result* pr) {
 if (pr->ast != NULL) ast_free(pr->ast);
 if (pr->tokens != NULL) token_list_free(pr->tokens);
 free(pr);
}




//-------------------------------------
int fn_sq_ch_34_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295_ch_34(const char* text);
int cf_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_al_sq_ch_40(const char* text);
int cf_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(const char* text);
int cf_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int fn_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58(const char* text);
int fn_ch_58(const char* text);
int fn_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int fn_sq_cl_48_57(const char* text);
int cf_cl_48_57(const char* text, chainptr *chain);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101(const char* text);
int cf_ch_49(const char* text, chainptr *chain);
int cf_ch_73(const char* text, chainptr *chain);
int fn_sq_ch_50_cl_48_52_cl_48_57(const char* text);
int fn_al_sq_ch_67_ch_108_ch_97_ch_115_ch_115(const char* text);
int cf_ch_64(const char* text, chainptr *chain);
int cf_cl_48_52(const char* text, chainptr *chain);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int cf_ch_45(const char* text, chainptr *chain);
int cf_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int cf_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64(const char* text, chainptr *chain);
int fn_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(const char* text);
int fn_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text);
int cf_cl_65_91_97_122(const char* text, chainptr *chain);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text);
int fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text);
int fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_al_sq_ch_72_ch_97_ch_115_ch_75_ch_101_ch_121(const char* text);
int fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(const char* text);
int fn_ch_61(const char* text);
int fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text);
int fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(const char* text);
int fn_al_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int cf_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_105_ch_102_ch_102_ch_101_ch_114_ch_101_ch_110_ch_116_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108_ch_115(const char* text);
int fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(const char* text);
int cf_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int cf_ch_118(const char* text, chainptr *chain);
int fn_al_sq_ch_94_ch_94(const char* text);
int fn_sq_ch_83_ch_117_ch_98_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text);
int fn_sq_ch_94_ch_94(const char* text);
int fn_al_sq_ch_68_ch_101_ch_99_ch_108_ch_97_ch_114_ch_97_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_al_sq_qtg_1_4294967295_cl_9_10_13_13_32_32(const char* text);
int fn_sq_ch_68_ch_101_ch_99_ch_108_ch_97_ch_114_ch_97_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_82_ch_101_ch_115_ch_116_ch_114_ch_105_ch_99_ch_116_ch_105_ch_111_ch_110(const char* text);
int cf_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text, chainptr *chain);
int cf_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int cf_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_82_ch_101_ch_115_ch_116_ch_114_ch_105_ch_99_ch_116_ch_105_ch_111_ch_110(const char* text);
int cf_ch_83(const char* text, chainptr *chain);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_79_ch_110_ch_101_ch_79_ch_102(const char* text);
int fn_al_sq_ch_41(const char* text);
int cf_ch_102(const char* text, chainptr *chain);
int cf_ch_109(const char* text, chainptr *chain);
int fn_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_68_ch_101_ch_102_ch_105_ch_110_ch_105_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text);
int cf_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(const char* text);
int cf_ch_82(const char* text, chainptr *chain);
int fn_sq_cl_1_33_35_4294967295(const char* text);
int fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110(const char* text);
int fn_ch_109(const char* text);
int fn_al_sq_ch_35_qtg_1_4294967295_cl_1_9_11_12_14_4294967295(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text);
int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110(const char* text);
int cf_ch_121(const char* text, chainptr *chain);
int cf_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text);
int fn_al_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int cf_ch_112(const char* text, chainptr *chain);
int cf_ch_114(const char* text, chainptr *chain);
int cf_ch_85(const char* text, chainptr *chain);
int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_cl_48_53(const char* text);
int fn_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46(const char* text);
int fn_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text);
int cf_ch_115(const char* text, chainptr *chain);
int cf_ch_116(const char* text, chainptr *chain);
int cf_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int cf_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_sq_qtg_1_4294967295_cl_9_10_13_13_32_32(const char* text);
int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text);
int fn_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int cf_ch_47(const char* text, chainptr *chain);
int fn_sq_cl_49_57_cl_48_57(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int cf_ch_101(const char* text, chainptr *chain);
int fn_ch_121(const char* text);
int cf_ch_50(const char* text, chainptr *chain);
int fn_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text);
int fn_cl_65_91_97_122(const char* text);
int cf_ch_80(const char* text, chainptr *chain);
int fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int cf_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text, chainptr *chain);
int cf_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122(const char* text, chainptr *chain);
int cf_ch_120(const char* text, chainptr *chain);
int cf_cl_48_57_65_87_89_90_97_119_121_122(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110(const char* text);
int fn_cl_9_10_13_13_32_32(const char* text);
int fn_al_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58(const char* text);
int fn_al_sq_ch_83_ch_97_ch_109_ch_101_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(const char* text);
int cf_ch_97(const char* text, chainptr *chain);
int fn_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295(const char* text, chainptr *chain);
int fn_sq_ch_35_qtg_1_4294967295_cl_1_9_11_12_14_4294967295(const char* text);
int fn_qtg_1_8_cl_48_57_65_91_97_122(const char* text);
int fn_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int fn_qtg_5_8_cl_65_91_97_122(const char* text);
int fn_sq_ch_80_ch_114_ch_101_ch_102_ch_105_ch_120(const char* text);
int fn_cl_43_43_45_46_48_57_65_91_97_122(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text);
int cf_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text, chainptr *chain);
int cf_ch_108(const char* text, chainptr *chain);
int fn_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64(const char* text);
int fn_sq_ch_67_ch_108_ch_97_ch_115_ch_115(const char* text);
int fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int cf_ch_111(const char* text, chainptr *chain);
int fn_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_79_ch_110_ch_101_ch_79_ch_102(const char* text);
int fn_sq_ch_58_qtg_0_4294967295_cl_48_57(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int fn_ch_62(const char* text);
int fn_al_sq_ch_83_ch_117_ch_98_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text);
int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text);
int fn_qtg_1_4294967295_cl_1_9_11_12_14_4294967295(const char* text);
int fn_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int cf_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text, chainptr *chain);
int fn_cl_1_33_35_4294967295(const char* text);
int fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text);
int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_ch_79(const char* text, chainptr *chain);
int cf_ch_68(const char* text, chainptr *chain);
int fn_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_ch_64(const char* text);
int cf_ch_105(const char* text, chainptr *chain);
int fn_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int cf_ch_113(const char* text, chainptr *chain);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int cf_ch_103(const char* text, chainptr *chain);
int cf_ch_65(const char* text, chainptr *chain);
int fn_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_cl_1_9_11_12_14_4294967295(const char* text);
int cf_ch_34(const char* text, chainptr *chain);
int fn_cl_48_57(const char* text);
int cf_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(const char* text);
int fn_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int cf_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_40(const char* text);
int fn_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int fn_sq_ch_41(const char* text);
int cf_ch_106(const char* text, chainptr *chain);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(const char* text);
int cf_cl_49_57(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text);
int cf_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text);
int fn_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_ch_92(const char* text, chainptr *chain);
int fn_sq_ch_65_ch_115_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122(const char* text);
int fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_al_sq_ch_83_ch_117_ch_98_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text);
int fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text);
int fn_al_sq_ch_65_ch_115_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int cf_ch_67(const char* text, chainptr *chain);
int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text);
int fn_sq_ch_83_ch_97_ch_109_ch_101_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(const char* text);
int fn_ch_115(const char* text);
int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text);
int cf_ch_69(const char* text, chainptr *chain);
int fn_sq_ch_82_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int cf_ch_53(const char* text, chainptr *chain);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int cf_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int cf_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_73_ch_109_ch_112_ch_111_ch_114_ch_116(const char* text);
int fn_al_sq_ch_73_ch_114_ch_114_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_67_ch_108_ch_97_ch_115_ch_115_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text);
int fn_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_ch_60(const char* text, chainptr *chain);
int fn_sq_ch_49_cl_48_57_cl_48_57(const char* text);
int fn_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int cf_ch_70(const char* text, chainptr *chain);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(const char* text);
int fn_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58(const char* text);
int fn_ch_101(const char* text);
int cf_ch_75(const char* text, chainptr *chain);
int fn_ch_102(const char* text);
int fn_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text);
int fn_al_sq_ch_79_ch_110_ch_116_ch_111_ch_108_ch_111_ch_103_ch_121(const char* text);
int cf_ch_100(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(const char* text);
int cf_ch_72(const char* text, chainptr *chain);
int fn_ch_94(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_68_ch_101_ch_102_ch_105_ch_110_ch_105_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int cf_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122(const char* text, chainptr *chain);
int cf_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int cf_ch_98(const char* text, chainptr *chain);
int fn_qtg_2_2_cl_65_91_97_122(const char* text);
int fn_qtg_5_8_cl_48_57_65_91_97_122(const char* text);
int cf_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_ch_58(const char* text, chainptr *chain);
int cf_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int cf_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_83_ch_101_ch_108_ch_102(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text);
int cf_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_qtg_1_6_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58(const char* text);
int cf_ch_95(const char* text, chainptr *chain);
int fn_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_83_ch_117_ch_98_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text);
int cf_ch_86(const char* text, chainptr *chain);
int cf_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_ch_110(const char* text);
int cf_ch_46(const char* text, chainptr *chain);
int fn_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(const char* text);
int fn_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(const char* text);
int cf_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(const char* text, chainptr *chain);
int fn_ch_40(const char* text);
int fn_sq_ch_83_ch_117_ch_98_ch_67_ch_108_ch_97_ch_115_ch_115_ch_79_ch_102(const char* text);
int cf_ch_35(const char* text, chainptr *chain);
int fn_ch_93(const char* text);
int fn_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93(const char* text);
int fn_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text);
int fn_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text);
int fn_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122(const char* text);
int cf_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int cf_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57(const char* text, chainptr *chain);
int fn_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295(const char* text);
int fn_sq_ch_64_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text);
int fn_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46(const char* text, chainptr *chain);
int fn_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text);
int cf_ch_63(const char* text, chainptr *chain);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_67_ch_104_ch_97_ch_105_ch_110(const char* text);
int fn_qtg_2_8_cl_48_57_65_91_97_122(const char* text);
int fn_sq_ch_68_ch_105_ch_102_ch_102_ch_101_ch_114_ch_101_ch_110_ch_116_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108_ch_115(const char* text);
int fn_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109(const char* text);
int fn_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_84_ch_114_ch_97_ch_110_ch_115_ch_105_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int cf_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122(const char* text, chainptr *chain);
int fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int cf_ch_117(const char* text, chainptr *chain);
int fn_al_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_sq_ch_79_ch_110_ch_116_ch_111_ch_108_ch_111_ch_103_ch_121(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text);
int fn_al_sq_ch_80_ch_114_ch_101_ch_102_ch_105_ch_120(const char* text);
int cf_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain);
int fn_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text);
int fn_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122(const char* text);
int cf_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain);
int fn_sq_qtg_5_8_cl_65_91_97_122(const char* text);
int fn_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int fn_al_sq_ch_60_cl_65_91_97_122_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122_ch_58_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_62(const char* text);
int fn_sq_ch_61(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text);
int fn_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int cf_ch_110(const char* text, chainptr *chain);
int cf_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122(const char* text, chainptr *chain);
int fn_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_sq_ch_72_ch_97_ch_115_ch_75_ch_101_ch_121(const char* text);
int fn_al_sq_qtg_1_4294967295_cl_48_57(const char* text);
int fn_sq_ch_67_ch_108_ch_97_ch_115_ch_115_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_ch_116(const char* text);
int fn_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_al_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_sq_ch_73_ch_114_ch_114_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_34_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295_ch_34(const char* text);
int cf_ch_78(const char* text, chainptr *chain);
int fn_ch_108(const char* text);
int cf_ch_94(const char* text, chainptr *chain);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_83_ch_101_ch_108_ch_102(const char* text);
int fn_al_sq_ch_61(const char* text);
int cf_ch_99(const char* text, chainptr *chain);
int fn_sq_ch_78_ch_97_ch_109_ch_101_ch_100_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(const char* text);
int fn_al_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_78_ch_97_ch_109_ch_101_ch_100_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(const char* text);
int cf_ch_37(const char* text, chainptr *chain);
int fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int fn_al_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_sq_ch_83_ch_117_ch_98_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text);
int fn_al_sq_ch_95_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int fn_al_sq_ch_83_ch_117_ch_98_ch_67_ch_108_ch_97_ch_115_ch_115_ch_79_ch_102(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text);
int fn_sq_ch_60_cl_65_91_97_122_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122_ch_58_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_62(const char* text);
int fn_sq_qtg_4_4_cl_65_91_97_122(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(const char* text);
int fn_sq_ch_50_ch_53_cl_48_53(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(const char* text);
int fn_sq_qtg_1_4294967295_cl_48_57(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_102(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_102(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text);
int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_79_ch_110_ch_101_ch_79_ch_102(const char* text);
int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_79_ch_110_ch_101_ch_79_ch_102(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_67_ch_104_ch_97_ch_105_ch_110(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text);
int fn_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text);
int fn_cl_46_46(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text);
int fn_sq_ch_95_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text);
int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text);
int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text);
int fn_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text);
int fn_ch_120(const char* text);
int fn_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int fn_al_sq_ch_82_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_ch_41(const char* text);
int fn_al_sq_ch_83_ch_117_ch_98_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text);
int fn_sq_ch_83_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int fn_al_sq_ch_83_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int cf_ch_91(const char* text, chainptr *chain);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text);
int fn_sq_qtg_3_3_cl_48_57(const char* text);
int fn_cl_48_57_65_91_97_122(const char* text);
int cf_ch_84(const char* text, chainptr *chain);
int cf_ch_104(const char* text, chainptr *chain);
int fn_al_sq_ch_84_ch_114_ch_97_ch_110_ch_115_ch_105_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text);
int cf_qtg_2_3_cl_65_91_97_122(const char* text, chainptr *chain);
int fn_qtg_3_3_cl_65_91_97_122(const char* text);
int fn_sq_ch_45_qtg_4_4_cl_65_91_97_122(const char* text);
int fn_sq_ch_45_qtg_3_3_cl_65_91_97_122(const char* text);
int fn_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122(const char* text);
int fn_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int fn_qtg_4_4_cl_65_91_97_122(const char* text);
int fn_sq_ch_45_qtg_2_2_cl_65_91_97_122(const char* text);
int cf_ch_77(const char* text, chainptr *chain);
int fn_qtg_3_3_cl_48_57(const char* text);
int fn_al_sq_ch_73_ch_109_ch_112_ch_111_ch_114_ch_116(const char* text);
int cf_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57(const char* text, chainptr *chain);
int fn_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text);
int fn_qtg_3_3_cl_48_57_65_91_97_122(const char* text);
int fn_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122(const char* text);
int fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text);
int fn_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(const char* text);
int cf_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(const char* text, chainptr *chain);
int fn_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text);
int fn_al_sq_ch_64_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text);
int fn_qtg_1_4294967295_cl_48_57(const char* text);
int fn_qtg_1_4294967295_cl_9_10_13_13_32_32(const char* text);
int fn_ch_92(const char* text);
int fn_qtg_0_4294967295_cl_48_57(const char* text);
int fn_sq_ch_92_ch_92(const char* text);
int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text);
int fn_ch_34(const char* text);
int fn_sq_ch_92_ch_34(const char* text);
int cf_ch_35(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 35) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_cl_1_9_11_12_14_4294967295(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 1 && c <= 9) return pos;
 if (c >= 11 && c <= 12) return pos;
 if (c >= 14 && c <= 4294967295) return pos;
 return -1;
}
int fn_qtg_1_4294967295_cl_1_9_11_12_14_4294967295(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_cl_1_9_11_12_14_4294967295(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 1) return pos;
 return -1;
}

chainptr fsq_ch_35_qtg_1_4294967295_cl_1_9_11_12_14_4294967295[] = {
 {(int (*)())(cf_ch_35)},
 {(int (*)())(fn_qtg_1_4294967295_cl_1_9_11_12_14_4294967295)},
 {NULL}
};

int fn_sq_ch_35_qtg_1_4294967295_cl_1_9_11_12_14_4294967295(const char* text) {
 return chain_next(text, fsq_ch_35_qtg_1_4294967295_cl_1_9_11_12_14_4294967295);
}

int fn_al_sq_ch_35_qtg_1_4294967295_cl_1_9_11_12_14_4294967295(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_35_qtg_1_4294967295_cl_1_9_11_12_14_4294967295(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_cl_9_10_13_13_32_32(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 9 && c <= 10) return pos;
 if (c >= 13 && c <= 13) return pos;
 if (c >= 32 && c <= 32) return pos;
 return -1;
}
int fn_qtg_1_4294967295_cl_9_10_13_13_32_32(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_cl_9_10_13_13_32_32(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 1) return pos;
 return -1;
}

chainptr fsq_qtg_1_4294967295_cl_9_10_13_13_32_32[] = {
 {(int (*)())(fn_qtg_1_4294967295_cl_9_10_13_13_32_32)},
 {NULL}
};

int fn_sq_qtg_1_4294967295_cl_9_10_13_13_32_32(const char* text) {
 return chain_next(text, fsq_qtg_1_4294967295_cl_9_10_13_13_32_32);
}

int fn_al_sq_qtg_1_4294967295_cl_9_10_13_13_32_32(const char* text) {
	int pos = 0;
	pos = fn_sq_qtg_1_4294967295_cl_9_10_13_13_32_32(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text, chainptr *chain) {
 int pos = 0, pchain = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 65 && c <= 91) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 97 && c <= 122) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 192 && c <= 214) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 216 && c <= 246) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 248 && c <= 767) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 880 && c <= 893) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 895 && c <= 8191) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 8204 && c <= 8205) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 8304 && c <= 8591) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 11264 && c <= 12271) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 12289 && c <= 55295) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 63744 && c <= 64975) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 65008 && c <= 65533) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 65536 && c <= 983039) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 return -1;
}

int fn_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 45 && c <= 46) return pos;
 if (c >= 48 && c <= 57) return pos;
 if (c >= 65 && c <= 91) return pos;
 if (c >= 95 && c <= 95) return pos;
 if (c >= 97 && c <= 122) return pos;
 if (c >= 183 && c <= 183) return pos;
 if (c >= 192 && c <= 214) return pos;
 if (c >= 216 && c <= 246) return pos;
 if (c >= 248 && c <= 893) return pos;
 if (c >= 895 && c <= 8191) return pos;
 if (c >= 8204 && c <= 8205) return pos;
 if (c >= 8255 && c <= 8256) return pos;
 if (c >= 8304 && c <= 8591) return pos;
 if (c >= 11264 && c <= 12271) return pos;
 if (c >= 12289 && c <= 55295) return pos;
 if (c >= 63744 && c <= 64975) return pos;
 if (c >= 65008 && c <= 65533) return pos;
 if (c >= 65536 && c <= 983039) return pos;
 return -1;
}
int cf_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while ((p = fn_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 45 && c <= 45) return pos;
 if (c >= 48 && c <= 57) return pos;
 if (c >= 65 && c <= 91) return pos;
 if (c >= 95 && c <= 95) return pos;
 if (c >= 97 && c <= 122) return pos;
 if (c >= 183 && c <= 183) return pos;
 if (c >= 192 && c <= 214) return pos;
 if (c >= 216 && c <= 246) return pos;
 if (c >= 248 && c <= 893) return pos;
 if (c >= 895 && c <= 8191) return pos;
 if (c >= 8204 && c <= 8205) return pos;
 if (c >= 8255 && c <= 8256) return pos;
 if (c >= 8304 && c <= 8591) return pos;
 if (c >= 11264 && c <= 12271) return pos;
 if (c >= 12289 && c <= 55295) return pos;
 if (c >= 63744 && c <= 64975) return pos;
 if (c >= 65008 && c <= 65533) return pos;
 if (c >= 65536 && c <= 983039) return pos;
 return -1;
}
chainptr fsq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039[] = {
 {(int (*)())(cf_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {(int (*)())(fn_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {NULL}
};

int fn_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
 return chain_next(text, fsq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039);
}

int fn_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 1 && (p = fn_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039[] = {
 {(int (*)())(cf_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {(int (*)())(fn_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {NULL}
};

int fn_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
 return chain_next(text, fsq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039);
}

int cf_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_ch_58(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 58) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text, chainptr *chain) {
 int pos = 0, pchain = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 48 && c <= 57) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 65 && c <= 91) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 95 && c <= 95) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 97 && c <= 122) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 192 && c <= 214) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 216 && c <= 246) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 248 && c <= 767) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 880 && c <= 893) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 895 && c <= 8191) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 8204 && c <= 8205) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 8304 && c <= 8591) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 11264 && c <= 12271) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 12289 && c <= 55295) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 63744 && c <= 64975) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 65008 && c <= 65533) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 65536 && c <= 983039) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 return -1;
}

chainptr fsq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039[] = {
 {(int (*)())(cf_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {(int (*)())(fn_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039);
}

int fn_al_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
	int pos = 0;
	pos = fn_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_65(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 65) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_110(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 110) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_111(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 111) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_116(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 116) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_97(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 97) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_105(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 105) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_ch_110(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 110) return pos;
 return -1;
}

chainptr fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_115(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 115) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_101(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 101) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_114(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 114) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_80(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 80) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_112(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 112) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_ch_121(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 121) return pos;
 return -1;
}

chainptr fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_121(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 121) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_68(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 68) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_109(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 109) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110[] = {
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text) {
 return chain_next(text, fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110);
}

int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_82(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 82) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_103(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 103) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_ch_101(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 101) return pos;
 return -1;
}

chainptr fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101[] = {
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_82)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_103)},
 {(int (*)())(fn_ch_101)},
 {NULL}
};

int fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text) {
 return chain_next(text, fsq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101);
}

int fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_99(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 99) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_79(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 79) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_98(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 98) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_106(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 106) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_65_ch_115_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_65_ch_115_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_65_ch_115_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_65_ch_115_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_65_ch_115_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_67(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 67) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_108(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 108) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_ch_115(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 115) return pos;
 return -1;
}

chainptr fsq_ch_67_ch_108_ch_97_ch_115_ch_115[] = {
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_67_ch_108_ch_97_ch_115_ch_115(const char* text) {
 return chain_next(text, fsq_ch_67_ch_108_ch_97_ch_115_ch_115);
}

int fn_al_sq_ch_67_ch_108_ch_97_ch_115_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_67_ch_108_ch_97_ch_115_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_67_ch_108_ch_97_ch_115_ch_115_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_67_ch_108_ch_97_ch_115_ch_115_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_67_ch_108_ch_97_ch_115_ch_115_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_67_ch_108_ch_97_ch_115_ch_115_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_67_ch_108_ch_97_ch_115_ch_115_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_86(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 86) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_117(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 117) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_70(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 70) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_ch_109(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 109) return pos;
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_86)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_70)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_109)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_ch_102(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 102) return pos;
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_69(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 69) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_120(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 120) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_100(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 100) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_69)},
 {(int (*)())(cf_ch_120)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_72(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 72) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_72)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_86)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(fn_ch_101)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_73(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 73) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_77(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 77) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_77)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_120)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_77)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_79_ch_110_ch_101_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_79_ch_110_ch_101_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_79_ch_110_ch_101_ch_79_ch_102);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_79_ch_110_ch_101_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_79_ch_110_ch_101_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_82)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_103)},
 {(int (*)())(fn_ch_101)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_83(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 83) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_86)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_70)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_109)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(fn_ch_101)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_102(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 102) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_68_ch_101_ch_102_ch_105_ch_110_ch_105_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_102)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_68_ch_101_ch_102_ch_105_ch_110_ch_105_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_68_ch_101_ch_102_ch_105_ch_110_ch_105_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_68_ch_101_ch_102_ch_105_ch_110_ch_105_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_68_ch_101_ch_102_ch_105_ch_110_ch_105_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_82_ch_101_ch_115_ch_116_ch_114_ch_105_ch_99_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_82)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_82_ch_101_ch_115_ch_116_ch_114_ch_105_ch_99_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_82_ch_101_ch_115_ch_116_ch_114_ch_105_ch_99_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_82_ch_101_ch_115_ch_116_ch_114_ch_105_ch_99_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_82_ch_101_ch_115_ch_116_ch_114_ch_105_ch_99_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_85(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 85) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_68_ch_97_ch_116_ch_97_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_85)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_68_ch_97_ch_116_ch_97_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_68_ch_97_ch_116_ch_97_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102);
}

int fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_97_ch_116_ch_97_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_101_ch_99_ch_108_ch_97_ch_114_ch_97_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_68_ch_101_ch_99_ch_108_ch_97_ch_114_ch_97_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_68_ch_101_ch_99_ch_108_ch_97_ch_114_ch_97_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_68_ch_101_ch_99_ch_108_ch_97_ch_114_ch_97_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_101_ch_99_ch_108_ch_97_ch_114_ch_97_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_94(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 94) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_ch_94(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 94) return pos;
 return -1;
}

chainptr fsq_ch_94_ch_94[] = {
 {(int (*)())(cf_ch_94)},
 {(int (*)())(fn_ch_94)},
 {NULL}
};

int fn_sq_ch_94_ch_94(const char* text) {
 return chain_next(text, fsq_ch_94_ch_94);
}

int fn_al_sq_ch_94_ch_94(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_94_ch_94(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_118(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 118) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_68_ch_105_ch_102_ch_102_ch_101_ch_114_ch_101_ch_110_ch_116_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108_ch_115[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_102)},
 {(int (*)())(cf_ch_102)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_68_ch_105_ch_102_ch_102_ch_101_ch_114_ch_101_ch_110_ch_116_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108_ch_115(const char* text) {
 return chain_next(text, fsq_ch_68_ch_105_ch_102_ch_102_ch_101_ch_114_ch_101_ch_110_ch_116_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108_ch_115);
}

int fn_al_sq_ch_68_ch_105_ch_102_ch_102_ch_101_ch_114_ch_101_ch_110_ch_116_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_105_ch_102_ch_102_ch_101_ch_114_ch_101_ch_110_ch_116_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(const char* text) {
 return chain_next(text, fsq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115);
}

int fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
 return chain_next(text, fsq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115);
}

int fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
 return chain_next(text, fsq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115);
}

int fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_85)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_ch_61(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 61) return pos;
 return -1;
}

chainptr fsq_ch_61[] = {
 {(int (*)())(fn_ch_61)},
 {NULL}
};

int fn_sq_ch_61(const char* text) {
 return chain_next(text, fsq_ch_61);
}

int fn_al_sq_ch_61(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_61(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_113(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 113) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115[] = {
 {(int (*)())(cf_ch_69)},
 {(int (*)())(cf_ch_113)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(const char* text) {
 return chain_next(text, fsq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115);
}

int fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115[] = {
 {(int (*)())(cf_ch_69)},
 {(int (*)())(cf_ch_113)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
 return chain_next(text, fsq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115);
}

int fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115[] = {
 {(int (*)())(cf_ch_69)},
 {(int (*)())(cf_ch_113)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
 return chain_next(text, fsq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115);
}

int fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_60(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 60) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_cl_65_91_97_122(const char* text, chainptr *chain) {
 int pos = 0, pchain = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 65 && c <= 91) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 97 && c <= 122) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 return -1;
}

int fn_cl_43_43_45_46_48_57_65_91_97_122(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 43 && c <= 43) return pos;
 if (c >= 45 && c <= 46) return pos;
 if (c >= 48 && c <= 57) return pos;
 if (c >= 65 && c <= 91) return pos;
 if (c >= 97 && c <= 122) return pos;
 return -1;
}
int cf_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while ((p = fn_cl_43_43_45_46_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_ch_47(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 47) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 33 && c <= 33) return pos;
 if (c >= 36 && c <= 36) return pos;
 if (c >= 38 && c <= 46) return pos;
 if (c >= 48 && c <= 59) return pos;
 if (c >= 61 && c <= 61) return pos;
 if (c >= 65 && c <= 91) return pos;
 if (c >= 95 && c <= 95) return pos;
 if (c >= 97 && c <= 122) return pos;
 if (c >= 126 && c <= 126) return pos;
 if (c >= 160 && c <= 55295) return pos;
 if (c >= 63744 && c <= 64975) return pos;
 if (c >= 65008 && c <= 65519) return pos;
 if (c >= 65533 && c <= 65533) return pos;
 if (c >= 65536 && c <= 131069) return pos;
 if (c >= 131072 && c <= 196605) return pos;
 if (c >= 196608 && c <= 262141) return pos;
 if (c >= 262144 && c <= 327677) return pos;
 if (c >= 327680 && c <= 393213) return pos;
 if (c >= 393216 && c <= 458749) return pos;
 if (c >= 458752 && c <= 524285) return pos;
 if (c >= 524288 && c <= 589821) return pos;
 if (c >= 589824 && c <= 655357) return pos;
 if (c >= 655360 && c <= 720893) return pos;
 if (c >= 720896 && c <= 786429) return pos;
 if (c >= 786432 && c <= 851965) return pos;
 if (c >= 851968 && c <= 917501) return pos;
 if (c >= 917504 && c <= 983037) return pos;
 return -1;
}
chainptr fsq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037[] = {
 {(int (*)())(fn_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037)},
 {NULL}
};

int fn_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text) {
 return chain_next(text, fsq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037);
}

int cf_ch_37(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 37) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 48 && c <= 57) return pos;
 if (c >= 65 && c <= 70) return pos;
 if (c >= 91 && c <= 91) return pos;
 if (c >= 97 && c <= 102) return pos;
 return -1;
}
int fn_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 2 && (p = fn_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 2) return pos;
 return -1;
}

chainptr fsq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_ch_37)},
 {(int (*)())(fn_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102);
}

int fn_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
	int pos = 0;
	pos = fn_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while ((p = fn_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_ch_64(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 64) return pos;
 return -1;
}

chainptr fsq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64[] = {
 {(int (*)())(cf_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(fn_ch_64)},
 {NULL}
};

int fn_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64(const char* text) {
 return chain_next(text, fsq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64);
}

int cf_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_ch_91(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 91) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 4 && (p = fn_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 1) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_ch_58(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 58) return pos;
 return -1;
}

chainptr fsq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58[] = {
 {(int (*)())(cf_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(fn_ch_58)},
 {NULL}
};

int fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text) {
 return chain_next(text, fsq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58);
}

int cf_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 6 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 6) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 4 && (p = fn_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 1) return pos;
 return -1;
}

chainptr fsq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(fn_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_ch_50(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 50) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_53(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 53) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_cl_48_53(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 48 && c <= 53) return pos;
 return -1;
}
chainptr fsq_ch_50_ch_53_cl_48_53[] = {
 {(int (*)())(cf_ch_50)},
 {(int (*)())(cf_ch_53)},
 {(int (*)())(fn_cl_48_53)},
 {NULL}
};

int fn_sq_ch_50_ch_53_cl_48_53(const char* text) {
 return chain_next(text, fsq_ch_50_ch_53_cl_48_53);
}

int cf_cl_48_52(const char* text, chainptr *chain) {
 int pos = 0, pchain = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 48 && c <= 52) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 return -1;
}

int fn_cl_48_57(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 48 && c <= 57) return pos;
 return -1;
}
chainptr fsq_ch_50_cl_48_52_cl_48_57[] = {
 {(int (*)())(cf_ch_50)},
 {(int (*)())(cf_cl_48_52)},
 {(int (*)())(fn_cl_48_57)},
 {NULL}
};

int fn_sq_ch_50_cl_48_52_cl_48_57(const char* text) {
 return chain_next(text, fsq_ch_50_cl_48_52_cl_48_57);
}

int cf_ch_49(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 49) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_cl_48_57(const char* text, chainptr *chain) {
 int pos = 0, pchain = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 48 && c <= 57) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 return -1;
}

chainptr fsq_ch_49_cl_48_57_cl_48_57[] = {
 {(int (*)())(cf_ch_49)},
 {(int (*)())(cf_cl_48_57)},
 {(int (*)())(fn_cl_48_57)},
 {NULL}
};

int fn_sq_ch_49_cl_48_57_cl_48_57(const char* text) {
 return chain_next(text, fsq_ch_49_cl_48_57_cl_48_57);
}

int cf_cl_49_57(const char* text, chainptr *chain) {
 int pos = 0, pchain = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 49 && c <= 57) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 return -1;
}

chainptr fsq_cl_49_57_cl_48_57[] = {
 {(int (*)())(cf_cl_49_57)},
 {(int (*)())(fn_cl_48_57)},
 {NULL}
};

int fn_sq_cl_49_57_cl_48_57(const char* text) {
 return chain_next(text, fsq_cl_49_57_cl_48_57);
}

chainptr fsq_cl_48_57[] = {
 {(int (*)())(fn_cl_48_57)},
 {NULL}
};

int fn_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_cl_48_57);
}

int cf_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text, chainptr *chain) {
	int pos = 0, cpos = 0;
	pos = fn_sq_ch_50_ch_53_cl_48_53(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_ch_50_cl_48_52_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_ch_49_cl_48_57_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_cl_49_57_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	return -1;
}

int fn_cl_46_46(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 46 && c <= 46) return pos;
 return -1;
}
chainptr fsq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46[] = {
 {(int (*)())(cf_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {(int (*)())(fn_cl_46_46)},
 {NULL}
};

int fn_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46(const char* text) {
 return chain_next(text, fsq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46);
}

int cf_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 3 && (p = fn_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 3) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_50_ch_53_cl_48_53(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_50_cl_48_52_cl_48_57(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_49_cl_48_57_cl_48_57(text);
	if (pos != -1) return pos;
	pos = fn_sq_cl_49_57_cl_48_57(text);
	if (pos != -1) return pos;
	pos = fn_sq_cl_48_57(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57[] = {
 {(int (*)())(cf_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46)},
 {(int (*)())(fn_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57);
}

int fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
	int pos = 0;
	pos = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	pos = fn_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57[] = {
 {(int (*)())(cf_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57);
}

int cf_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 5 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 5) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57[] = {
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {NULL}
};

int fn_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57);
}

chainptr fsq_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(fn_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 4 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 4) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57);
}

int cf_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 3 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 3) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57);
}

int cf_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 2 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 2 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 2) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57);
}

int cf_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 3 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57);
}

int cf_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 4 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(fn_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57);
}

int cf_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 5 && (p = fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(fn_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_1_6_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 6 && (p = fn_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 1) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58[] = {
 {(int (*)())(cf_qtg_1_6_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(fn_ch_58)},
 {NULL}
};

int fn_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58(const char* text) {
 return chain_next(text, fsq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58);
}

int cf_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58)},
 {(int (*)())(fn_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58[] = {
 {(int (*)())(cf_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(fn_ch_58)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58);
}

int cf_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while ((p = fn_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 1) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_ch_46(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 46) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 33 && c <= 33) return pos;
 if (c >= 36 && c <= 36) return pos;
 if (c >= 38 && c <= 44) return pos;
 if (c >= 46 && c <= 46) return pos;
 if (c >= 48 && c <= 57) return pos;
 if (c >= 59 && c <= 59) return pos;
 if (c >= 58 && c <= 126) return pos;
 if (c >= 61 && c <= 61) return pos;
 if (c >= 65 && c <= 91) return pos;
 if (c >= 95 && c <= 95) return pos;
 if (c >= 97 && c <= 122) return pos;
 return -1;
}
int fn_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 1) return pos;
 return -1;
}

chainptr fsq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122[] = {
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_ch_46)},
 {(int (*)())(fn_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122)},
 {NULL}
};

int fn_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(const char* text) {
 return chain_next(text, fsq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122);
}

int cf_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(const char* text, chainptr *chain) {
	int pos = 0, cpos = 0;
	pos = fn_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	return -1;
}

int fn_ch_93(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 93) return pos;
 return -1;
}

chainptr fsq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93[] = {
 {(int (*)())(cf_ch_91)},
 {(int (*)())(cf_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122)},
 {(int (*)())(fn_ch_93)},
 {NULL}
};

int fn_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93(const char* text) {
 return chain_next(text, fsq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93);
}

int fn_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 33 && c <= 33) return pos;
 if (c >= 36 && c <= 36) return pos;
 if (c >= 38 && c <= 46) return pos;
 if (c >= 48 && c <= 57) return pos;
 if (c >= 59 && c <= 59) return pos;
 if (c >= 61 && c <= 61) return pos;
 if (c >= 65 && c <= 91) return pos;
 if (c >= 95 && c <= 95) return pos;
 if (c >= 97 && c <= 122) return pos;
 if (c >= 126 && c <= 126) return pos;
 if (c >= 160 && c <= 55295) return pos;
 if (c >= 63744 && c <= 64975) return pos;
 if (c >= 65008 && c <= 65519) return pos;
 if (c >= 65533 && c <= 65533) return pos;
 if (c >= 65536 && c <= 131069) return pos;
 if (c >= 131072 && c <= 196605) return pos;
 if (c >= 196608 && c <= 262141) return pos;
 if (c >= 262144 && c <= 327677) return pos;
 if (c >= 327680 && c <= 393213) return pos;
 if (c >= 393216 && c <= 458749) return pos;
 if (c >= 458752 && c <= 524285) return pos;
 if (c >= 524288 && c <= 589821) return pos;
 if (c >= 589824 && c <= 655357) return pos;
 if (c >= 655360 && c <= 720893) return pos;
 if (c >= 720896 && c <= 786429) return pos;
 if (c >= 786432 && c <= 851965) return pos;
 if (c >= 851968 && c <= 917501) return pos;
 if (c >= 917504 && c <= 983037) return pos;
 return -1;
}
chainptr fsq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037[] = {
 {(int (*)())(fn_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037)},
 {NULL}
};

int fn_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text) {
 return chain_next(text, fsq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037);
}

int fn_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
	int pos = 0;
	pos = fn_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102);
}

int cf_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
	int pos = 0, cpos = 0;
	pos = fn_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	return -1;
}

int fn_qtg_0_4294967295_cl_48_57(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_cl_48_57(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_ch_58_qtg_0_4294967295_cl_48_57[] = {
 {(int (*)())(cf_ch_58)},
 {(int (*)())(fn_qtg_0_4294967295_cl_48_57)},
 {NULL}
};

int fn_sq_ch_58_qtg_0_4294967295_cl_48_57(const char* text) {
 return chain_next(text, fsq_ch_58_qtg_0_4294967295_cl_48_57);
}

int cf_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_ch_58_qtg_0_4294967295_cl_48_57(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 33 && c <= 33) return pos;
 if (c >= 36 && c <= 36) return pos;
 if (c >= 38 && c <= 46) return pos;
 if (c >= 48 && c <= 59) return pos;
 if (c >= 61 && c <= 61) return pos;
 if (c >= 64 && c <= 91) return pos;
 if (c >= 95 && c <= 95) return pos;
 if (c >= 97 && c <= 122) return pos;
 if (c >= 126 && c <= 126) return pos;
 if (c >= 160 && c <= 55295) return pos;
 if (c >= 63744 && c <= 64975) return pos;
 if (c >= 65008 && c <= 65519) return pos;
 if (c >= 65533 && c <= 65533) return pos;
 if (c >= 65536 && c <= 131069) return pos;
 if (c >= 131072 && c <= 196605) return pos;
 if (c >= 196608 && c <= 262141) return pos;
 if (c >= 262144 && c <= 327677) return pos;
 if (c >= 327680 && c <= 393213) return pos;
 if (c >= 393216 && c <= 458749) return pos;
 if (c >= 458752 && c <= 524285) return pos;
 if (c >= 524288 && c <= 589821) return pos;
 if (c >= 589824 && c <= 655357) return pos;
 if (c >= 655360 && c <= 720893) return pos;
 if (c >= 720896 && c <= 786429) return pos;
 if (c >= 786432 && c <= 851965) return pos;
 if (c >= 851968 && c <= 917501) return pos;
 if (c >= 917504 && c <= 983037) return pos;
 return -1;
}
chainptr fsq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037[] = {
 {(int (*)())(fn_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037)},
 {NULL}
};

int fn_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text) {
 return chain_next(text, fsq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037);
}

int fn_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
	int pos = 0;
	pos = fn_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_ch_47)},
 {(int (*)())(fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102);
}

int fn_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_ch_47)},
 {(int (*)())(cf_ch_47)},
 {(int (*)())(cf_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64)},
 {(int (*)())(cf_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57)},
 {(int (*)())(fn_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while ((p = fn_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 1) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(fn_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102);
}

int fn_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 1 && (p = fn_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_ch_47)},
 {(int (*)())(fn_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102);
}

int fn_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	pos = fn_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_ch_63(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 63) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 33 && c <= 33) return pos;
 if (c >= 36 && c <= 36) return pos;
 if (c >= 38 && c <= 59) return pos;
 if (c >= 61 && c <= 61) return pos;
 if (c >= 63 && c <= 91) return pos;
 if (c >= 95 && c <= 95) return pos;
 if (c >= 97 && c <= 122) return pos;
 if (c >= 126 && c <= 126) return pos;
 if (c >= 160 && c <= 55295) return pos;
 if (c >= 57344 && c <= 64975) return pos;
 if (c >= 65008 && c <= 65519) return pos;
 if (c >= 65533 && c <= 65533) return pos;
 if (c >= 65536 && c <= 131069) return pos;
 if (c >= 131072 && c <= 196605) return pos;
 if (c >= 196608 && c <= 262141) return pos;
 if (c >= 262144 && c <= 327677) return pos;
 if (c >= 327680 && c <= 393213) return pos;
 if (c >= 393216 && c <= 458749) return pos;
 if (c >= 458752 && c <= 524285) return pos;
 if (c >= 524288 && c <= 589821) return pos;
 if (c >= 589824 && c <= 655357) return pos;
 if (c >= 655360 && c <= 720893) return pos;
 if (c >= 720896 && c <= 786429) return pos;
 if (c >= 786432 && c <= 851965) return pos;
 if (c >= 851968 && c <= 917501) return pos;
 if (c >= 917504 && c <= 983037) return pos;
 if (c >= 983040 && c <= 1048573) return pos;
 if (c >= 1048576 && c <= 1114109) return pos;
 return -1;
}
chainptr fsq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109[] = {
 {(int (*)())(fn_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109)},
 {NULL}
};

int fn_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109(const char* text) {
 return chain_next(text, fsq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109);
}

int fn_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
	int pos = 0;
	pos = fn_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_ch_63)},
 {(int (*)())(fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 33 && c <= 33) return pos;
 if (c >= 36 && c <= 36) return pos;
 if (c >= 38 && c <= 59) return pos;
 if (c >= 61 && c <= 61) return pos;
 if (c >= 63 && c <= 91) return pos;
 if (c >= 95 && c <= 95) return pos;
 if (c >= 97 && c <= 122) return pos;
 if (c >= 126 && c <= 126) return pos;
 if (c >= 160 && c <= 55295) return pos;
 if (c >= 63744 && c <= 64975) return pos;
 if (c >= 65008 && c <= 65519) return pos;
 if (c >= 65533 && c <= 65533) return pos;
 if (c >= 65536 && c <= 131069) return pos;
 if (c >= 131072 && c <= 196605) return pos;
 if (c >= 196608 && c <= 262141) return pos;
 if (c >= 262144 && c <= 327677) return pos;
 if (c >= 327680 && c <= 393213) return pos;
 if (c >= 393216 && c <= 458749) return pos;
 if (c >= 458752 && c <= 524285) return pos;
 if (c >= 524288 && c <= 589821) return pos;
 if (c >= 589824 && c <= 655357) return pos;
 if (c >= 655360 && c <= 720893) return pos;
 if (c >= 720896 && c <= 786429) return pos;
 if (c >= 786432 && c <= 851965) return pos;
 if (c >= 851968 && c <= 917501) return pos;
 if (c >= 917504 && c <= 983037) return pos;
 return -1;
}
chainptr fsq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037[] = {
 {(int (*)())(fn_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037)},
 {NULL}
};

int fn_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(const char* text) {
 return chain_next(text, fsq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037);
}

int fn_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
	int pos = 0;
	pos = fn_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102[] = {
 {(int (*)())(cf_ch_35)},
 {(int (*)())(fn_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {NULL}
};

int fn_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text) {
 return chain_next(text, fsq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102);
}

int cf_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_ch_62(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 62) return pos;
 return -1;
}

chainptr fsq_ch_60_cl_65_91_97_122_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122_ch_58_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_62[] = {
 {(int (*)())(cf_ch_60)},
 {(int (*)())(cf_cl_65_91_97_122)},
 {(int (*)())(cf_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(cf_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102)},
 {(int (*)())(fn_ch_62)},
 {NULL}
};

int fn_sq_ch_60_cl_65_91_97_122_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122_ch_58_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_62(const char* text) {
 return chain_next(text, fsq_ch_60_cl_65_91_97_122_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122_ch_58_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_62);
}

int fn_al_sq_ch_60_cl_65_91_97_122_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122_ch_58_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_62(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_60_cl_65_91_97_122_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122_ch_58_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_62(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_70)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_70)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_75(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 75) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_72_ch_97_ch_115_ch_75_ch_101_ch_121[] = {
 {(int (*)())(cf_ch_72)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_75)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_72_ch_97_ch_115_ch_75_ch_101_ch_121(const char* text) {
 return chain_next(text, fsq_ch_72_ch_97_ch_115_ch_75_ch_101_ch_121);
}

int fn_al_sq_ch_72_ch_97_ch_115_ch_75_ch_101_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_72_ch_97_ch_115_ch_75_ch_101_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_ch_116(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 116) return pos;
 return -1;
}

chainptr fsq_ch_73_ch_109_ch_112_ch_111_ch_114_ch_116[] = {
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(fn_ch_116)},
 {NULL}
};

int fn_sq_ch_73_ch_109_ch_112_ch_111_ch_114_ch_116(const char* text) {
 return chain_next(text, fsq_ch_73_ch_109_ch_112_ch_111_ch_114_ch_116);
}

int fn_al_sq_ch_73_ch_109_ch_112_ch_111_ch_114_ch_116(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_73_ch_109_ch_112_ch_111_ch_114_ch_116(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_70)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115[] = {
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(fn_ch_115)},
 {NULL}
};

int fn_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
 return chain_next(text, fsq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115);
}

int fn_al_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_73_ch_114_ch_114_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_102)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_120)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_73_ch_114_ch_114_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_73_ch_114_ch_114_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_73_ch_114_ch_114_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_73_ch_114_ch_114_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_ch_40(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 40) return pos;
 return -1;
}

chainptr fsq_ch_40[] = {
 {(int (*)())(fn_ch_40)},
 {NULL}
};

int fn_sq_ch_40(const char* text) {
 return chain_next(text, fsq_ch_40);
}

int fn_al_sq_ch_40(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_40(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_78(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 78) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_ch_108(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 108) return pos;
 return -1;
}

chainptr fsq_ch_78_ch_97_ch_109_ch_101_ch_100_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108[] = {
 {(int (*)())(cf_ch_78)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(fn_ch_108)},
 {NULL}
};

int fn_sq_ch_78_ch_97_ch_109_ch_101_ch_100_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(const char* text) {
 return chain_next(text, fsq_ch_78_ch_97_ch_109_ch_101_ch_100_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108);
}

int fn_al_sq_ch_78_ch_97_ch_109_ch_101_ch_100_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_78_ch_97_ch_109_ch_101_ch_100_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_78)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_103)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_78)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_103)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_95(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 95) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_95_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039[] = {
 {(int (*)())(cf_ch_95)},
 {(int (*)())(cf_ch_58)},
 {(int (*)())(cf_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {(int (*)())(fn_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {NULL}
};

int fn_sq_ch_95_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
 return chain_next(text, fsq_ch_95_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039);
}

int fn_al_sq_ch_95_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_95_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_86)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_70)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_109)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_69)},
 {(int (*)())(cf_ch_120)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_83_ch_101_ch_108_ch_102[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_72)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_83_ch_101_ch_108_ch_102(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_83_ch_101_ch_108_ch_102);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_83_ch_101_ch_108_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_83_ch_101_ch_108_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_72)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_86)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(fn_ch_101)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_102);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_77)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_120)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_77)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_79_ch_110_ch_101_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_79_ch_110_ch_101_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_79_ch_110_ch_101_ch_79_ch_102);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_79_ch_110_ch_101_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_79_ch_110_ch_101_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_104(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 104) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_67_ch_104_ch_97_ch_105_ch_110[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_104)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_67_ch_104_ch_97_ch_105_ch_110(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_67_ch_104_ch_97_ch_105_ch_110);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_67_ch_104_ch_97_ch_105_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_67_ch_104_ch_97_ch_105_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(fn_ch_110)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_82)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_103)},
 {(int (*)())(fn_ch_101)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_86)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_70)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(fn_ch_109)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_85)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102);
}

int fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_79_ch_110_ch_116_ch_111_ch_108_ch_111_ch_103_ch_121[] = {
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_103)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_79_ch_110_ch_116_ch_111_ch_108_ch_111_ch_103_ch_121(const char* text) {
 return chain_next(text, fsq_ch_79_ch_110_ch_116_ch_111_ch_108_ch_111_ch_103_ch_121);
}

int fn_al_sq_ch_79_ch_110_ch_116_ch_111_ch_108_ch_111_ch_103_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_79_ch_110_ch_116_ch_111_ch_108_ch_111_ch_103_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_ch_120(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 120) return pos;
 return -1;
}

chainptr fsq_ch_80_ch_114_ch_101_ch_102_ch_105_ch_120[] = {
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_102)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(fn_ch_120)},
 {NULL}
};

int fn_sq_ch_80_ch_114_ch_101_ch_102_ch_105_ch_120(const char* text) {
 return chain_next(text, fsq_ch_80_ch_114_ch_101_ch_102_ch_105_ch_120);
}

int fn_al_sq_ch_80_ch_114_ch_101_ch_102_ch_105_ch_120(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_80_ch_114_ch_101_ch_102_ch_105_ch_120(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58[] = {
 {(int (*)())(cf_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039)},
 {(int (*)())(fn_ch_58)},
 {NULL}
};

int fn_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58(const char* text) {
 return chain_next(text, fsq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58);
}

int fn_al_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58(const char* text) {
	int pos = 0;
	pos = fn_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_82_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_82)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_102)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_120)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_82_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_82_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_82_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_82_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_ch_41(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 41) return pos;
 return -1;
}

chainptr fsq_ch_41[] = {
 {(int (*)())(fn_ch_41)},
 {NULL}
};

int fn_sq_ch_41(const char* text) {
 return chain_next(text, fsq_ch_41);
}

int fn_al_sq_ch_41(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_41(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_83_ch_97_ch_109_ch_101_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108[] = {
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_73)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_100)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(fn_ch_108)},
 {NULL}
};

int fn_sq_ch_83_ch_97_ch_109_ch_101_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(const char* text) {
 return chain_next(text, fsq_ch_83_ch_97_ch_109_ch_101_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108);
}

int fn_al_sq_ch_83_ch_97_ch_109_ch_101_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_83_ch_97_ch_109_ch_101_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_83_ch_117_ch_98_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_65)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_83_ch_117_ch_98_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_83_ch_117_ch_98_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102);
}

int fn_al_sq_ch_83_ch_117_ch_98_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_83_ch_117_ch_98_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_83_ch_117_ch_98_ch_67_ch_108_ch_97_ch_115_ch_115_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_67)},
 {(int (*)())(cf_ch_108)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_83_ch_117_ch_98_ch_67_ch_108_ch_97_ch_115_ch_115_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_83_ch_117_ch_98_ch_67_ch_108_ch_97_ch_115_ch_115_ch_79_ch_102);
}

int fn_al_sq_ch_83_ch_117_ch_98_ch_67_ch_108_ch_97_ch_115_ch_115_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_83_ch_117_ch_98_ch_67_ch_108_ch_97_ch_115_ch_115_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_83_ch_117_ch_98_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_68)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_83_ch_117_ch_98_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_83_ch_117_ch_98_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102);
}

int fn_al_sq_ch_83_ch_117_ch_98_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_83_ch_117_ch_98_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_83_ch_117_ch_98_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102[] = {
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_117)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(fn_ch_102)},
 {NULL}
};

int fn_sq_ch_83_ch_117_ch_98_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text) {
 return chain_next(text, fsq_ch_83_ch_117_ch_98_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102);
}

int fn_al_sq_ch_83_ch_117_ch_98_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_83_ch_117_ch_98_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(text);
	if (pos != -1) return pos;
	return -1;
}

chainptr fsq_ch_83_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_83)},
 {(int (*)())(cf_ch_121)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_109)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_83_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_83_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_83_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_83_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_84(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 84) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

chainptr fsq_ch_84_ch_114_ch_97_ch_110_ch_115_ch_105_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121[] = {
 {(int (*)())(cf_ch_84)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_97)},
 {(int (*)())(cf_ch_110)},
 {(int (*)())(cf_ch_115)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_105)},
 {(int (*)())(cf_ch_118)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_79)},
 {(int (*)())(cf_ch_98)},
 {(int (*)())(cf_ch_106)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_99)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(cf_ch_80)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_111)},
 {(int (*)())(cf_ch_112)},
 {(int (*)())(cf_ch_101)},
 {(int (*)())(cf_ch_114)},
 {(int (*)())(cf_ch_116)},
 {(int (*)())(fn_ch_121)},
 {NULL}
};

int fn_sq_ch_84_ch_114_ch_97_ch_110_ch_115_ch_105_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
 return chain_next(text, fsq_ch_84_ch_114_ch_97_ch_110_ch_115_ch_105_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121);
}

int fn_al_sq_ch_84_ch_114_ch_97_ch_110_ch_115_ch_105_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_84_ch_114_ch_97_ch_110_ch_115_ch_105_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_64(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 64) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_cl_65_91_97_122(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 65 && c <= 91) return pos;
 if (c >= 97 && c <= 122) return pos;
 return -1;
}
int cf_qtg_2_3_cl_65_91_97_122(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 3 && (p = fn_cl_65_91_97_122(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 2) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_ch_45(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 45) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_qtg_3_3_cl_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 3 && (p = fn_cl_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 3) return pos;
 return -1;
}

chainptr fsq_ch_45_qtg_3_3_cl_65_91_97_122[] = {
 {(int (*)())(cf_ch_45)},
 {(int (*)())(fn_qtg_3_3_cl_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_45_qtg_3_3_cl_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_45_qtg_3_3_cl_65_91_97_122);
}

int fn_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 3 && (p = fn_sq_ch_45_qtg_3_3_cl_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122[] = {
 {(int (*)())(cf_qtg_2_3_cl_65_91_97_122)},
 {(int (*)())(fn_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122)},
 {NULL}
};

int fn_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122(const char* text) {
 return chain_next(text, fsq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122);
}

int fn_qtg_4_4_cl_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 4 && (p = fn_cl_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 4) return pos;
 return -1;
}

chainptr fsq_qtg_4_4_cl_65_91_97_122[] = {
 {(int (*)())(fn_qtg_4_4_cl_65_91_97_122)},
 {NULL}
};

int fn_sq_qtg_4_4_cl_65_91_97_122(const char* text) {
 return chain_next(text, fsq_qtg_4_4_cl_65_91_97_122);
}

int fn_qtg_5_8_cl_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 8 && (p = fn_cl_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 5) return pos;
 return -1;
}

chainptr fsq_qtg_5_8_cl_65_91_97_122[] = {
 {(int (*)())(fn_qtg_5_8_cl_65_91_97_122)},
 {NULL}
};

int fn_sq_qtg_5_8_cl_65_91_97_122(const char* text) {
 return chain_next(text, fsq_qtg_5_8_cl_65_91_97_122);
}

int cf_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122(const char* text, chainptr *chain) {
	int pos = 0, cpos = 0;
	pos = fn_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_4_4_cl_65_91_97_122(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	pos = fn_sq_qtg_5_8_cl_65_91_97_122(text);
	if (pos != -1) {
		cpos = chain_next(text+pos, chain);
		if (cpos != -1) return cpos + pos;
	}
	return -1;
}

chainptr fsq_ch_45_qtg_4_4_cl_65_91_97_122[] = {
 {(int (*)())(cf_ch_45)},
 {(int (*)())(fn_qtg_4_4_cl_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_45_qtg_4_4_cl_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_45_qtg_4_4_cl_65_91_97_122);
}

int cf_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_sq_ch_45_qtg_4_4_cl_65_91_97_122(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_qtg_2_2_cl_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 2 && (p = fn_cl_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 2) return pos;
 return -1;
}

chainptr fsq_ch_45_qtg_2_2_cl_65_91_97_122[] = {
 {(int (*)())(cf_ch_45)},
 {(int (*)())(fn_qtg_2_2_cl_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_45_qtg_2_2_cl_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_45_qtg_2_2_cl_65_91_97_122);
}

int fn_qtg_3_3_cl_48_57(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 3 && (p = fn_cl_48_57(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 3) return pos;
 return -1;
}

chainptr fsq_qtg_3_3_cl_48_57[] = {
 {(int (*)())(fn_qtg_3_3_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_3_3_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_3_3_cl_48_57);
}

int fn_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_45_qtg_2_2_cl_65_91_97_122(text);
	if (pos != -1) return pos;
	pos = fn_sq_qtg_3_3_cl_48_57(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while (stack.top < 1 && (p = fn_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_cl_48_57_65_91_97_122(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 48 && c <= 57) return pos;
 if (c >= 65 && c <= 91) return pos;
 if (c >= 97 && c <= 122) return pos;
 return -1;
}
int fn_qtg_5_8_cl_48_57_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 8 && (p = fn_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 5) return pos;
 return -1;
}

chainptr fsq_ch_45_qtg_5_8_cl_48_57_65_91_97_122[] = {
 {(int (*)())(cf_ch_45)},
 {(int (*)())(fn_qtg_5_8_cl_48_57_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_45_qtg_5_8_cl_48_57_65_91_97_122);
}

int fn_qtg_3_3_cl_48_57_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 3 && (p = fn_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 3) return pos;
 return -1;
}

chainptr fsq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122[] = {
 {(int (*)())(cf_cl_48_57)},
 {(int (*)())(fn_qtg_3_3_cl_48_57_65_91_97_122)},
 {NULL}
};

int fn_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122(const char* text) {
 return chain_next(text, fsq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122);
}

int fn_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122(text);
	if (pos != -1) return pos;
	pos = fn_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while ((p = fn_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int cf_cl_48_57_65_87_89_90_97_119_121_122(const char* text, chainptr *chain) {
 int pos = 0, pchain = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 48 && c <= 57) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 65 && c <= 87) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 89 && c <= 90) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 97 && c <= 119) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 if (c >= 121 && c <= 122) {
  pchain = chain_next(text + pos, chain);
  if (pchain >= 0) return pchain + pos;
 }
 return -1;
}

int fn_qtg_2_8_cl_48_57_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 8 && (p = fn_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 2) return pos;
 return -1;
}

chainptr fsq_ch_45_qtg_2_8_cl_48_57_65_91_97_122[] = {
 {(int (*)())(cf_ch_45)},
 {(int (*)())(fn_qtg_2_8_cl_48_57_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_45_qtg_2_8_cl_48_57_65_91_97_122);
}

int fn_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 1) return pos;
 return -1;
}

chainptr fsq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122[] = {
 {(int (*)())(cf_ch_45)},
 {(int (*)())(cf_cl_48_57_65_87_89_90_97_119_121_122)},
 {(int (*)())(fn_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122);
}

int cf_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while ((p = fn_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 0) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

int fn_qtg_1_8_cl_48_57_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 8 && (p = fn_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 1) return pos;
 return -1;
}

chainptr fsq_ch_45_qtg_1_8_cl_48_57_65_91_97_122[] = {
 {(int (*)())(cf_ch_45)},
 {(int (*)())(fn_qtg_1_8_cl_48_57_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_45_qtg_1_8_cl_48_57_65_91_97_122);
}

int fn_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 1) return pos;
 return -1;
}

chainptr fsq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122[] = {
 {(int (*)())(cf_ch_45)},
 {(int (*)())(cf_ch_120)},
 {(int (*)())(fn_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122);
}

int fn_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text) {
 int pos = 0, p = 0, count = 0;
 while (count < 1 && (p = fn_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 0) return pos;
 return -1;
}

chainptr fsq_ch_64_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122[] = {
 {(int (*)())(cf_ch_64)},
 {(int (*)())(cf_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122)},
 {(int (*)())(cf_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122)},
 {(int (*)())(cf_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57)},
 {(int (*)())(cf_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122)},
 {(int (*)())(cf_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122)},
 {(int (*)())(fn_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122)},
 {NULL}
};

int fn_sq_ch_64_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text) {
 return chain_next(text, fsq_ch_64_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122);
}

int fn_al_sq_ch_64_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_64_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(text);
	if (pos != -1) return pos;
	return -1;
}

int fn_qtg_1_4294967295_cl_48_57(const char* text) {
 int pos = 0, p = 0, count = 0;
 while ((p = fn_cl_48_57(text + pos)) != -1) {
  pos += p;
  count++;
 }
 if (count >= 1) return pos;
 return -1;
}

chainptr fsq_qtg_1_4294967295_cl_48_57[] = {
 {(int (*)())(fn_qtg_1_4294967295_cl_48_57)},
 {NULL}
};

int fn_sq_qtg_1_4294967295_cl_48_57(const char* text) {
 return chain_next(text, fsq_qtg_1_4294967295_cl_48_57);
}

int fn_al_sq_qtg_1_4294967295_cl_48_57(const char* text) {
	int pos = 0;
	pos = fn_sq_qtg_1_4294967295_cl_48_57(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_ch_34(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 34) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int cf_ch_92(const char* text, chainptr *chain) {
 int pos = 0;
 if (next_utf8(text, &pos) == 92) {
  int res = chain_next(text + pos, chain);
  if (res != -1) return res + pos;
 }
 return -1;
}

int fn_ch_92(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 92) return pos;
 return -1;
}

chainptr fsq_ch_92_ch_92[] = {
 {(int (*)())(cf_ch_92)},
 {(int (*)())(fn_ch_92)},
 {NULL}
};

int fn_sq_ch_92_ch_92(const char* text) {
 return chain_next(text, fsq_ch_92_ch_92);
}

int fn_ch_34(const char* text) {
 int pos = 0;
 if (next_utf8(text, &pos) == 34) return pos;
 return -1;
}

chainptr fsq_ch_92_ch_34[] = {
 {(int (*)())(cf_ch_92)},
 {(int (*)())(fn_ch_34)},
 {NULL}
};

int fn_sq_ch_92_ch_34(const char* text) {
 return chain_next(text, fsq_ch_92_ch_34);
}

int fn_cl_1_33_35_4294967295(const char* text) {
 int pos = 0;
 unsigned int c = next_utf8(text, &pos);
 if (c >= 1 && c <= 33) return pos;
 if (c >= 35 && c <= 4294967295) return pos;
 return -1;
}
chainptr fsq_cl_1_33_35_4294967295[] = {
 {(int (*)())(fn_cl_1_33_35_4294967295)},
 {NULL}
};

int fn_sq_cl_1_33_35_4294967295(const char* text) {
 return chain_next(text, fsq_cl_1_33_35_4294967295);
}

int fn_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_92_ch_92(text);
	if (pos != -1) return pos;
	pos = fn_sq_ch_92_ch_34(text);
	if (pos != -1) return pos;
	pos = fn_sq_cl_1_33_35_4294967295(text);
	if (pos != -1) return pos;
	return -1;
}

int cf_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295(const char* text, chainptr *chain) {
 int pos = 0, p = 0;
 stack_int stack;
 stack_int_init(&stack);
 while ((p = fn_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295(text + pos)) != -1) {
  pos += p;
  stack_int_push(&stack, p);
 }
 while (stack.top >= 1) {
  p = chain_next(text + pos, chain);
  if (p >= 0) {
   stack_int_free(&stack);
   return pos + p;
  }
  if (stack.top == 0) break;
  pos -= stack_int_pop(&stack);
 }
 stack_int_free(&stack);
 return -1;
}

chainptr fsq_ch_34_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295_ch_34[] = {
 {(int (*)())(cf_ch_34)},
 {(int (*)())(cf_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295)},
 {(int (*)())(fn_ch_34)},
 {NULL}
};

int fn_sq_ch_34_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295_ch_34(const char* text) {
 return chain_next(text, fsq_ch_34_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295_ch_34);
}

int fn_al_sq_ch_34_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295_ch_34(const char* text) {
	int pos = 0;
	pos = fn_sq_ch_34_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295_ch_34(text);
	if (pos != -1) return pos;
	return -1;
}


#define EINVTOK 1

int OWL2_state = 0;
int OWL2_inv_token_pos = -1;
char OWL2_inv_token_txt[200];

int next_token(const char* text, int* pos) {
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_qtg_1_4294967295_cl_9_10_13_13_32_32(text);
  if (*pos != -1) return -2;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_35_qtg_1_4294967295_cl_1_9_11_12_14_4294967295(text);
  if (*pos != -1) return -2;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_61(text);
  if (*pos != -1) return 2;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_40(text);
  if (*pos != -1) return 3;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_41(text);
  if (*pos != -1) return 4;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_94_ch_94(text);
  if (*pos != -1) return 5;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_qtg_1_4294967295_cl_48_57(text);
  if (*pos != -1) return 6;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_34_qtg_1_4294967295_al_sq_ch_92_ch_92_sq_ch_92_ch_34_sq_cl_1_33_35_4294967295_ch_34(text);
  if (*pos != -1) return 7;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_64_al_sq_qtg_2_3_cl_65_91_97_122_qtg_0_3_sq_ch_45_qtg_3_3_cl_65_91_97_122_sq_qtg_4_4_cl_65_91_97_122_sq_qtg_5_8_cl_65_91_97_122_qtg_0_1_sq_ch_45_qtg_4_4_cl_65_91_97_122_qtg_0_1_al_sq_ch_45_qtg_2_2_cl_65_91_97_122_sq_qtg_3_3_cl_48_57_qtg_0_4294967295_al_sq_ch_45_qtg_5_8_cl_48_57_65_91_97_122_sq_cl_48_57_qtg_3_3_cl_48_57_65_91_97_122_qtg_0_4294967295_sq_ch_45_cl_48_57_65_87_89_90_97_119_121_122_qtg_1_4294967295_sq_ch_45_qtg_2_8_cl_48_57_65_91_97_122_qtg_0_1_sq_ch_45_ch_120_qtg_1_4294967295_sq_ch_45_qtg_1_8_cl_48_57_65_91_97_122(text);
  if (*pos != -1) return 8;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(text);
  if (*pos != -1) return 9;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_95_ch_58_cl_48_57_65_91_95_95_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039(text);
  if (*pos != -1) return 10;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_qtg_0_1_sq_cl_65_91_97_122_192_214_216_246_248_767_880_893_895_8191_8204_8205_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_qtg_0_1_sq_qtg_0_4294967295_cl_45_46_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_cl_45_45_48_57_65_91_95_95_97_122_183_183_192_214_216_246_248_893_895_8191_8204_8205_8255_8256_8304_8591_11264_12271_12289_55295_63744_64975_65008_65533_65536_983039_ch_58(text);
  if (*pos != -1) return 11;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_60_cl_65_91_97_122_qtg_0_4294967295_cl_43_43_45_46_48_57_65_91_97_122_ch_58_qtg_0_1_al_sq_ch_47_ch_47_qtg_0_1_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_64_al_sq_ch_91_al_sq_qtg_6_6_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_ch_58_ch_58_qtg_5_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_4_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_3_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_2_2_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_3_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_4_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_al_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_1_sq_qtg_0_5_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_qtg_1_4_cl_48_57_65_70_91_91_97_102_sq_qtg_0_1_sq_qtg_0_1_sq_qtg_1_6_cl_48_57_65_70_91_91_97_102_ch_58_sq_qtg_1_4_cl_48_57_65_70_91_91_97_102_ch_58_ch_58_sq_ch_118_qtg_1_4294967295_cl_48_57_65_70_91_91_97_102_ch_46_qtg_1_4294967295_cl_33_33_36_36_38_44_46_46_48_57_59_59_58_126_61_61_65_91_95_95_97_122_ch_93_sq_qtg_3_3_sq_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_cl_46_46_al_sq_ch_50_ch_53_cl_48_53_sq_ch_50_cl_48_52_cl_48_57_sq_ch_49_cl_48_57_cl_48_57_sq_cl_49_57_cl_48_57_sq_cl_48_57_sq_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_57_59_59_61_61_65_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_58_qtg_0_4294967295_cl_48_57_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_ch_47_qtg_0_1_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_sq_qtg_1_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_4294967295_sq_ch_47_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_46_48_59_61_61_64_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_63_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_57344_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_983040_1048573_1048576_1114109_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_qtg_0_1_sq_ch_35_qtg_0_4294967295_al_sq_cl_33_33_36_36_38_59_61_61_63_91_95_95_97_122_126_126_160_55295_63744_64975_65008_65519_65533_65533_65536_131069_131072_196605_196608_262141_262144_327677_327680_393213_393216_458749_458752_524285_524288_589821_589824_655357_655360_720893_720896_786429_786432_851965_851968_917501_917504_983037_sq_ch_37_qtg_2_2_cl_48_57_65_70_91_91_97_102_ch_62(text);
  if (*pos != -1) return 12;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 13;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_83_ch_117_ch_98_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(text);
  if (*pos != -1) return 14;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(text);
  if (*pos != -1) return 15;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(text);
  if (*pos != -1) return 16;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 17;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_65_ch_110_ch_110_ch_111_ch_116_ch_97_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 18;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_101_ch_99_ch_108_ch_97_ch_114_ch_97_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 19;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 20;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(text);
  if (*pos != -1) return 21;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(text);
  if (*pos != -1) return 22;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(text);
  if (*pos != -1) return 23;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
  if (*pos != -1) return 24;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
  if (*pos != -1) return 25;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
  if (*pos != -1) return 26;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(text);
  if (*pos != -1) return 27;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(text);
  if (*pos != -1) return 28;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(text);
  if (*pos != -1) return 29;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_79_ch_110_ch_101_ch_79_ch_102(text);
  if (*pos != -1) return 30;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_82_ch_101_ch_115_ch_116_ch_114_ch_105_ch_99_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 31;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101_ch_68_ch_101_ch_102_ch_105_ch_110_ch_105_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 32;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_72_ch_97_ch_115_ch_75_ch_101_ch_121(text);
  if (*pos != -1) return 33;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_67_ch_108_ch_97_ch_115_ch_115_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 34;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_67_ch_108_ch_97_ch_115_ch_115(text);
  if (*pos != -1) return 35;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_116_ch_121_ch_112_ch_101(text);
  if (*pos != -1) return 36;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_67_ch_104_ch_97_ch_105_ch_110(text);
  if (*pos != -1) return 37;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 38;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(text);
  if (*pos != -1) return 39;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(text);
  if (*pos != -1) return 40;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 41;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_68_ch_111_ch_109_ch_97_ch_105_ch_110(text);
  if (*pos != -1) return 42;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_82_ch_97_ch_110_ch_103_ch_101(text);
  if (*pos != -1) return 43;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 44;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_78_ch_97_ch_109_ch_101_ch_100_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(text);
  if (*pos != -1) return 45;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_83_ch_117_ch_98_ch_67_ch_108_ch_97_ch_115_ch_115_ch_79_ch_102(text);
  if (*pos != -1) return 46;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(text);
  if (*pos != -1) return 47;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_83_ch_117_ch_98_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(text);
  if (*pos != -1) return 48;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
  if (*pos != -1) return 49;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
  if (*pos != -1) return 50;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 51;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 52;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_82_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 53;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_73_ch_114_ch_114_ch_101_ch_102_ch_108_ch_101_ch_120_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 54;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_83_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 55;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_65_ch_115_ch_121_ch_109_ch_109_ch_101_ch_116_ch_114_ch_105_ch_99_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 56;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_84_ch_114_ch_97_ch_110_ch_115_ch_105_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 57;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_83_ch_117_ch_98_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_79_ch_102(text);
  if (*pos != -1) return 58;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_69_ch_113_ch_117_ch_105_ch_118_ch_97_ch_108_ch_101_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
  if (*pos != -1) return 59;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
  if (*pos != -1) return 60;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_70_ch_117_ch_110_ch_99_ch_116_ch_105_ch_111_ch_110_ch_97_ch_108_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121(text);
  if (*pos != -1) return 61;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_83_ch_97_ch_109_ch_101_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108(text);
  if (*pos != -1) return 62;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_105_ch_102_ch_102_ch_101_ch_114_ch_101_ch_110_ch_116_ch_73_ch_110_ch_100_ch_105_ch_118_ch_105_ch_100_ch_117_ch_97_ch_108_ch_115(text);
  if (*pos != -1) return 63;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 64;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_78_ch_101_ch_103_ch_97_ch_116_ch_105_ch_118_ch_101_ch_68_ch_97_ch_116_ch_97_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_121_ch_65_ch_115_ch_115_ch_101_ch_114_ch_116_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 65;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_116_ch_101_ch_114_ch_115_ch_101_ch_99_ch_116_ch_105_ch_111_ch_110_ch_79_ch_102(text);
  if (*pos != -1) return 66;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110_ch_79_ch_102(text);
  if (*pos != -1) return 67;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_67_ch_111_ch_109_ch_112_ch_108_ch_101_ch_109_ch_101_ch_110_ch_116_ch_79_ch_102(text);
  if (*pos != -1) return 68;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_79_ch_110_ch_101_ch_79_ch_102(text);
  if (*pos != -1) return 69;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_83_ch_111_ch_109_ch_101_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(text);
  if (*pos != -1) return 70;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_65_ch_108_ch_108_ch_86_ch_97_ch_108_ch_117_ch_101_ch_115_ch_70_ch_114_ch_111_ch_109(text);
  if (*pos != -1) return 71;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_86_ch_97_ch_108_ch_117_ch_101(text);
  if (*pos != -1) return 72;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_72_ch_97_ch_115_ch_83_ch_101_ch_108_ch_102(text);
  if (*pos != -1) return 73;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_105_ch_110_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
  if (*pos != -1) return 74;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_77_ch_97_ch_120_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
  if (*pos != -1) return 75;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_69_ch_120_ch_97_ch_99_ch_116_ch_67_ch_97_ch_114_ch_100_ch_105_ch_110_ch_97_ch_108_ch_105_ch_116_ch_121(text);
  if (*pos != -1) return 76;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_102(text);
  if (*pos != -1) return 77;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_80_ch_114_ch_101_ch_102_ch_105_ch_120(text);
  if (*pos != -1) return 78;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_79_ch_110_ch_116_ch_111_ch_108_ch_111_ch_103_ch_121(text);
  if (*pos != -1) return 79;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_73_ch_109_ch_112_ch_111_ch_114_ch_116(text);
  if (*pos != -1) return 80;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_67_ch_108_ch_97_ch_115_ch_115_ch_101_ch_115(text);
  if (*pos != -1) return 81;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_68_ch_105_ch_115_ch_106_ch_111_ch_105_ch_110_ch_116_ch_85_ch_110_ch_105_ch_111_ch_110(text);
  if (*pos != -1) return 82;
 }
 if (OWL2_state == 0)
 {
  *pos = fn_al_sq_ch_73_ch_110_ch_118_ch_101_ch_114_ch_115_ch_101_ch_79_ch_98_ch_106_ch_101_ch_99_ch_116_ch_80_ch_114_ch_111_ch_112_ch_101_ch_114_ch_116_ch_105_ch_101_ch_115(text);
  if (*pos != -1) return 83;
 }
 strncpy(OWL2_inv_token_txt, text, 200);
 return -1;
}

int OWL2_get_num_tokens(const char* text, int len) {
 int pos = 0;
 int p;
 int tok = 0;
 int tokid = 0;
 OWL2_state = 0;
 while (pos < len) {
  tokid = next_token(text, &p);
  if (tokid == -1) {
   OWL2_inv_token_pos = pos;
   return 0;
  }
  text += p;
  pos += p;
  if (tokid == -2) continue;
  ++tok;
 }
 if (pos != len) return 0;
 return tok;
}

token_list* OWL2_tokenize_string_len(const char* text, int len) {
 int pos = 0;
 int tokenId;
 token_list* tokens;
 int numTokens = OWL2_get_num_tokens(text, len);
 if (numTokens <= 0) return NULL;
 OWL2_inv_token_pos = -1;
 tokens = token_list_init(numTokens, len);
 OWL2_state = 0;
 while (tokens->count < numTokens) {
  tokenId = next_token(text, &pos);
  if (tokenId != -1) {
   if (tokenId != -2) {
    token_list_add(tokens, tokenId, text, pos);
   }
   text += pos;
   pos = 0;
  }
 }
 return tokens;
}

token_list* OWL2_tokenize_string(const char* text) {
 return OWL2_tokenize_string_len(text, (int)strlen_utf8(text));
}

token_list* OWL2_tokenize_file(const char* fileName) {
 int len;
 char* text;
 token_list* tokens;
 FILE* f = fopen(fileName, "r");
 if (f == NULL) {
  printf("Could not open %s\n", fileName);
  errno = 1;
  return NULL;
 }
 fseek(f, 0, SEEK_END);
 len = ftell(f);
 rewind(f);
 text = (char*)malloc(len+1);
 fread(text, 1, len, f);
 fclose(f);
 text[len] = 0;
 tokens = OWL2_tokenize_string_len(text, len);
 free(text);
 errno = 0;
 return tokens;
}


//-------------------------------------
ast_node* OWL2_parse_IRI(token_list* tokens, int *pos);
ast_node* OWL2_parse_ontologyDocument(token_list* tokens, int *pos);
ast_node* OWL2_parse_prefixDeclaration(token_list* tokens, int *pos);
ast_node* OWL2_parse_Ontology(token_list* tokens, int *pos);
ast_node* OWL2_parse_ontologyIRI(token_list* tokens, int *pos);
ast_node* OWL2_parse_versionIRI(token_list* tokens, int *pos);
ast_node* OWL2_parse_directlyImportsDocuments(token_list* tokens, int *pos);
ast_node* OWL2_parse_ontologyAnnotations(token_list* tokens, int *pos);
ast_node* OWL2_parse_axioms(token_list* tokens, int *pos);
ast_node* OWL2_parse_Annotation(token_list* tokens, int *pos);
ast_node* OWL2_parse_annotationAnnotations(token_list* tokens, int *pos);
ast_node* OWL2_parse_AnnotationProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_AnnotationValue(token_list* tokens, int *pos);
ast_node* OWL2_parse_AnonymousIndividual(token_list* tokens, int *pos);
ast_node* OWL2_parse_Literal(token_list* tokens, int *pos);
ast_node* OWL2_parse_typedLiteral(token_list* tokens, int *pos);
ast_node* OWL2_parse_stringLiteralNoLanguage(token_list* tokens, int *pos);
ast_node* OWL2_parse_stringLiteralWithLanguage(token_list* tokens, int *pos);
ast_node* OWL2_parse_lexicalForm(token_list* tokens, int *pos);
ast_node* OWL2_parse_Datatype(token_list* tokens, int *pos);
ast_node* OWL2_parse_Axiom(token_list* tokens, int *pos);
ast_node* OWL2_parse_Declaration(token_list* tokens, int *pos);
ast_node* OWL2_parse_ClassAxiom(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectPropertyAxiom(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataPropertyAxiom(token_list* tokens, int *pos);
ast_node* OWL2_parse_DatatypeDefinition(token_list* tokens, int *pos);
ast_node* OWL2_parse_HasKey(token_list* tokens, int *pos);
ast_node* OWL2_parse_Assertion(token_list* tokens, int *pos);
ast_node* OWL2_parse_AnnotationAxiom(token_list* tokens, int *pos);
ast_node* OWL2_parse_axiomAnnotations(token_list* tokens, int *pos);
ast_node* OWL2_parse_Entity(token_list* tokens, int *pos);
ast_node* OWL2_parse_SubClassOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_subClassExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_superClassExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_EquivalentClasses(token_list* tokens, int *pos);
ast_node* OWL2_parse_ClassExpressionList(token_list* tokens, int *pos);
ast_node* OWL2_parse_ClassExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_DisjointClasses(token_list* tokens, int *pos);
ast_node* OWL2_parse_DisjointUnion(token_list* tokens, int *pos);
ast_node* OWL2_parse_SubObjectPropertyOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_EquivalentObjectProperties(token_list* tokens, int *pos);
ast_node* OWL2_parse_DisjointObjectProperties(token_list* tokens, int *pos);
ast_node* OWL2_parse_InverseObjectProperties(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectPropertyDomain(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectPropertyRange(token_list* tokens, int *pos);
ast_node* OWL2_parse_FunctionalObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_InverseFunctionalObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_ReflexiveObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_IrreflexiveObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_SymmetricObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_AsymmetricObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_TransitiveObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectPropertyExpressionList(token_list* tokens, int *pos);
ast_node* OWL2_parse_SubDataPropertyOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_EquivalentDataProperties(token_list* tokens, int *pos);
ast_node* OWL2_parse_DisjointDataProperties(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataPropertyDomain(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataPropertyRange(token_list* tokens, int *pos);
ast_node* OWL2_parse_FunctionalDataProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataPropertyExpressionList(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataRange(token_list* tokens, int *pos);
ast_node* OWL2_parse_SameIndividual(token_list* tokens, int *pos);
ast_node* OWL2_parse_DifferentIndividuals(token_list* tokens, int *pos);
ast_node* OWL2_parse_ClassAssertion(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectPropertyAssertion(token_list* tokens, int *pos);
ast_node* OWL2_parse_NegativeObjectPropertyAssertion(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataPropertyAssertion(token_list* tokens, int *pos);
ast_node* OWL2_parse_NegativeDataPropertyAssertion(token_list* tokens, int *pos);
ast_node* OWL2_parse_IndividualList(token_list* tokens, int *pos);
ast_node* OWL2_parse_AnnotationAssertion(token_list* tokens, int *pos);
ast_node* OWL2_parse_SubAnnotationPropertyOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_AnnotationPropertyDomain(token_list* tokens, int *pos);
ast_node* OWL2_parse_AnnotationPropertyRange(token_list* tokens, int *pos);
ast_node* OWL2_parse_Class(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_NamedIndividual(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectIntersectionOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectUnionOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectComplementOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectOneOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectSomeValuesFrom(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectAllValuesFrom(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectHasValue(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectHasSelf(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectMinCardinality(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectMaxCardinality(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectExactCardinality(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataSomeValuesFrom(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataAllValuesFrom(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataHasValue(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataMinCardinality(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataMaxCardinality(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataExactCardinality(token_list* tokens, int *pos);
ast_node* OWL2_parse_disjointClassExpressions(token_list* tokens, int *pos);
ast_node* OWL2_parse_subObjectPropertyExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_propertyExpressionChain(token_list* tokens, int *pos);
ast_node* OWL2_parse_superObjectPropertyExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_ObjectPropertyExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_InverseObjectProperty(token_list* tokens, int *pos);
ast_node* OWL2_parse_subDataPropertyExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_superDataPropertyExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataPropertyExpression(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataIntersectionOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataUnionOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataComplementOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataOneOf(token_list* tokens, int *pos);
ast_node* OWL2_parse_DatatypeRestriction(token_list* tokens, int *pos);
ast_node* OWL2_parse_DataRangeList(token_list* tokens, int *pos);
ast_node* OWL2_parse_LiteralList(token_list* tokens, int *pos);
ast_node* OWL2_parse_crList(token_list* tokens, int *pos);
ast_node* OWL2_parse_constrainingFacet(token_list* tokens, int *pos);
ast_node* OWL2_parse_restrictionValue(token_list* tokens, int *pos);
ast_node* OWL2_parse_Individual(token_list* tokens, int *pos);
ast_node* OWL2_parse_sourceIndividual(token_list* tokens, int *pos);
ast_node* OWL2_parse_targetIndividual(token_list* tokens, int *pos);
ast_node* OWL2_parse_targetValue(token_list* tokens, int *pos);
ast_node* OWL2_parse_AnnotationSubject(token_list* tokens, int *pos);
ast_node* OWL2_parse_IRI(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000000;
 if (tokens->items[*pos].type != 12) 
  goto OWL2_parse_IRI_0;
 child = ast_new_node();
 child->tokenId = 12;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_IRI_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 9) 
  goto OWL2_parse_IRI_1;
 child = ast_new_node();
 child->tokenId = 9;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_IRI_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ontologyDocument(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000001;
 if ((child = OWL2_parse_prefixDeclaration(tokens, pos)) == NULL) 
  goto OWL2_parse_ontologyDocument_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Ontology(tokens, pos)) == NULL) 
  goto OWL2_parse_ontologyDocument_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ontologyDocument_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_prefixDeclaration(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000002;
 if (tokens->items[*pos].type != 78) 
  goto OWL2_parse_prefixDeclaration_0;
 child = ast_new_node();
 child->tokenId = 78;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_prefixDeclaration_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 11) 
  goto OWL2_parse_prefixDeclaration_0;
 child = ast_new_node();
 child->tokenId = 11;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 2) 
  goto OWL2_parse_prefixDeclaration_0;
 child = ast_new_node();
 child->tokenId = 2;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 12) 
  goto OWL2_parse_prefixDeclaration_0;
 child = ast_new_node();
 child->tokenId = 12;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_prefixDeclaration_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_prefixDeclaration(tokens, pos)) == NULL) 
  goto OWL2_parse_prefixDeclaration_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_prefixDeclaration_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 78) 
  goto OWL2_parse_prefixDeclaration_1;
 child = ast_new_node();
 child->tokenId = 78;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_prefixDeclaration_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 11) 
  goto OWL2_parse_prefixDeclaration_1;
 child = ast_new_node();
 child->tokenId = 11;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 2) 
  goto OWL2_parse_prefixDeclaration_1;
 child = ast_new_node();
 child->tokenId = 2;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 12) 
  goto OWL2_parse_prefixDeclaration_1;
 child = ast_new_node();
 child->tokenId = 12;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_prefixDeclaration_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_prefixDeclaration_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Ontology(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000003;
 if (tokens->items[*pos].type != 79) 
  goto OWL2_parse_Ontology_0;
 child = ast_new_node();
 child->tokenId = 79;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Ontology_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ontologyIRI(tokens, pos)) == NULL) 
  goto OWL2_parse_Ontology_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_directlyImportsDocuments(tokens, pos)) == NULL) 
  goto OWL2_parse_Ontology_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ontologyAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_Ontology_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_axioms(tokens, pos)) == NULL) 
  goto OWL2_parse_Ontology_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Ontology_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Ontology_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ontologyIRI(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000004;
 if (tokens->items[*pos].type != 12) 
  goto OWL2_parse_ontologyIRI_0;
 child = ast_new_node();
 child->tokenId = 12;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_versionIRI(tokens, pos)) == NULL) 
  goto OWL2_parse_ontologyIRI_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ontologyIRI_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 12) 
  goto OWL2_parse_ontologyIRI_1;
 child = ast_new_node();
 child->tokenId = 12;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ontologyIRI_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_versionIRI(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000005;
 if (tokens->items[*pos].type != 12) 
  goto OWL2_parse_versionIRI_0;
 child = ast_new_node();
 child->tokenId = 12;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_versionIRI_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_directlyImportsDocuments(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000006;
 if (tokens->items[*pos].type != 80) 
  goto OWL2_parse_directlyImportsDocuments_0;
 child = ast_new_node();
 child->tokenId = 80;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_directlyImportsDocuments_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_directlyImportsDocuments_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_directlyImportsDocuments_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_directlyImportsDocuments(tokens, pos)) == NULL) 
  goto OWL2_parse_directlyImportsDocuments_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_directlyImportsDocuments_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 80) 
  goto OWL2_parse_directlyImportsDocuments_1;
 child = ast_new_node();
 child->tokenId = 80;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_directlyImportsDocuments_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_directlyImportsDocuments_1;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_directlyImportsDocuments_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_directlyImportsDocuments_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ontologyAnnotations(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000007;
 if ((child = OWL2_parse_Annotation(tokens, pos)) == NULL) 
  goto OWL2_parse_ontologyAnnotations_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ontologyAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_ontologyAnnotations_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ontologyAnnotations_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_Annotation(tokens, pos)) == NULL) 
  goto OWL2_parse_ontologyAnnotations_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ontologyAnnotations_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_axioms(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000008;
 if ((child = OWL2_parse_Axiom(tokens, pos)) == NULL) 
  goto OWL2_parse_axioms_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_axioms(tokens, pos)) == NULL) 
  goto OWL2_parse_axioms_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_axioms_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_Axiom(tokens, pos)) == NULL) 
  goto OWL2_parse_axioms_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_axioms_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Annotation(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000009;
 if (tokens->items[*pos].type != 18) 
  goto OWL2_parse_Annotation_0;
 child = ast_new_node();
 child->tokenId = 18;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Annotation_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_annotationAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_Annotation_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_AnnotationProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_Annotation_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_AnnotationValue(tokens, pos)) == NULL) 
  goto OWL2_parse_Annotation_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Annotation_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Annotation_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_annotationAnnotations(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000010;
 if ((child = OWL2_parse_Annotation(tokens, pos)) == NULL) 
  goto OWL2_parse_annotationAnnotations_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_annotationAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_annotationAnnotations_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_annotationAnnotations_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_Annotation(tokens, pos)) == NULL) 
  goto OWL2_parse_annotationAnnotations_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_annotationAnnotations_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AnnotationProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000011;
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationProperty_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AnnotationValue(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000012;
 if ((child = OWL2_parse_AnonymousIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationValue_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationValue_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationValue_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationValue_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_Literal(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationValue_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationValue_2:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AnonymousIndividual(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000013;
 if (tokens->items[*pos].type != 10) 
  goto OWL2_parse_AnonymousIndividual_0;
 child = ast_new_node();
 child->tokenId = 10;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_AnonymousIndividual_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Literal(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000014;
 if ((child = OWL2_parse_typedLiteral(tokens, pos)) == NULL) 
  goto OWL2_parse_Literal_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Literal_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_stringLiteralWithLanguage(tokens, pos)) == NULL) 
  goto OWL2_parse_Literal_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Literal_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_stringLiteralNoLanguage(tokens, pos)) == NULL) 
  goto OWL2_parse_Literal_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Literal_2:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_typedLiteral(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000015;
 if ((child = OWL2_parse_lexicalForm(tokens, pos)) == NULL) 
  goto OWL2_parse_typedLiteral_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 5) 
  goto OWL2_parse_typedLiteral_0;
 child = ast_new_node();
 child->tokenId = 5;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_Datatype(tokens, pos)) == NULL) 
  goto OWL2_parse_typedLiteral_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_typedLiteral_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_stringLiteralNoLanguage(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000016;
 if (tokens->items[*pos].type != 7) 
  goto OWL2_parse_stringLiteralNoLanguage_0;
 child = ast_new_node();
 child->tokenId = 7;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_stringLiteralNoLanguage_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_stringLiteralWithLanguage(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000017;
 if (tokens->items[*pos].type != 7) 
  goto OWL2_parse_stringLiteralWithLanguage_0;
 child = ast_new_node();
 child->tokenId = 7;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 8) 
  goto OWL2_parse_stringLiteralWithLanguage_0;
 child = ast_new_node();
 child->tokenId = 8;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_stringLiteralWithLanguage_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_lexicalForm(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000018;
 if (tokens->items[*pos].type != 7) 
  goto OWL2_parse_lexicalForm_0;
 child = ast_new_node();
 child->tokenId = 7;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_lexicalForm_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Datatype(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000019;
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_Datatype_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Datatype_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Axiom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000020;
 if ((child = OWL2_parse_Declaration(tokens, pos)) == NULL) 
  goto OWL2_parse_Axiom_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Axiom_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ClassAxiom(tokens, pos)) == NULL) 
  goto OWL2_parse_Axiom_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Axiom_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectPropertyAxiom(tokens, pos)) == NULL) 
  goto OWL2_parse_Axiom_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Axiom_2:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataPropertyAxiom(tokens, pos)) == NULL) 
  goto OWL2_parse_Axiom_3;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Axiom_3:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DatatypeDefinition(tokens, pos)) == NULL) 
  goto OWL2_parse_Axiom_4;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Axiom_4:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_HasKey(tokens, pos)) == NULL) 
  goto OWL2_parse_Axiom_5;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Axiom_5:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_Assertion(tokens, pos)) == NULL) 
  goto OWL2_parse_Axiom_6;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Axiom_6:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_AnnotationAxiom(tokens, pos)) == NULL) 
  goto OWL2_parse_Axiom_7;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Axiom_7:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Declaration(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000021;
 if (tokens->items[*pos].type != 19) 
  goto OWL2_parse_Declaration_0;
 child = ast_new_node();
 child->tokenId = 19;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Declaration_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_Declaration_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Entity(tokens, pos)) == NULL) 
  goto OWL2_parse_Declaration_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Declaration_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Declaration_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ClassAxiom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000022;
 if ((child = OWL2_parse_SubClassOf(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassAxiom_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassAxiom_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_EquivalentClasses(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassAxiom_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassAxiom_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DisjointClasses(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassAxiom_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassAxiom_2:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DisjointUnion(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassAxiom_3;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassAxiom_3:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectPropertyAxiom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000023;
 if ((child = OWL2_parse_SubObjectPropertyOf(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_EquivalentObjectProperties(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DisjointObjectProperties(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_2:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_InverseObjectProperties(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_3;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_3:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectPropertyDomain(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_4;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_4:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectPropertyRange(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_5;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_5:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_FunctionalObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_6;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_6:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_InverseFunctionalObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_7;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_7:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ReflexiveObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_8;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_8:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_IrreflexiveObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_9;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_9:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_SymmetricObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_10;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_10:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_AsymmetricObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_11;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_11:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_TransitiveObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAxiom_12;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyAxiom_12:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataPropertyAxiom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000024;
 if ((child = OWL2_parse_SubDataPropertyOf(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAxiom_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyAxiom_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_EquivalentDataProperties(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAxiom_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyAxiom_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DisjointDataProperties(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAxiom_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyAxiom_2:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataPropertyDomain(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAxiom_3;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyAxiom_3:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataPropertyRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAxiom_4;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyAxiom_4:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_FunctionalDataProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAxiom_5;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyAxiom_5:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DatatypeDefinition(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000025;
 if (tokens->items[*pos].type != 32) 
  goto OWL2_parse_DatatypeDefinition_0;
 child = ast_new_node();
 child->tokenId = 32;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DatatypeDefinition_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DatatypeDefinition_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Datatype(tokens, pos)) == NULL) 
  goto OWL2_parse_DatatypeDefinition_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DatatypeDefinition_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DatatypeDefinition_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DatatypeDefinition_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_HasKey(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000026;
 if (tokens->items[*pos].type != 33) 
  goto OWL2_parse_HasKey_0;
 child = ast_new_node();
 child->tokenId = 33;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_HasKey_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_HasKey_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_HasKey_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_HasKey_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_HasKey_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Assertion(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000027;
 if ((child = OWL2_parse_SameIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_Assertion_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Assertion_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DifferentIndividuals(tokens, pos)) == NULL) 
  goto OWL2_parse_Assertion_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Assertion_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ClassAssertion(tokens, pos)) == NULL) 
  goto OWL2_parse_Assertion_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Assertion_2:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectPropertyAssertion(tokens, pos)) == NULL) 
  goto OWL2_parse_Assertion_3;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Assertion_3:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_NegativeObjectPropertyAssertion(tokens, pos)) == NULL) 
  goto OWL2_parse_Assertion_4;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Assertion_4:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataPropertyAssertion(tokens, pos)) == NULL) 
  goto OWL2_parse_Assertion_5;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Assertion_5:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_NegativeDataPropertyAssertion(tokens, pos)) == NULL) 
  goto OWL2_parse_Assertion_6;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Assertion_6:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AnnotationAxiom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000028;
 if ((child = OWL2_parse_AnnotationAssertion(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationAxiom_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationAxiom_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_SubAnnotationPropertyOf(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationAxiom_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationAxiom_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_AnnotationPropertyDomain(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationAxiom_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationAxiom_2:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_AnnotationPropertyRange(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationAxiom_3;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationAxiom_3:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_axiomAnnotations(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000029;
 if ((child = OWL2_parse_Annotation(tokens, pos)) == NULL) 
  goto OWL2_parse_axiomAnnotations_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_axiomAnnotations_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_axiomAnnotations_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_Annotation(tokens, pos)) == NULL) 
  goto OWL2_parse_axiomAnnotations_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_axiomAnnotations_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Entity(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000030;
 if (tokens->items[*pos].type != 35) 
  goto OWL2_parse_Entity_0;
 child = ast_new_node();
 child->tokenId = 35;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Entity_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_Class(tokens, pos)) == NULL) 
  goto OWL2_parse_Entity_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Entity_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Entity_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 36) 
  goto OWL2_parse_Entity_1;
 child = ast_new_node();
 child->tokenId = 36;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Entity_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_Datatype(tokens, pos)) == NULL) 
  goto OWL2_parse_Entity_1;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Entity_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Entity_1:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 41) 
  goto OWL2_parse_Entity_2;
 child = ast_new_node();
 child->tokenId = 41;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Entity_2;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_Entity_2;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Entity_2;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Entity_2:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 44) 
  goto OWL2_parse_Entity_3;
 child = ast_new_node();
 child->tokenId = 44;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Entity_3;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_Entity_3;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Entity_3;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Entity_3:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 17) 
  goto OWL2_parse_Entity_4;
 child = ast_new_node();
 child->tokenId = 17;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Entity_4;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_AnnotationProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_Entity_4;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Entity_4;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Entity_4:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 45) 
  goto OWL2_parse_Entity_5;
 child = ast_new_node();
 child->tokenId = 45;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_Entity_5;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_NamedIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_Entity_5;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_Entity_5;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_Entity_5:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_SubClassOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000031;
 if (tokens->items[*pos].type != 46) 
  goto OWL2_parse_SubClassOf_0;
 child = ast_new_node();
 child->tokenId = 46;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_SubClassOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_SubClassOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_subClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_SubClassOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_superClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_SubClassOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_SubClassOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_SubClassOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_subClassExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000032;
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_subClassExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_subClassExpression_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_superClassExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000033;
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_superClassExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_superClassExpression_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_EquivalentClasses(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000034;
 if (tokens->items[*pos].type != 47) 
  goto OWL2_parse_EquivalentClasses_0;
 child = ast_new_node();
 child->tokenId = 47;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_EquivalentClasses_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentClasses_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentClasses_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentClasses_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentClasses_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_EquivalentClasses_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_EquivalentClasses_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ClassExpressionList(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000035;
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpressionList_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpressionList_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpressionList_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpressionList_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpressionList_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ClassExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000036;
 if ((child = OWL2_parse_Class(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectIntersectionOf(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectUnionOf(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_2:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectComplementOf(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_3;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_3:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectOneOf(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_4;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_4:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectSomeValuesFrom(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_5;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_5:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectAllValuesFrom(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_6;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_6:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectHasValue(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_7;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_7:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectHasSelf(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_8;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_8:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectMinCardinality(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_9;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_9:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectMaxCardinality(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_10;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_10:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectExactCardinality(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_11;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_11:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataSomeValuesFrom(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_12;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_12:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataAllValuesFrom(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_13;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_13:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataHasValue(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_14;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_14:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataMinCardinality(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_15;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_15:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataMaxCardinality(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_16;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_16:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataExactCardinality(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassExpression_17;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ClassExpression_17:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DisjointClasses(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000037;
 if (tokens->items[*pos].type != 81) 
  goto OWL2_parse_DisjointClasses_0;
 child = ast_new_node();
 child->tokenId = 81;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DisjointClasses_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointClasses_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointClasses_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointClasses_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointClasses_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DisjointClasses_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DisjointClasses_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DisjointUnion(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000038;
 if (tokens->items[*pos].type != 82) 
  goto OWL2_parse_DisjointUnion_0;
 child = ast_new_node();
 child->tokenId = 82;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DisjointUnion_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointUnion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Class(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointUnion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_disjointClassExpressions(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointUnion_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DisjointUnion_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DisjointUnion_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_SubObjectPropertyOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000039;
 if (tokens->items[*pos].type != 48) 
  goto OWL2_parse_SubObjectPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 48;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_SubObjectPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_SubObjectPropertyOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_subObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_SubObjectPropertyOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_superObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_SubObjectPropertyOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_SubObjectPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_SubObjectPropertyOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_EquivalentObjectProperties(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000040;
 if (tokens->items[*pos].type != 49) 
  goto OWL2_parse_EquivalentObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 49;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_EquivalentObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentObjectProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentObjectProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentObjectProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentObjectProperties_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_EquivalentObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_EquivalentObjectProperties_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DisjointObjectProperties(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000041;
 if (tokens->items[*pos].type != 50) 
  goto OWL2_parse_DisjointObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 50;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DisjointObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointObjectProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointObjectProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointObjectProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointObjectProperties_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DisjointObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DisjointObjectProperties_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_InverseObjectProperties(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000042;
 if (tokens->items[*pos].type != 83) 
  goto OWL2_parse_InverseObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 83;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_InverseObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_InverseObjectProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_InverseObjectProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_InverseObjectProperties_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_InverseObjectProperties_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_InverseObjectProperties_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectPropertyDomain(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000043;
 if (tokens->items[*pos].type != 39) 
  goto OWL2_parse_ObjectPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 39;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyDomain_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyDomain_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyDomain_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectPropertyDomain_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectPropertyRange(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000044;
 if (tokens->items[*pos].type != 40) 
  goto OWL2_parse_ObjectPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 40;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyRange_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyRange_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyRange_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectPropertyRange_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_FunctionalObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000045;
 if (tokens->items[*pos].type != 51) 
  goto OWL2_parse_FunctionalObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 51;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_FunctionalObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_FunctionalObjectProperty_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_FunctionalObjectProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_FunctionalObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_FunctionalObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_InverseFunctionalObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000046;
 if (tokens->items[*pos].type != 52) 
  goto OWL2_parse_InverseFunctionalObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 52;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_InverseFunctionalObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_InverseFunctionalObjectProperty_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_InverseFunctionalObjectProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_InverseFunctionalObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_InverseFunctionalObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ReflexiveObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000047;
 if (tokens->items[*pos].type != 53) 
  goto OWL2_parse_ReflexiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 53;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ReflexiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_ReflexiveObjectProperty_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ReflexiveObjectProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ReflexiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ReflexiveObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_IrreflexiveObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000048;
 if (tokens->items[*pos].type != 54) 
  goto OWL2_parse_IrreflexiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 54;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_IrreflexiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_IrreflexiveObjectProperty_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_IrreflexiveObjectProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_IrreflexiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_IrreflexiveObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_SymmetricObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000049;
 if (tokens->items[*pos].type != 55) 
  goto OWL2_parse_SymmetricObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 55;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_SymmetricObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_SymmetricObjectProperty_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_SymmetricObjectProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_SymmetricObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_SymmetricObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AsymmetricObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000050;
 if (tokens->items[*pos].type != 56) 
  goto OWL2_parse_AsymmetricObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 56;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_AsymmetricObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_AsymmetricObjectProperty_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_AsymmetricObjectProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_AsymmetricObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_AsymmetricObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_TransitiveObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000051;
 if (tokens->items[*pos].type != 57) 
  goto OWL2_parse_TransitiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 57;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_TransitiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_TransitiveObjectProperty_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_TransitiveObjectProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_TransitiveObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_TransitiveObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectPropertyExpressionList(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000052;
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyExpressionList_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyExpressionList_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyExpressionList_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyExpressionList_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyExpressionList_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_SubDataPropertyOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000053;
 if (tokens->items[*pos].type != 58) 
  goto OWL2_parse_SubDataPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 58;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_SubDataPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_SubDataPropertyOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_subDataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_SubDataPropertyOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_superDataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_SubDataPropertyOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_SubDataPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_SubDataPropertyOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_EquivalentDataProperties(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000054;
 if (tokens->items[*pos].type != 59) 
  goto OWL2_parse_EquivalentDataProperties_0;
 child = ast_new_node();
 child->tokenId = 59;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_EquivalentDataProperties_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentDataProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentDataProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentDataProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_EquivalentDataProperties_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_EquivalentDataProperties_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_EquivalentDataProperties_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DisjointDataProperties(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000055;
 if (tokens->items[*pos].type != 60) 
  goto OWL2_parse_DisjointDataProperties_0;
 child = ast_new_node();
 child->tokenId = 60;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DisjointDataProperties_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointDataProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointDataProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointDataProperties_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_DisjointDataProperties_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DisjointDataProperties_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DisjointDataProperties_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataPropertyDomain(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000056;
 if (tokens->items[*pos].type != 42) 
  goto OWL2_parse_DataPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 42;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyDomain_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyDomain_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyDomain_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataPropertyDomain_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataPropertyRange(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000057;
 if (tokens->items[*pos].type != 43) 
  goto OWL2_parse_DataPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 43;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyRange_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyRange_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyRange_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataPropertyRange_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_FunctionalDataProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000058;
 if (tokens->items[*pos].type != 61) 
  goto OWL2_parse_FunctionalDataProperty_0;
 child = ast_new_node();
 child->tokenId = 61;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_FunctionalDataProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_FunctionalDataProperty_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_FunctionalDataProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_FunctionalDataProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_FunctionalDataProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataPropertyExpressionList(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000059;
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyExpressionList_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyExpressionList_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyExpressionList_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyExpressionList_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyExpressionList_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataRange(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000060;
 if ((child = OWL2_parse_Datatype(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRange_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataRange_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataIntersectionOf(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRange_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataRange_1:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataUnionOf(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRange_2;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataRange_2:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataComplementOf(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRange_3;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataRange_3:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataOneOf(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRange_4;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataRange_4:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DatatypeRestriction(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRange_5;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataRange_5:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_SameIndividual(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000061;
 if (tokens->items[*pos].type != 62) 
  goto OWL2_parse_SameIndividual_0;
 child = ast_new_node();
 child->tokenId = 62;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_SameIndividual_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_SameIndividual_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_SameIndividual_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_SameIndividual_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_IndividualList(tokens, pos)) == NULL) 
  goto OWL2_parse_SameIndividual_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_SameIndividual_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_SameIndividual_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DifferentIndividuals(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000062;
 if (tokens->items[*pos].type != 63) 
  goto OWL2_parse_DifferentIndividuals_0;
 child = ast_new_node();
 child->tokenId = 63;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DifferentIndividuals_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DifferentIndividuals_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_DifferentIndividuals_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_DifferentIndividuals_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_IndividualList(tokens, pos)) == NULL) 
  goto OWL2_parse_DifferentIndividuals_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DifferentIndividuals_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DifferentIndividuals_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ClassAssertion(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000063;
 if (tokens->items[*pos].type != 34) 
  goto OWL2_parse_ClassAssertion_0;
 child = ast_new_node();
 child->tokenId = 34;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ClassAssertion_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_ClassAssertion_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ClassAssertion_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ClassAssertion_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectPropertyAssertion(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000064;
 if (tokens->items[*pos].type != 38) 
  goto OWL2_parse_ObjectPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 38;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_sourceIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_targetIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyAssertion_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectPropertyAssertion_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_NegativeObjectPropertyAssertion(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000065;
 if (tokens->items[*pos].type != 64) 
  goto OWL2_parse_NegativeObjectPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 64;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_NegativeObjectPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_NegativeObjectPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_NegativeObjectPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_sourceIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_NegativeObjectPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_targetIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_NegativeObjectPropertyAssertion_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_NegativeObjectPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_NegativeObjectPropertyAssertion_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataPropertyAssertion(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000066;
 if (tokens->items[*pos].type != 20) 
  goto OWL2_parse_DataPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 20;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_sourceIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_targetValue(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyAssertion_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataPropertyAssertion_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_NegativeDataPropertyAssertion(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000067;
 if (tokens->items[*pos].type != 65) 
  goto OWL2_parse_NegativeDataPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 65;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_NegativeDataPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_NegativeDataPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_NegativeDataPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_sourceIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_NegativeDataPropertyAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_targetValue(tokens, pos)) == NULL) 
  goto OWL2_parse_NegativeDataPropertyAssertion_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_NegativeDataPropertyAssertion_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_NegativeDataPropertyAssertion_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_IndividualList(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000068;
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_IndividualList_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_IndividualList(tokens, pos)) == NULL) 
  goto OWL2_parse_IndividualList_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_IndividualList_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_IndividualList_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_IndividualList_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AnnotationAssertion(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000069;
 if (tokens->items[*pos].type != 13) 
  goto OWL2_parse_AnnotationAssertion_0;
 child = ast_new_node();
 child->tokenId = 13;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_AnnotationAssertion_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_AnnotationProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_AnnotationSubject(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationAssertion_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_AnnotationValue(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationAssertion_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_AnnotationAssertion_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_AnnotationAssertion_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_SubAnnotationPropertyOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000070;
 if (tokens->items[*pos].type != 14) 
  goto OWL2_parse_SubAnnotationPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 14;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_SubAnnotationPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_SubAnnotationPropertyOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_AnnotationProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_SubAnnotationPropertyOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_SubAnnotationPropertyOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_SubAnnotationPropertyOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_SubAnnotationPropertyOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AnnotationPropertyDomain(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000071;
 if (tokens->items[*pos].type != 15) 
  goto OWL2_parse_AnnotationPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 15;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_AnnotationPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationPropertyDomain_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_AnnotationProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationPropertyDomain_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationPropertyDomain_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_AnnotationPropertyDomain_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_AnnotationPropertyDomain_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AnnotationPropertyRange(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000072;
 if (tokens->items[*pos].type != 16) 
  goto OWL2_parse_AnnotationPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 16;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_AnnotationPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_axiomAnnotations(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationPropertyRange_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_AnnotationProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationPropertyRange_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationPropertyRange_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_AnnotationPropertyRange_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_AnnotationPropertyRange_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Class(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000073;
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_Class_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Class_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000074;
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectProperty_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000075;
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_DataProperty_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_NamedIndividual(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000076;
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_NamedIndividual_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_NamedIndividual_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectIntersectionOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000077;
 if (tokens->items[*pos].type != 66) 
  goto OWL2_parse_ObjectIntersectionOf_0;
 child = ast_new_node();
 child->tokenId = 66;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectIntersectionOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectIntersectionOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectIntersectionOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectIntersectionOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectIntersectionOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectIntersectionOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectUnionOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000078;
 if (tokens->items[*pos].type != 67) 
  goto OWL2_parse_ObjectUnionOf_0;
 child = ast_new_node();
 child->tokenId = 67;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectUnionOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectUnionOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectUnionOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectUnionOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectUnionOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectUnionOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectComplementOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000079;
 if (tokens->items[*pos].type != 68) 
  goto OWL2_parse_ObjectComplementOf_0;
 child = ast_new_node();
 child->tokenId = 68;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectComplementOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectComplementOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectComplementOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectComplementOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectOneOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000080;
 if (tokens->items[*pos].type != 69) 
  goto OWL2_parse_ObjectOneOf_0;
 child = ast_new_node();
 child->tokenId = 69;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectOneOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectOneOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_IndividualList(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectOneOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectOneOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectOneOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectSomeValuesFrom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000081;
 if (tokens->items[*pos].type != 70) 
  goto OWL2_parse_ObjectSomeValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 70;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectSomeValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectSomeValuesFrom_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectSomeValuesFrom_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectSomeValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectSomeValuesFrom_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectAllValuesFrom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000082;
 if (tokens->items[*pos].type != 71) 
  goto OWL2_parse_ObjectAllValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 71;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectAllValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectAllValuesFrom_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectAllValuesFrom_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectAllValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectAllValuesFrom_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectHasValue(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000083;
 if (tokens->items[*pos].type != 72) 
  goto OWL2_parse_ObjectHasValue_0;
 child = ast_new_node();
 child->tokenId = 72;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectHasValue_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectHasValue_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectHasValue_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectHasValue_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectHasValue_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectHasSelf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000084;
 if (tokens->items[*pos].type != 73) 
  goto OWL2_parse_ObjectHasSelf_0;
 child = ast_new_node();
 child->tokenId = 73;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectHasSelf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectHasSelf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectHasSelf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectHasSelf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectMinCardinality(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000085;
 if (tokens->items[*pos].type != 74) 
  goto OWL2_parse_ObjectMinCardinality_0;
 child = ast_new_node();
 child->tokenId = 74;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectMinCardinality_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_ObjectMinCardinality_0;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectMinCardinality_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectMinCardinality_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectMinCardinality_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectMinCardinality_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 74) 
  goto OWL2_parse_ObjectMinCardinality_1;
 child = ast_new_node();
 child->tokenId = 74;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectMinCardinality_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_ObjectMinCardinality_1;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectMinCardinality_1;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectMinCardinality_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectMinCardinality_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectMaxCardinality(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000086;
 if (tokens->items[*pos].type != 75) 
  goto OWL2_parse_ObjectMaxCardinality_0;
 child = ast_new_node();
 child->tokenId = 75;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectMaxCardinality_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_ObjectMaxCardinality_0;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectMaxCardinality_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectMaxCardinality_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectMaxCardinality_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectMaxCardinality_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 75) 
  goto OWL2_parse_ObjectMaxCardinality_1;
 child = ast_new_node();
 child->tokenId = 75;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectMaxCardinality_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_ObjectMaxCardinality_1;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectMaxCardinality_1;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectMaxCardinality_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectMaxCardinality_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectExactCardinality(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000087;
 if (tokens->items[*pos].type != 76) 
  goto OWL2_parse_ObjectExactCardinality_0;
 child = ast_new_node();
 child->tokenId = 76;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectExactCardinality_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_ObjectExactCardinality_0;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectExactCardinality_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectExactCardinality_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectExactCardinality_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectExactCardinality_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 76) 
  goto OWL2_parse_ObjectExactCardinality_1;
 child = ast_new_node();
 child->tokenId = 76;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_ObjectExactCardinality_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_ObjectExactCardinality_1;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectExactCardinality_1;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_ObjectExactCardinality_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_ObjectExactCardinality_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataSomeValuesFrom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000088;
 if (tokens->items[*pos].type != 21) 
  goto OWL2_parse_DataSomeValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 21;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataSomeValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataSomeValuesFrom_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_DataSomeValuesFrom_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataSomeValuesFrom_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataSomeValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataSomeValuesFrom_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataAllValuesFrom(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000089;
 if (tokens->items[*pos].type != 22) 
  goto OWL2_parse_DataAllValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 22;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataAllValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataAllValuesFrom_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_DataAllValuesFrom_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataAllValuesFrom_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataAllValuesFrom_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataAllValuesFrom_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataHasValue(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000090;
 if (tokens->items[*pos].type != 23) 
  goto OWL2_parse_DataHasValue_0;
 child = ast_new_node();
 child->tokenId = 23;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataHasValue_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataHasValue_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_Literal(tokens, pos)) == NULL) 
  goto OWL2_parse_DataHasValue_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataHasValue_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataHasValue_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataMinCardinality(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000091;
 if (tokens->items[*pos].type != 24) 
  goto OWL2_parse_DataMinCardinality_0;
 child = ast_new_node();
 child->tokenId = 24;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataMinCardinality_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_DataMinCardinality_0;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataMinCardinality_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataMinCardinality_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataMinCardinality_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataMinCardinality_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 24) 
  goto OWL2_parse_DataMinCardinality_1;
 child = ast_new_node();
 child->tokenId = 24;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataMinCardinality_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_DataMinCardinality_1;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataMinCardinality_1;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataMinCardinality_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataMinCardinality_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataMaxCardinality(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000092;
 if (tokens->items[*pos].type != 25) 
  goto OWL2_parse_DataMaxCardinality_0;
 child = ast_new_node();
 child->tokenId = 25;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataMaxCardinality_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_DataMaxCardinality_0;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataMaxCardinality_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataMaxCardinality_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataMaxCardinality_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataMaxCardinality_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 25) 
  goto OWL2_parse_DataMaxCardinality_1;
 child = ast_new_node();
 child->tokenId = 25;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataMaxCardinality_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_DataMaxCardinality_1;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataMaxCardinality_1;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataMaxCardinality_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataMaxCardinality_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataExactCardinality(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000093;
 if (tokens->items[*pos].type != 26) 
  goto OWL2_parse_DataExactCardinality_0;
 child = ast_new_node();
 child->tokenId = 26;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataExactCardinality_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_DataExactCardinality_0;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataExactCardinality_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataExactCardinality_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataExactCardinality_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataExactCardinality_0:
 *pos = opos;
 ast_clear(subtree);
 if (tokens->items[*pos].type != 26) 
  goto OWL2_parse_DataExactCardinality_1;
 child = ast_new_node();
 child->tokenId = 26;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataExactCardinality_1;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 6) 
  goto OWL2_parse_DataExactCardinality_1;
 child = ast_new_node();
 child->tokenId = 6;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_DataExactCardinality_1;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataExactCardinality_1;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataExactCardinality_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_disjointClassExpressions(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000094;
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_disjointClassExpressions_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_disjointClassExpressions_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ClassExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_disjointClassExpressions_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_disjointClassExpressions_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_subObjectPropertyExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000095;
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_subObjectPropertyExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_subObjectPropertyExpression_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_propertyExpressionChain(tokens, pos)) == NULL) 
  goto OWL2_parse_subObjectPropertyExpression_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_subObjectPropertyExpression_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_propertyExpressionChain(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000096;
 if (tokens->items[*pos].type != 37) 
  goto OWL2_parse_propertyExpressionChain_0;
 child = ast_new_node();
 child->tokenId = 37;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_propertyExpressionChain_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_propertyExpressionChain_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_propertyExpressionChain_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_ObjectPropertyExpressionList(tokens, pos)) == NULL) 
  goto OWL2_parse_propertyExpressionChain_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_propertyExpressionChain_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_propertyExpressionChain_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_superObjectPropertyExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000097;
 if ((child = OWL2_parse_ObjectPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_superObjectPropertyExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_superObjectPropertyExpression_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_ObjectPropertyExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000098;
 if ((child = OWL2_parse_ObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyExpression_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_InverseObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_ObjectPropertyExpression_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_ObjectPropertyExpression_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_InverseObjectProperty(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000099;
 if (tokens->items[*pos].type != 77) 
  goto OWL2_parse_InverseObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 77;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_InverseObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_ObjectProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_InverseObjectProperty_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_InverseObjectProperty_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_InverseObjectProperty_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_subDataPropertyExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000100;
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_subDataPropertyExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_subDataPropertyExpression_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_superDataPropertyExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000101;
 if ((child = OWL2_parse_DataPropertyExpression(tokens, pos)) == NULL) 
  goto OWL2_parse_superDataPropertyExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_superDataPropertyExpression_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataPropertyExpression(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000102;
 if ((child = OWL2_parse_DataProperty(tokens, pos)) == NULL) 
  goto OWL2_parse_DataPropertyExpression_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataPropertyExpression_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataIntersectionOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000103;
 if (tokens->items[*pos].type != 27) 
  goto OWL2_parse_DataIntersectionOf_0;
 child = ast_new_node();
 child->tokenId = 27;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataIntersectionOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataIntersectionOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataIntersectionOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRangeList(tokens, pos)) == NULL) 
  goto OWL2_parse_DataIntersectionOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataIntersectionOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataIntersectionOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataUnionOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000104;
 if (tokens->items[*pos].type != 28) 
  goto OWL2_parse_DataUnionOf_0;
 child = ast_new_node();
 child->tokenId = 28;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataUnionOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataUnionOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataUnionOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRangeList(tokens, pos)) == NULL) 
  goto OWL2_parse_DataUnionOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataUnionOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataUnionOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataComplementOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000105;
 if (tokens->items[*pos].type != 29) 
  goto OWL2_parse_DataComplementOf_0;
 child = ast_new_node();
 child->tokenId = 29;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataComplementOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataComplementOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataComplementOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataComplementOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataOneOf(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000106;
 if (tokens->items[*pos].type != 30) 
  goto OWL2_parse_DataOneOf_0;
 child = ast_new_node();
 child->tokenId = 30;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DataOneOf_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_Literal(tokens, pos)) == NULL) 
  goto OWL2_parse_DataOneOf_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_LiteralList(tokens, pos)) == NULL) 
  goto OWL2_parse_DataOneOf_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DataOneOf_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DataOneOf_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DatatypeRestriction(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000107;
 if (tokens->items[*pos].type != 31) 
  goto OWL2_parse_DatatypeRestriction_0;
 child = ast_new_node();
 child->tokenId = 31;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if (tokens->items[*pos].type != 3) 
  goto OWL2_parse_DatatypeRestriction_0;
 child = ast_new_node();
 child->tokenId = 3;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 if ((child = OWL2_parse_Datatype(tokens, pos)) == NULL) 
  goto OWL2_parse_DatatypeRestriction_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_constrainingFacet(tokens, pos)) == NULL) 
  goto OWL2_parse_DatatypeRestriction_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_restrictionValue(tokens, pos)) == NULL) 
  goto OWL2_parse_DatatypeRestriction_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_crList(tokens, pos)) == NULL) 
  goto OWL2_parse_DatatypeRestriction_0;
 ast_add_child(subtree, child);
 if (tokens->items[*pos].type != 4) 
  goto OWL2_parse_DatatypeRestriction_0;
 child = ast_new_node();
 child->tokenId = 4;
 child->data = tokens->items[*pos].value;
 ast_add_child(subtree, child);
 ++(*pos);
 return subtree;
OWL2_parse_DatatypeRestriction_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_DataRangeList(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000108;
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRangeList_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_DataRangeList(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRangeList_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataRangeList_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_DataRange(tokens, pos)) == NULL) 
  goto OWL2_parse_DataRangeList_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_DataRangeList_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_LiteralList(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000109;
 if ((child = OWL2_parse_Literal(tokens, pos)) == NULL) 
  goto OWL2_parse_LiteralList_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_LiteralList(tokens, pos)) == NULL) 
  goto OWL2_parse_LiteralList_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_LiteralList_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_Literal(tokens, pos)) == NULL) 
  goto OWL2_parse_LiteralList_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_LiteralList_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_crList(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000110;
 if ((child = OWL2_parse_constrainingFacet(tokens, pos)) == NULL) 
  goto OWL2_parse_crList_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_restrictionValue(tokens, pos)) == NULL) 
  goto OWL2_parse_crList_0;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_crList(tokens, pos)) == NULL) 
  goto OWL2_parse_crList_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_crList_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_constrainingFacet(tokens, pos)) == NULL) 
  goto OWL2_parse_crList_1;
 ast_add_child(subtree, child);
 if ((child = OWL2_parse_restrictionValue(tokens, pos)) == NULL) 
  goto OWL2_parse_crList_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_crList_1:
 *pos = opos;
 ast_clear(subtree);
 return subtree;
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_constrainingFacet(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000111;
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_constrainingFacet_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_constrainingFacet_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_restrictionValue(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000112;
 if ((child = OWL2_parse_Literal(tokens, pos)) == NULL) 
  goto OWL2_parse_restrictionValue_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_restrictionValue_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_Individual(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000113;
 if ((child = OWL2_parse_NamedIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_Individual_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Individual_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_AnonymousIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_Individual_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_Individual_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_sourceIndividual(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000114;
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_sourceIndividual_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_sourceIndividual_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_targetIndividual(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000115;
 if ((child = OWL2_parse_Individual(tokens, pos)) == NULL) 
  goto OWL2_parse_targetIndividual_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_targetIndividual_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_targetValue(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000116;
 if ((child = OWL2_parse_Literal(tokens, pos)) == NULL) 
  goto OWL2_parse_targetValue_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_targetValue_0:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse_AnnotationSubject(token_list* tokens, int *pos) {
 int opos = *pos;
 ast_node* subtree = ast_new_node();
 ast_node* child = NULL;
 subtree->tokenId = 1000000117;
 if ((child = OWL2_parse_IRI(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationSubject_0;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationSubject_0:
 *pos = opos;
 ast_clear(subtree);
 if ((child = OWL2_parse_AnonymousIndividual(tokens, pos)) == NULL) 
  goto OWL2_parse_AnnotationSubject_1;
 ast_add_child(subtree, child);
 return subtree;
OWL2_parse_AnnotationSubject_1:
 *pos = opos;
 ast_clear(subtree);
 free(subtree);
 return NULL;
}

ast_node* OWL2_parse(token_list* tokens, int* pos) {
 return ast_invert_siblings(OWL2_parse_ontologyDocument(tokens, pos), NULL);
}


parse_result* OWL2_parse_string(const char* text) {
 int i;
 parse_result* pr = (parse_result*) malloc(sizeof(parse_result));
 memset(pr, 0, sizeof(parse_result));
 pr->tokens = OWL2_tokenize_string(text);
 if (pr->tokens == NULL) {
  printf("Invalid Input at position %d, '%s'\n", OWL2_inv_token_pos, OWL2_inv_token_txt);
  parse_result_free(pr);
  return NULL;
 }
 i = 0;
 pr->ast = OWL2_parse(pr->tokens, &i);
 return pr;
}

parse_result* OWL2_parse_file(const char* fileName) {
 int i;
 parse_result* pr = (parse_result*) malloc(sizeof(parse_result));
 memset(pr, 0, sizeof(parse_result));
 pr->tokens = OWL2_tokenize_file(fileName);
 if (pr->tokens == NULL) {
  if (errno == 0) {
   printf("Invalid Input at position %d, '%s'\n", OWL2_inv_token_pos, OWL2_inv_token_txt);
  }
  parse_result_free(pr);
  return NULL;
 }
 i = 0;
 pr->ast = OWL2_parse(pr->tokens, &i);
 return pr;
}

