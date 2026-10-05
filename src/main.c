#ifndef UNITY_H
#define UNITY_H
#include "../lib/unity.h"
#endif


char *AUTHOR_NAME       = "Caden Johns";
char *AUTHOR_AUTHORSHIP = "I acknowledge that I have worked on this assignment independently, except where explicitly noted and referenced. Any collaboration or use of external resources has been properly cited. I am fully aware of the consequences of academic dishonesty and agree to abide by the university's academic integrity policy.";


// ============================================================
// Declarations — implemented in tests.c
// ============================================================

void test_initNode_sets_value(void);
void test_initNode_sets_next_null(void);
void test_initNode_null_guard(void);
void test_createNode_not_null(void);
void test_createNode_value(void);
void test_createNode_next_null(void);
void test_destroyNode_sets_null(void);
void test_addFirst_empty_list(void);
void test_addFirst_non_empty(void);
void test_addFirst_null_headptr(void);
void test_addLast_empty_list(void);
void test_addLast_non_empty(void);
void test_addLast_null_guard(void);
void test_detachFirst_returns_node(void);
void test_detachFirst_updates_head(void);
void test_detachFirst_empty_list(void);
void test_detachValue_found(void);
void test_detachValue_head(void);
void test_detachValue_not_found(void);
void test_deleteFirst_removes_node(void);
void test_deleteFirst_empty_list(void);
void test_deleteValue_found(void);
void test_deleteValue_not_found(void);
void test_destroyList_empties_list(void);
void test_listLength_empty(void);
void test_listLength_three(void);
void test_printList_empty(void);

void setUp(void)    {}
void tearDown(void) {}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_initNode_sets_value);
    RUN_TEST(test_initNode_sets_next_null);
    RUN_TEST(test_initNode_null_guard);
    RUN_TEST(test_createNode_not_null);
    RUN_TEST(test_createNode_value);
    RUN_TEST(test_createNode_next_null);
    
    RUN_TEST(test_destroyNode_sets_null);
    RUN_TEST(test_addFirst_empty_list);
    RUN_TEST(test_addFirst_non_empty);
    RUN_TEST(test_addFirst_null_headptr);
    RUN_TEST(test_addLast_empty_list);
    
    RUN_TEST(test_addLast_non_empty);
    RUN_TEST(test_addLast_null_guard);
    RUN_TEST(test_detachFirst_returns_node);
    RUN_TEST(test_detachFirst_updates_head);
    RUN_TEST(test_detachFirst_empty_list);
    RUN_TEST(test_detachValue_found);
    
    RUN_TEST(test_detachValue_head);
    
    RUN_TEST(test_detachValue_not_found);
    
    RUN_TEST(test_deleteFirst_removes_node);
    
    RUN_TEST(test_deleteFirst_empty_list);
    RUN_TEST(test_deleteValue_found);
    
    RUN_TEST(test_deleteValue_not_found);
    RUN_TEST(test_destroyList_empties_list);
    RUN_TEST(test_listLength_empty);
    RUN_TEST(test_listLength_three);
    RUN_TEST(test_printList_empty);
    return UNITY_END();
}

// ============================================================
//  SANDBOX
//  Add any manual experiments below.
//  This file is NOT used by CI.
// ============================================================