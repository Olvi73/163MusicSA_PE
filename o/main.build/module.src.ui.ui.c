/* Generated code for Python module 'src.ui.ui'
 * created by Nuitka version 0.6.9.4
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_src$ui$ui" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_src$ui$ui;
PyDictObject *moduledict_src$ui$ui;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[220];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "src.ui.ui", 220);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_src$ui$ui(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "src.ui.ui", 220);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1a94deaa1852a198195d4491d0abac1c;
static PyCodeObject *codeobj_1cbe8b9341d14d1d4d11a149583c6152;
static PyCodeObject *codeobj_d6d70972538d040ed3d309562ca492da;
static PyCodeObject *codeobj_49a1d1d0fdc1dde9b897536938e86fa2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[214]); CHECK_OBJECT(module_filename_obj);
    codeobj_1a94deaa1852a198195d4491d0abac1c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[215], mod_consts[216], 0, 0, 0);
    codeobj_1cbe8b9341d14d1d4d11a149583c6152 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_NOFREE, mod_consts[201], mod_consts[217], 0, 0, 0);
    codeobj_d6d70972538d040ed3d309562ca492da = MAKE_CODEOBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[218], 2, 0, 0);
    codeobj_49a1d1d0fdc1dde9b897536938e86fa2 = MAKE_CODEOBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[219], 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function_2__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_src$ui$ui$$$function_1_setupUi();


static PyObject *MAKE_FUNCTION_src$ui$ui$$$function_2_retranslateUi();


// The module function definitions.
static PyObject *impl_src$ui$ui$$$function_1_setupUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_MainWindow = python_pars[1];
    PyObject *var_font = NULL;
    PyObject *var_item = NULL;
    struct Nuitka_FrameObject *frame_49a1d1d0fdc1dde9b897536938e86fa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_49a1d1d0fdc1dde9b897536938e86fa2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_49a1d1d0fdc1dde9b897536938e86fa2)) {
        Py_XDECREF(cache_frame_49a1d1d0fdc1dde9b897536938e86fa2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_49a1d1d0fdc1dde9b897536938e86fa2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_49a1d1d0fdc1dde9b897536938e86fa2 = MAKE_FUNCTION_FRAME(codeobj_49a1d1d0fdc1dde9b897536938e86fa2, module_src$ui$ui, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_49a1d1d0fdc1dde9b897536938e86fa2->m_type_description == NULL);
    frame_49a1d1d0fdc1dde9b897536938e86fa2 = cache_frame_49a1d1d0fdc1dde9b897536938e86fa2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_49a1d1d0fdc1dde9b897536938e86fa2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_49a1d1d0fdc1dde9b897536938e86fa2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_MainWindow);
        tmp_called_instance_1 = par_MainWindow;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 14;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[1], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_MainWindow);
        tmp_called_instance_2 = par_MainWindow;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 15;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, mod_consts[2], &PyTuple_GET_ITEM(mod_consts[3], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_MainWindow);
        tmp_expression_name_1 = par_MainWindow;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[4]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_1;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 16;
        tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, mod_consts[6], &PyTuple_GET_ITEM(mod_consts[7], 0));

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 16;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_MainWindow);
        tmp_expression_name_2 = par_MainWindow;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[8]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 17;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_2;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 17;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, mod_consts[6], &PyTuple_GET_ITEM(mod_consts[9], 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 17;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 17;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_MainWindow);
        tmp_called_instance_5 = par_MainWindow;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 18;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[11], 0));

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_3 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 19;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = tmp_mvar_value_3;
        CHECK_OBJECT(par_MainWindow);
        tmp_args_element_name_3 = par_MainWindow;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 19;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, mod_consts[13], call_args);
        }

        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[14]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 20;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[15], 0));

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_4 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = tmp_mvar_value_4;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[16]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[14]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 21;
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[17], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[17]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[18]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_5;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 22;
        tmp_args_element_name_5 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_8, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[20], 0));

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 22;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_name_8 = par_self;
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[17]);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 23;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(par_self);
        tmp_expression_name_9 = par_self;
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[17]);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 24;
        tmp_call_result_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_10);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_name_11 = par_self;
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[17]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[22]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            Py_DECREF(tmp_called_name_5);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_6;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 25;
        tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, mod_consts[24], &PyTuple_GET_ITEM(mod_consts[25], 0));

        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 25;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(par_self);
        tmp_expression_name_12 = par_self;
        tmp_called_instance_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[17]);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 26;
        tmp_call_result_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, mod_consts[26], &PyTuple_GET_ITEM(mod_consts[27], 0));

        Py_DECREF(tmp_called_instance_12);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(par_self);
        tmp_expression_name_13 = par_self;
        tmp_called_instance_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[17]);
        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 27;
        tmp_call_result_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[28], 0));

        Py_DECREF(tmp_called_instance_13);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_7 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = tmp_mvar_value_7;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[29]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_15 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[14]);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 28;
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[30], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_mvar_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_name_17 = par_self;
        tmp_expression_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[30]);
        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[18]);
        Py_DECREF(tmp_expression_name_16);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_14 = tmp_mvar_value_8;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 29;
        tmp_args_element_name_8 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_14, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[31], 0));

        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 29;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_8);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(par_self);
        tmp_expression_name_18 = par_self;
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[30]);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 30;
        tmp_call_result_14 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_15, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[32], 0));

        Py_DECREF(tmp_called_instance_15);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(par_self);
        tmp_expression_name_19 = par_self;
        tmp_called_instance_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[30]);
        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 44;
        tmp_call_result_15 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_16, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_16);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(par_self);
        tmp_expression_name_20 = par_self;
        tmp_called_instance_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[30]);
        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 45;
        tmp_call_result_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_17, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[33], 0));

        Py_DECREF(tmp_called_instance_17);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_9 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_21 = tmp_mvar_value_9;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[29]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_22 = par_self;
        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[14]);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_8);

            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 46;
        tmp_assattr_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[34], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_mvar_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_name_24 = par_self;
        tmp_expression_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[34]);
        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[18]);
        Py_DECREF(tmp_expression_name_23);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            Py_DECREF(tmp_called_name_9);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_18 = tmp_mvar_value_10;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 47;
        tmp_args_element_name_10 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_18, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[35], 0));

        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 47;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(par_self);
        tmp_expression_name_25 = par_self;
        tmp_called_instance_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[34]);
        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 48;
        tmp_call_result_18 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_19, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[36], 0));

        Py_DECREF(tmp_called_instance_19);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(par_self);
        tmp_expression_name_26 = par_self;
        tmp_called_instance_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[34]);
        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 60;
        tmp_call_result_19 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_20, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_20);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(par_self);
        tmp_expression_name_27 = par_self;
        tmp_called_instance_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[34]);
        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 61;
        tmp_call_result_20 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_21, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[37], 0));

        Py_DECREF(tmp_called_instance_21);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_10;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_assattr_target_5;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_11 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_28 = tmp_mvar_value_11;
        tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[38]);
        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_29 = par_self;
        tmp_args_element_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[14]);
        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_10);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 62;
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_10);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[39], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_mvar_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_name_31 = par_self;
        tmp_expression_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[39]);
        if (tmp_expression_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[18]);
        Py_DECREF(tmp_expression_name_30);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            Py_DECREF(tmp_called_name_11);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_22 = tmp_mvar_value_12;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 63;
        tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_22, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[40], 0));

        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 63;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_mvar_value_13;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_13 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_23 = tmp_mvar_value_13;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 64;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, mod_consts[41]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_font == NULL);
        var_font = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(var_font);
        tmp_called_instance_24 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 65;
        tmp_call_result_22 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_24, mod_consts[42], &PyTuple_GET_ITEM(mod_consts[43], 0));

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_instance_25;
        PyObject *tmp_call_result_23;
        CHECK_OBJECT(var_font);
        tmp_called_instance_25 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 66;
        tmp_call_result_23 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_25, mod_consts[44], &PyTuple_GET_ITEM(mod_consts[45], 0));

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_instance_26;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_name_13;
        CHECK_OBJECT(par_self);
        tmp_expression_name_32 = par_self;
        tmp_called_instance_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[39]);
        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_name_13 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_args_element_name_13};
            tmp_call_result_24 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_26, mod_consts[46], call_args);
        }

        Py_DECREF(tmp_called_instance_26);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_instance_27;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_call_result_25;
        CHECK_OBJECT(par_self);
        tmp_expression_name_33 = par_self;
        tmp_called_instance_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[39]);
        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 68;
        tmp_call_result_25 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_27, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[47], 0));

        Py_DECREF(tmp_called_instance_27);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_instance_28;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_call_result_26;
        CHECK_OBJECT(par_self);
        tmp_expression_name_34 = par_self;
        tmp_called_instance_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[39]);
        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 72;
        tmp_call_result_26 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_28, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[48], 0));

        Py_DECREF(tmp_called_instance_28);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_assattr_target_6;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_14 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_29 = tmp_mvar_value_14;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 73;
        tmp_assattr_name_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_29, mod_consts[13]);
        if (tmp_assattr_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[49], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_call_result_27;
        CHECK_OBJECT(par_self);
        tmp_expression_name_35 = par_self;
        tmp_called_instance_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[49]);
        if (tmp_called_instance_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 74;
        tmp_call_result_27 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_30, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[50], 0));

        Py_DECREF(tmp_called_instance_30);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_assattr_target_7;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_15 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_36 = tmp_mvar_value_15;
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[51]);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_37 = par_self;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[49]);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 75;
        tmp_assattr_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_assattr_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[52], tmp_assattr_name_7);
        Py_DECREF(tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_mvar_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_name_39 = par_self;
        tmp_expression_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[52]);
        if (tmp_expression_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[18]);
        Py_DECREF(tmp_expression_name_38);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            Py_DECREF(tmp_called_name_13);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_31 = tmp_mvar_value_16;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 76;
        tmp_args_element_name_15 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_31, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_13);

            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 76;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_15);
        Py_DECREF(tmp_called_name_13);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_instance_32;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_call_result_29;
        CHECK_OBJECT(par_self);
        tmp_expression_name_40 = par_self;
        tmp_called_instance_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[52]);
        if (tmp_called_instance_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 77;
        tmp_call_result_29 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_32, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[54], 0));

        Py_DECREF(tmp_called_instance_32);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_instance_33;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_call_result_30;
        CHECK_OBJECT(par_self);
        tmp_expression_name_41 = par_self;
        tmp_called_instance_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[52]);
        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 82;
        tmp_call_result_30 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_33, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[55], 0));

        Py_DECREF(tmp_called_instance_33);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_assattr_target_8;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_17 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_42 = tmp_mvar_value_17;
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[16]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_43 = par_self;
        tmp_args_element_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[49]);
        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 83;
        tmp_assattr_name_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_assattr_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[56], tmp_assattr_name_8);
        Py_DECREF(tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_mvar_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_name_45 = par_self;
        tmp_expression_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[56]);
        if (tmp_expression_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[18]);
        Py_DECREF(tmp_expression_name_44);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            Py_DECREF(tmp_called_name_15);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_34 = tmp_mvar_value_18;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 84;
        tmp_args_element_name_17 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_34, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[57], 0));

        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 84;
        tmp_call_result_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_instance_35;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_call_result_32;
        CHECK_OBJECT(par_self);
        tmp_expression_name_46 = par_self;
        tmp_called_instance_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[56]);
        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 85;
        tmp_call_result_32 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_35, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[58], 0));

        Py_DECREF(tmp_called_instance_35);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_instance_36;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_call_result_33;
        CHECK_OBJECT(par_self);
        tmp_expression_name_47 = par_self;
        tmp_called_instance_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[56]);
        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 86;
        tmp_call_result_33 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_36, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[59], 0));

        Py_DECREF(tmp_called_instance_36);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_assattr_target_9;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_19 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_48 = tmp_mvar_value_19;
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[29]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_49 = par_self;
        tmp_args_element_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[49]);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 87;
        tmp_assattr_name_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assattr_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[60], tmp_assattr_name_9);
        Py_DECREF(tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_17;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_mvar_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_name_51 = par_self;
        tmp_expression_name_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[60]);
        if (tmp_expression_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[18]);
        Py_DECREF(tmp_expression_name_50);
        if (tmp_called_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            Py_DECREF(tmp_called_name_17);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_37 = tmp_mvar_value_20;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 88;
        tmp_args_element_name_19 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_37, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[61], 0));

        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_17);

            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 88;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_17, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_17);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_call_result_35;
        CHECK_OBJECT(par_self);
        tmp_expression_name_52 = par_self;
        tmp_called_instance_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[60]);
        if (tmp_called_instance_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 89;
        tmp_call_result_35 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_38, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[62], 0));

        Py_DECREF(tmp_called_instance_38);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_instance_39;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_call_result_36;
        CHECK_OBJECT(par_self);
        tmp_expression_name_53 = par_self;
        tmp_called_instance_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[60]);
        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 101;
        tmp_call_result_36 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_39, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[63], 0));

        Py_DECREF(tmp_called_instance_39);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_assattr_target_10;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_21 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_54 = tmp_mvar_value_21;
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[29]);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_55 = par_self;
        tmp_args_element_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[49]);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 102;
        tmp_assattr_name_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_assattr_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[64], tmp_assattr_name_10);
        Py_DECREF(tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_19;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_expression_name_57;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_instance_40;
        PyObject *tmp_mvar_value_22;
        CHECK_OBJECT(par_self);
        tmp_expression_name_57 = par_self;
        tmp_expression_name_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[64]);
        if (tmp_expression_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[18]);
        Py_DECREF(tmp_expression_name_56);
        if (tmp_called_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            Py_DECREF(tmp_called_name_19);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_40 = tmp_mvar_value_22;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 103;
        tmp_args_element_name_21 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_40, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[65], 0));

        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_19);

            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 103;
        tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_19, tmp_args_element_name_21);
        Py_DECREF(tmp_called_name_19);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_instance_41;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_call_result_38;
        CHECK_OBJECT(par_self);
        tmp_expression_name_58 = par_self;
        tmp_called_instance_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[64]);
        if (tmp_called_instance_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 104;
        tmp_call_result_38 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_41, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[62], 0));

        Py_DECREF(tmp_called_instance_41);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_instance_42;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(par_self);
        tmp_expression_name_59 = par_self;
        tmp_called_instance_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_59, mod_consts[64]);
        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 116;
        tmp_call_result_39 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_42, mod_consts[66], &PyTuple_GET_ITEM(mod_consts[67], 0));

        Py_DECREF(tmp_called_instance_42);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_instance_43;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_call_result_40;
        CHECK_OBJECT(par_self);
        tmp_expression_name_60 = par_self;
        tmp_called_instance_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[64]);
        if (tmp_called_instance_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 117;
        tmp_call_result_40 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_43, mod_consts[68], &PyTuple_GET_ITEM(mod_consts[67], 0));

        Py_DECREF(tmp_called_instance_43);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_instance_44;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_call_result_41;
        CHECK_OBJECT(par_self);
        tmp_expression_name_61 = par_self;
        tmp_called_instance_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[64]);
        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 118;
        tmp_call_result_41 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_44, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[69], 0));

        Py_DECREF(tmp_called_instance_44);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_args_element_name_23;
        CHECK_OBJECT(par_self);
        tmp_expression_name_63 = par_self;
        tmp_expression_name_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[39]);
        if (tmp_expression_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[70]);
        Py_DECREF(tmp_expression_name_62);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_64 = par_self;
        tmp_args_element_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[49]);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_23 = mod_consts[71];
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23};
            tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_20, call_args);
        }

        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_assattr_name_11;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_assattr_target_11;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_23 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_45 = tmp_mvar_value_23;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 120;
        tmp_assattr_name_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_45, mod_consts[13]);
        if (tmp_assattr_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[72], tmp_assattr_name_11);
        Py_DECREF(tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_46;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_call_result_43;
        CHECK_OBJECT(par_self);
        tmp_expression_name_65 = par_self;
        tmp_called_instance_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[72]);
        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 121;
        tmp_call_result_43 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_46, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[73], 0));

        Py_DECREF(tmp_called_instance_46);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_called_name_21;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_assattr_target_12;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_24 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_66 = tmp_mvar_value_24;
        tmp_called_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[16]);
        if (tmp_called_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_67 = par_self;
        tmp_args_element_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[72]);
        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_21);

            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 122;
        tmp_assattr_name_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_21, tmp_args_element_name_24);
        Py_DECREF(tmp_called_name_21);
        Py_DECREF(tmp_args_element_name_24);
        if (tmp_assattr_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[74], tmp_assattr_name_12);
        Py_DECREF(tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_68;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_called_instance_47;
        PyObject *tmp_mvar_value_25;
        CHECK_OBJECT(par_self);
        tmp_expression_name_69 = par_self;
        tmp_expression_name_68 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[74]);
        if (tmp_expression_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[18]);
        Py_DECREF(tmp_expression_name_68);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            Py_DECREF(tmp_called_name_22);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_47 = tmp_mvar_value_25;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 123;
        tmp_args_element_name_25 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_47, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 123;
        tmp_call_result_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_22, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_instance_48;
        PyObject *tmp_expression_name_70;
        PyObject *tmp_call_result_45;
        CHECK_OBJECT(par_self);
        tmp_expression_name_70 = par_self;
        tmp_called_instance_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_70, mod_consts[74]);
        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 124;
        tmp_call_result_45 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_48, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[54], 0));

        Py_DECREF(tmp_called_instance_48);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_instance_49;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_call_result_46;
        CHECK_OBJECT(par_self);
        tmp_expression_name_71 = par_self;
        tmp_called_instance_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[74]);
        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 129;
        tmp_call_result_46 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_49, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_49);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_instance_50;
        PyObject *tmp_expression_name_72;
        PyObject *tmp_call_result_47;
        CHECK_OBJECT(par_self);
        tmp_expression_name_72 = par_self;
        tmp_called_instance_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[74]);
        if (tmp_called_instance_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 130;
        tmp_call_result_47 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_50, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[75], 0));

        Py_DECREF(tmp_called_instance_50);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_73;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_expression_name_74;
        PyObject *tmp_assattr_target_13;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_26 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_73 = tmp_mvar_value_26;
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_73, mod_consts[16]);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_74 = par_self;
        tmp_args_element_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_74, mod_consts[72]);
        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 131;
        tmp_assattr_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_assattr_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[76], tmp_assattr_name_13);
        Py_DECREF(tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_24;
        PyObject *tmp_expression_name_75;
        PyObject *tmp_expression_name_76;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_called_instance_51;
        PyObject *tmp_mvar_value_27;
        CHECK_OBJECT(par_self);
        tmp_expression_name_76 = par_self;
        tmp_expression_name_75 = LOOKUP_ATTRIBUTE(tmp_expression_name_76, mod_consts[76]);
        if (tmp_expression_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_75, mod_consts[18]);
        Py_DECREF(tmp_expression_name_75);
        if (tmp_called_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            Py_DECREF(tmp_called_name_24);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_51 = tmp_mvar_value_27;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 132;
        tmp_args_element_name_27 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_51, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[77], 0));

        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_24);

            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 132;
        tmp_call_result_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_24, tmp_args_element_name_27);
        Py_DECREF(tmp_called_name_24);
        Py_DECREF(tmp_args_element_name_27);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_instance_52;
        PyObject *tmp_expression_name_77;
        PyObject *tmp_call_result_49;
        CHECK_OBJECT(par_self);
        tmp_expression_name_77 = par_self;
        tmp_called_instance_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_77, mod_consts[76]);
        if (tmp_called_instance_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 133;
        tmp_call_result_49 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_52, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[58], 0));

        Py_DECREF(tmp_called_instance_52);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_instance_53;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_call_result_50;
        CHECK_OBJECT(par_self);
        tmp_expression_name_78 = par_self;
        tmp_called_instance_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_78, mod_consts[76]);
        if (tmp_called_instance_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 134;
        tmp_call_result_50 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_53, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[78], 0));

        Py_DECREF(tmp_called_instance_53);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_assattr_name_14;
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_79;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_expression_name_80;
        PyObject *tmp_assattr_target_14;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_28 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_79 = tmp_mvar_value_28;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_79, mod_consts[29]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_80 = par_self;
        tmp_args_element_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_80, mod_consts[72]);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 135;
        tmp_assattr_name_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_28);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_28);
        if (tmp_assattr_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[79], tmp_assattr_name_14);
        Py_DECREF(tmp_assattr_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_26;
        PyObject *tmp_expression_name_81;
        PyObject *tmp_expression_name_82;
        PyObject *tmp_call_result_51;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_called_instance_54;
        PyObject *tmp_mvar_value_29;
        CHECK_OBJECT(par_self);
        tmp_expression_name_82 = par_self;
        tmp_expression_name_81 = LOOKUP_ATTRIBUTE(tmp_expression_name_82, mod_consts[79]);
        if (tmp_expression_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_81, mod_consts[18]);
        Py_DECREF(tmp_expression_name_81);
        if (tmp_called_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            Py_DECREF(tmp_called_name_26);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_54 = tmp_mvar_value_29;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 136;
        tmp_args_element_name_29 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_54, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[65], 0));

        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_26);

            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 136;
        tmp_call_result_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_26, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_26);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_instance_55;
        PyObject *tmp_expression_name_83;
        PyObject *tmp_call_result_52;
        CHECK_OBJECT(par_self);
        tmp_expression_name_83 = par_self;
        tmp_called_instance_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_83, mod_consts[79]);
        if (tmp_called_instance_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 137;
        tmp_call_result_52 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_55, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[80], 0));

        Py_DECREF(tmp_called_instance_55);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_instance_56;
        PyObject *tmp_expression_name_84;
        PyObject *tmp_call_result_53;
        CHECK_OBJECT(par_self);
        tmp_expression_name_84 = par_self;
        tmp_called_instance_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_84, mod_consts[79]);
        if (tmp_called_instance_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 149;
        tmp_call_result_53 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_56, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[81], 0));

        Py_DECREF(tmp_called_instance_56);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_assattr_name_15;
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_85;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_expression_name_86;
        PyObject *tmp_assattr_target_15;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_30 == NULL)) {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_30 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_85 = tmp_mvar_value_30;
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_85, mod_consts[29]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_86 = par_self;
        tmp_args_element_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_86, mod_consts[72]);
        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 150;
        tmp_assattr_name_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_30);
        Py_DECREF(tmp_called_name_27);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_assattr_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[82], tmp_assattr_name_15);
        Py_DECREF(tmp_assattr_name_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_28;
        PyObject *tmp_expression_name_87;
        PyObject *tmp_expression_name_88;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_called_instance_57;
        PyObject *tmp_mvar_value_31;
        CHECK_OBJECT(par_self);
        tmp_expression_name_88 = par_self;
        tmp_expression_name_87 = LOOKUP_ATTRIBUTE(tmp_expression_name_88, mod_consts[82]);
        if (tmp_expression_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_28 = LOOKUP_ATTRIBUTE(tmp_expression_name_87, mod_consts[18]);
        Py_DECREF(tmp_expression_name_87);
        if (tmp_called_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_31 == NULL)) {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_31 == NULL)) {
            Py_DECREF(tmp_called_name_28);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_57 = tmp_mvar_value_31;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 151;
        tmp_args_element_name_31 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_57, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[61], 0));

        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_28);

            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 151;
        tmp_call_result_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_28, tmp_args_element_name_31);
        Py_DECREF(tmp_called_name_28);
        Py_DECREF(tmp_args_element_name_31);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_instance_58;
        PyObject *tmp_expression_name_89;
        PyObject *tmp_call_result_55;
        CHECK_OBJECT(par_self);
        tmp_expression_name_89 = par_self;
        tmp_called_instance_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_89, mod_consts[82]);
        if (tmp_called_instance_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 152;
        tmp_call_result_55 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_58, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[80], 0));

        Py_DECREF(tmp_called_instance_58);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_instance_59;
        PyObject *tmp_expression_name_90;
        PyObject *tmp_call_result_56;
        CHECK_OBJECT(par_self);
        tmp_expression_name_90 = par_self;
        tmp_called_instance_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_90, mod_consts[82]);
        if (tmp_called_instance_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 164;
        tmp_call_result_56 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_59, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[83], 0));

        Py_DECREF(tmp_called_instance_59);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_assattr_name_16;
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_91;
        PyObject *tmp_mvar_value_32;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_expression_name_92;
        PyObject *tmp_assattr_target_16;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_32 == NULL)) {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_32 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_91 = tmp_mvar_value_32;
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_91, mod_consts[29]);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_92 = par_self;
        tmp_args_element_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_92, mod_consts[72]);
        if (tmp_args_element_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 165;
        tmp_assattr_name_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_32);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_32);
        if (tmp_assattr_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[84], tmp_assattr_name_16);
        Py_DECREF(tmp_assattr_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_30;
        PyObject *tmp_expression_name_93;
        PyObject *tmp_expression_name_94;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_instance_60;
        PyObject *tmp_mvar_value_33;
        CHECK_OBJECT(par_self);
        tmp_expression_name_94 = par_self;
        tmp_expression_name_93 = LOOKUP_ATTRIBUTE(tmp_expression_name_94, mod_consts[84]);
        if (tmp_expression_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_30 = LOOKUP_ATTRIBUTE(tmp_expression_name_93, mod_consts[18]);
        Py_DECREF(tmp_expression_name_93);
        if (tmp_called_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_33 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_33 == NULL)) {
            tmp_mvar_value_33 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_33 == NULL)) {
            Py_DECREF(tmp_called_name_30);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_60 = tmp_mvar_value_33;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 166;
        tmp_args_element_name_33 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_60, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[85], 0));

        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_30);

            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 166;
        tmp_call_result_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_30, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_30);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_instance_61;
        PyObject *tmp_expression_name_95;
        PyObject *tmp_call_result_58;
        CHECK_OBJECT(par_self);
        tmp_expression_name_95 = par_self;
        tmp_called_instance_61 = LOOKUP_ATTRIBUTE(tmp_expression_name_95, mod_consts[84]);
        if (tmp_called_instance_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 167;
        tmp_call_result_58 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_61, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[86], 0));

        Py_DECREF(tmp_called_instance_61);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_instance_62;
        PyObject *tmp_expression_name_96;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(par_self);
        tmp_expression_name_96 = par_self;
        tmp_called_instance_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_96, mod_consts[84]);
        if (tmp_called_instance_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 179;
        tmp_call_result_59 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_62, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[87], 0));

        Py_DECREF(tmp_called_instance_62);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_97;
        PyObject *tmp_expression_name_98;
        PyObject *tmp_call_result_60;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_expression_name_99;
        PyObject *tmp_args_element_name_35;
        CHECK_OBJECT(par_self);
        tmp_expression_name_98 = par_self;
        tmp_expression_name_97 = LOOKUP_ATTRIBUTE(tmp_expression_name_98, mod_consts[39]);
        if (tmp_expression_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_97, mod_consts[70]);
        Py_DECREF(tmp_expression_name_97);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_99 = par_self;
        tmp_args_element_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_99, mod_consts[72]);
        if (tmp_args_element_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_35 = mod_consts[71];
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_name_34, tmp_args_element_name_35};
            tmp_call_result_60 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_31, call_args);
        }

        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_element_name_34);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_assattr_name_17;
        PyObject *tmp_called_instance_63;
        PyObject *tmp_mvar_value_34;
        PyObject *tmp_assattr_target_17;
        tmp_mvar_value_34 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_34 == NULL)) {
            tmp_mvar_value_34 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_34 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_63 = tmp_mvar_value_34;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 181;
        tmp_assattr_name_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_63, mod_consts[13]);
        if (tmp_assattr_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[88], tmp_assattr_name_17);
        Py_DECREF(tmp_assattr_name_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_64;
        PyObject *tmp_expression_name_100;
        PyObject *tmp_call_result_61;
        CHECK_OBJECT(par_self);
        tmp_expression_name_100 = par_self;
        tmp_called_instance_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_100, mod_consts[88]);
        if (tmp_called_instance_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 182;
        tmp_call_result_61 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_64, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[89], 0));

        Py_DECREF(tmp_called_instance_64);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_assattr_name_18;
        PyObject *tmp_called_name_32;
        PyObject *tmp_expression_name_101;
        PyObject *tmp_mvar_value_35;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_expression_name_102;
        PyObject *tmp_assattr_target_18;
        tmp_mvar_value_35 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_35 == NULL)) {
            tmp_mvar_value_35 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_35 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_101 = tmp_mvar_value_35;
        tmp_called_name_32 = LOOKUP_ATTRIBUTE(tmp_expression_name_101, mod_consts[90]);
        if (tmp_called_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_102 = par_self;
        tmp_args_element_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_102, mod_consts[88]);
        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_32);

            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 183;
        tmp_assattr_name_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_32, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_32);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_assattr_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[91], tmp_assattr_name_18);
        Py_DECREF(tmp_assattr_name_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_103;
        PyObject *tmp_expression_name_104;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_called_instance_65;
        PyObject *tmp_mvar_value_36;
        CHECK_OBJECT(par_self);
        tmp_expression_name_104 = par_self;
        tmp_expression_name_103 = LOOKUP_ATTRIBUTE(tmp_expression_name_104, mod_consts[91]);
        if (tmp_expression_name_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_103, mod_consts[18]);
        Py_DECREF(tmp_expression_name_103);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_36 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_36 == NULL)) {
            tmp_mvar_value_36 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_36 == NULL)) {
            Py_DECREF(tmp_called_name_33);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_65 = tmp_mvar_value_36;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 184;
        tmp_args_element_name_37 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_65, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[92], 0));

        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 184;
        tmp_call_result_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_37);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_element_name_37);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_instance_66;
        PyObject *tmp_expression_name_105;
        PyObject *tmp_call_result_63;
        CHECK_OBJECT(par_self);
        tmp_expression_name_105 = par_self;
        tmp_called_instance_66 = LOOKUP_ATTRIBUTE(tmp_expression_name_105, mod_consts[91]);
        if (tmp_called_instance_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 185;
        tmp_call_result_63 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_66, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[93], 0));

        Py_DECREF(tmp_called_instance_66);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_instance_67;
        PyObject *tmp_expression_name_106;
        PyObject *tmp_call_result_64;
        CHECK_OBJECT(par_self);
        tmp_expression_name_106 = par_self;
        tmp_called_instance_67 = LOOKUP_ATTRIBUTE(tmp_expression_name_106, mod_consts[91]);
        if (tmp_called_instance_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 186;
        tmp_call_result_64 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_67, mod_consts[94], &PyTuple_GET_ITEM(mod_consts[95], 0));

        Py_DECREF(tmp_called_instance_67);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_instance_68;
        PyObject *tmp_expression_name_107;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(par_self);
        tmp_expression_name_107 = par_self;
        tmp_called_instance_68 = LOOKUP_ATTRIBUTE(tmp_expression_name_107, mod_consts[91]);
        if (tmp_called_instance_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 187;
        tmp_call_result_65 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_68, mod_consts[96], &PyTuple_GET_ITEM(mod_consts[97], 0));

        Py_DECREF(tmp_called_instance_68);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_69;
        PyObject *tmp_mvar_value_37;
        tmp_mvar_value_37 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_37 == NULL)) {
            tmp_mvar_value_37 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_37 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_69 = tmp_mvar_value_37;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 188;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_69, mod_consts[98]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_item == NULL);
        var_item = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_70;
        PyObject *tmp_mvar_value_38;
        tmp_mvar_value_38 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_38 == NULL)) {
            tmp_mvar_value_38 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_38 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_70 = tmp_mvar_value_38;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 189;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_70, mod_consts[41]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_71;
        PyObject *tmp_call_result_66;
        CHECK_OBJECT(var_font);
        tmp_called_instance_71 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 190;
        tmp_call_result_66 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_71, mod_consts[42], &PyTuple_GET_ITEM(mod_consts[43], 0));

        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_instance_72;
        PyObject *tmp_call_result_67;
        CHECK_OBJECT(var_font);
        tmp_called_instance_72 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 191;
        tmp_call_result_67 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_72, mod_consts[44], &PyTuple_GET_ITEM(mod_consts[99], 0));

        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_instance_73;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_name_38;
        CHECK_OBJECT(var_item);
        tmp_called_instance_73 = var_item;
        CHECK_OBJECT(var_font);
        tmp_args_element_name_38 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_name_38};
            tmp_call_result_68 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_73, mod_consts[46], call_args);
        }

        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_instance_74;
        PyObject *tmp_expression_name_108;
        PyObject *tmp_call_result_69;
        PyObject *tmp_args_element_name_39;
        PyObject *tmp_args_element_name_40;
        CHECK_OBJECT(par_self);
        tmp_expression_name_108 = par_self;
        tmp_called_instance_74 = LOOKUP_ATTRIBUTE(tmp_expression_name_108, mod_consts[91]);
        if (tmp_called_instance_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_39 = mod_consts[101];
        CHECK_OBJECT(var_item);
        tmp_args_element_name_40 = var_item;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_name_39, tmp_args_element_name_40};
            tmp_call_result_69 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_74, mod_consts[100], call_args);
        }

        Py_DECREF(tmp_called_instance_74);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_75;
        PyObject *tmp_mvar_value_39;
        tmp_mvar_value_39 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_39 == NULL)) {
            tmp_mvar_value_39 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_39 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_75 = tmp_mvar_value_39;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 194;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_75, mod_consts[98]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_item;
            assert(old != NULL);
            var_item = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_76;
        PyObject *tmp_mvar_value_40;
        tmp_mvar_value_40 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_40 == NULL)) {
            tmp_mvar_value_40 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_40 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_76 = tmp_mvar_value_40;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 195;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_76, mod_consts[41]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_77;
        PyObject *tmp_call_result_70;
        CHECK_OBJECT(var_font);
        tmp_called_instance_77 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 196;
        tmp_call_result_70 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_77, mod_consts[42], &PyTuple_GET_ITEM(mod_consts[43], 0));

        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_instance_78;
        PyObject *tmp_call_result_71;
        CHECK_OBJECT(var_font);
        tmp_called_instance_78 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 197;
        tmp_call_result_71 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_78, mod_consts[44], &PyTuple_GET_ITEM(mod_consts[99], 0));

        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_instance_79;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_name_41;
        CHECK_OBJECT(var_item);
        tmp_called_instance_79 = var_item;
        CHECK_OBJECT(var_font);
        tmp_args_element_name_41 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_name_41};
            tmp_call_result_72 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_79, mod_consts[46], call_args);
        }

        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_instance_80;
        PyObject *tmp_expression_name_109;
        PyObject *tmp_call_result_73;
        PyObject *tmp_args_element_name_42;
        PyObject *tmp_args_element_name_43;
        CHECK_OBJECT(par_self);
        tmp_expression_name_109 = par_self;
        tmp_called_instance_80 = LOOKUP_ATTRIBUTE(tmp_expression_name_109, mod_consts[91]);
        if (tmp_called_instance_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_42 = mod_consts[102];
        CHECK_OBJECT(var_item);
        tmp_args_element_name_43 = var_item;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_name_42, tmp_args_element_name_43};
            tmp_call_result_73 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_80, mod_consts[100], call_args);
        }

        Py_DECREF(tmp_called_instance_80);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_81;
        PyObject *tmp_mvar_value_41;
        tmp_mvar_value_41 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_41 == NULL)) {
            tmp_mvar_value_41 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_41 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_81 = tmp_mvar_value_41;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 200;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_81, mod_consts[98]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_item;
            assert(old != NULL);
            var_item = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_82;
        PyObject *tmp_mvar_value_42;
        tmp_mvar_value_42 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_42 == NULL)) {
            tmp_mvar_value_42 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_42 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_82 = tmp_mvar_value_42;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 201;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_82, mod_consts[41]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_83;
        PyObject *tmp_call_result_74;
        CHECK_OBJECT(var_font);
        tmp_called_instance_83 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 202;
        tmp_call_result_74 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_83, mod_consts[42], &PyTuple_GET_ITEM(mod_consts[43], 0));

        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_instance_84;
        PyObject *tmp_call_result_75;
        CHECK_OBJECT(var_font);
        tmp_called_instance_84 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 203;
        tmp_call_result_75 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_84, mod_consts[44], &PyTuple_GET_ITEM(mod_consts[99], 0));

        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_instance_85;
        PyObject *tmp_call_result_76;
        PyObject *tmp_args_element_name_44;
        CHECK_OBJECT(var_item);
        tmp_called_instance_85 = var_item;
        CHECK_OBJECT(var_font);
        tmp_args_element_name_44 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_name_44};
            tmp_call_result_76 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_85, mod_consts[46], call_args);
        }

        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_instance_86;
        PyObject *tmp_expression_name_110;
        PyObject *tmp_call_result_77;
        PyObject *tmp_args_element_name_45;
        PyObject *tmp_args_element_name_46;
        CHECK_OBJECT(par_self);
        tmp_expression_name_110 = par_self;
        tmp_called_instance_86 = LOOKUP_ATTRIBUTE(tmp_expression_name_110, mod_consts[91]);
        if (tmp_called_instance_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_45 = mod_consts[103];
        CHECK_OBJECT(var_item);
        tmp_args_element_name_46 = var_item;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_name_45, tmp_args_element_name_46};
            tmp_call_result_77 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_86, mod_consts[100], call_args);
        }

        Py_DECREF(tmp_called_instance_86);
        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_assattr_name_19;
        PyObject *tmp_called_name_34;
        PyObject *tmp_expression_name_111;
        PyObject *tmp_mvar_value_43;
        PyObject *tmp_args_element_name_47;
        PyObject *tmp_expression_name_112;
        PyObject *tmp_assattr_target_19;
        tmp_mvar_value_43 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_43 == NULL)) {
            tmp_mvar_value_43 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_43 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_111 = tmp_mvar_value_43;
        tmp_called_name_34 = LOOKUP_ATTRIBUTE(tmp_expression_name_111, mod_consts[29]);
        if (tmp_called_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_112 = par_self;
        tmp_args_element_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_112, mod_consts[88]);
        if (tmp_args_element_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_34);

            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 206;
        tmp_assattr_name_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_34, tmp_args_element_name_47);
        Py_DECREF(tmp_called_name_34);
        Py_DECREF(tmp_args_element_name_47);
        if (tmp_assattr_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[104], tmp_assattr_name_19);
        Py_DECREF(tmp_assattr_name_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_113;
        PyObject *tmp_expression_name_114;
        PyObject *tmp_call_result_78;
        PyObject *tmp_args_element_name_48;
        PyObject *tmp_called_instance_87;
        PyObject *tmp_mvar_value_44;
        CHECK_OBJECT(par_self);
        tmp_expression_name_114 = par_self;
        tmp_expression_name_113 = LOOKUP_ATTRIBUTE(tmp_expression_name_114, mod_consts[104]);
        if (tmp_expression_name_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_113, mod_consts[18]);
        Py_DECREF(tmp_expression_name_113);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_44 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_44 == NULL)) {
            tmp_mvar_value_44 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_44 == NULL)) {
            Py_DECREF(tmp_called_name_35);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_87 = tmp_mvar_value_44;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 207;
        tmp_args_element_name_48 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_87, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[105], 0));

        if (tmp_args_element_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 207;
        tmp_call_result_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_35, tmp_args_element_name_48);
        Py_DECREF(tmp_called_name_35);
        Py_DECREF(tmp_args_element_name_48);
        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_instance_88;
        PyObject *tmp_expression_name_115;
        PyObject *tmp_call_result_79;
        CHECK_OBJECT(par_self);
        tmp_expression_name_115 = par_self;
        tmp_called_instance_88 = LOOKUP_ATTRIBUTE(tmp_expression_name_115, mod_consts[104]);
        if (tmp_called_instance_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 208;
        tmp_call_result_79 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_88, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[86], 0));

        Py_DECREF(tmp_called_instance_88);
        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_instance_89;
        PyObject *tmp_expression_name_116;
        PyObject *tmp_call_result_80;
        CHECK_OBJECT(par_self);
        tmp_expression_name_116 = par_self;
        tmp_called_instance_89 = LOOKUP_ATTRIBUTE(tmp_expression_name_116, mod_consts[104]);
        if (tmp_called_instance_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 220;
        tmp_call_result_80 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_89, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[106], 0));

        Py_DECREF(tmp_called_instance_89);
        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_assattr_name_20;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_117;
        PyObject *tmp_mvar_value_45;
        PyObject *tmp_args_element_name_49;
        PyObject *tmp_expression_name_118;
        PyObject *tmp_assattr_target_20;
        tmp_mvar_value_45 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_45 == NULL)) {
            tmp_mvar_value_45 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_45 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_117 = tmp_mvar_value_45;
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_117, mod_consts[29]);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_118 = par_self;
        tmp_args_element_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_118, mod_consts[88]);
        if (tmp_args_element_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 221;
        tmp_assattr_name_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_49);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_49);
        if (tmp_assattr_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[107], tmp_assattr_name_20);
        Py_DECREF(tmp_assattr_name_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_37;
        PyObject *tmp_expression_name_119;
        PyObject *tmp_expression_name_120;
        PyObject *tmp_call_result_81;
        PyObject *tmp_args_element_name_50;
        PyObject *tmp_called_instance_90;
        PyObject *tmp_mvar_value_46;
        CHECK_OBJECT(par_self);
        tmp_expression_name_120 = par_self;
        tmp_expression_name_119 = LOOKUP_ATTRIBUTE(tmp_expression_name_120, mod_consts[107]);
        if (tmp_expression_name_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_37 = LOOKUP_ATTRIBUTE(tmp_expression_name_119, mod_consts[18]);
        Py_DECREF(tmp_expression_name_119);
        if (tmp_called_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_46 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_46 == NULL)) {
            tmp_mvar_value_46 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_46 == NULL)) {
            Py_DECREF(tmp_called_name_37);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_90 = tmp_mvar_value_46;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 222;
        tmp_args_element_name_50 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_90, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[108], 0));

        if (tmp_args_element_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_37);

            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 222;
        tmp_call_result_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_37, tmp_args_element_name_50);
        Py_DECREF(tmp_called_name_37);
        Py_DECREF(tmp_args_element_name_50);
        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_instance_91;
        PyObject *tmp_expression_name_121;
        PyObject *tmp_call_result_82;
        CHECK_OBJECT(par_self);
        tmp_expression_name_121 = par_self;
        tmp_called_instance_91 = LOOKUP_ATTRIBUTE(tmp_expression_name_121, mod_consts[107]);
        if (tmp_called_instance_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 223;
        tmp_call_result_82 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_91, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[86], 0));

        Py_DECREF(tmp_called_instance_91);
        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_instance_92;
        PyObject *tmp_expression_name_122;
        PyObject *tmp_call_result_83;
        CHECK_OBJECT(par_self);
        tmp_expression_name_122 = par_self;
        tmp_called_instance_92 = LOOKUP_ATTRIBUTE(tmp_expression_name_122, mod_consts[107]);
        if (tmp_called_instance_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 235;
        tmp_call_result_83 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_92, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[109], 0));

        Py_DECREF(tmp_called_instance_92);
        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_name_38;
        PyObject *tmp_expression_name_123;
        PyObject *tmp_expression_name_124;
        PyObject *tmp_call_result_84;
        PyObject *tmp_args_element_name_51;
        PyObject *tmp_expression_name_125;
        PyObject *tmp_args_element_name_52;
        CHECK_OBJECT(par_self);
        tmp_expression_name_124 = par_self;
        tmp_expression_name_123 = LOOKUP_ATTRIBUTE(tmp_expression_name_124, mod_consts[39]);
        if (tmp_expression_name_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_123, mod_consts[70]);
        Py_DECREF(tmp_expression_name_123);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_125 = par_self;
        tmp_args_element_name_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_125, mod_consts[88]);
        if (tmp_args_element_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_52 = mod_consts[71];
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_name_51, tmp_args_element_name_52};
            tmp_call_result_84 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_38, call_args);
        }

        Py_DECREF(tmp_called_name_38);
        Py_DECREF(tmp_args_element_name_51);
        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_assattr_name_21;
        PyObject *tmp_called_instance_93;
        PyObject *tmp_mvar_value_47;
        PyObject *tmp_assattr_target_21;
        tmp_mvar_value_47 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_47 == NULL)) {
            tmp_mvar_value_47 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_47 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_93 = tmp_mvar_value_47;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 237;
        tmp_assattr_name_21 = CALL_METHOD_NO_ARGS(tmp_called_instance_93, mod_consts[13]);
        if (tmp_assattr_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[110], tmp_assattr_name_21);
        Py_DECREF(tmp_assattr_name_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_94;
        PyObject *tmp_expression_name_126;
        PyObject *tmp_call_result_85;
        CHECK_OBJECT(par_self);
        tmp_expression_name_126 = par_self;
        tmp_called_instance_94 = LOOKUP_ATTRIBUTE(tmp_expression_name_126, mod_consts[110]);
        if (tmp_called_instance_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 238;
        tmp_call_result_85 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_94, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[111], 0));

        Py_DECREF(tmp_called_instance_94);
        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_assattr_name_22;
        PyObject *tmp_called_name_39;
        PyObject *tmp_expression_name_127;
        PyObject *tmp_mvar_value_48;
        PyObject *tmp_args_element_name_53;
        PyObject *tmp_expression_name_128;
        PyObject *tmp_assattr_target_22;
        tmp_mvar_value_48 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_48 == NULL)) {
            tmp_mvar_value_48 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_48 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_127 = tmp_mvar_value_48;
        tmp_called_name_39 = LOOKUP_ATTRIBUTE(tmp_expression_name_127, mod_consts[29]);
        if (tmp_called_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_128 = par_self;
        tmp_args_element_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_128, mod_consts[110]);
        if (tmp_args_element_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_39);

            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 239;
        tmp_assattr_name_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_39, tmp_args_element_name_53);
        Py_DECREF(tmp_called_name_39);
        Py_DECREF(tmp_args_element_name_53);
        if (tmp_assattr_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[112], tmp_assattr_name_22);
        Py_DECREF(tmp_assattr_name_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_40;
        PyObject *tmp_expression_name_129;
        PyObject *tmp_expression_name_130;
        PyObject *tmp_call_result_86;
        PyObject *tmp_args_element_name_54;
        PyObject *tmp_called_instance_95;
        PyObject *tmp_mvar_value_49;
        CHECK_OBJECT(par_self);
        tmp_expression_name_130 = par_self;
        tmp_expression_name_129 = LOOKUP_ATTRIBUTE(tmp_expression_name_130, mod_consts[112]);
        if (tmp_expression_name_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_129, mod_consts[18]);
        Py_DECREF(tmp_expression_name_129);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_49 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_49 == NULL)) {
            tmp_mvar_value_49 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_49 == NULL)) {
            Py_DECREF(tmp_called_name_40);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_95 = tmp_mvar_value_49;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 240;
        tmp_args_element_name_54 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_95, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[105], 0));

        if (tmp_args_element_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 240;
        tmp_call_result_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_54);
        Py_DECREF(tmp_called_name_40);
        Py_DECREF(tmp_args_element_name_54);
        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_instance_96;
        PyObject *tmp_expression_name_131;
        PyObject *tmp_call_result_87;
        CHECK_OBJECT(par_self);
        tmp_expression_name_131 = par_self;
        tmp_called_instance_96 = LOOKUP_ATTRIBUTE(tmp_expression_name_131, mod_consts[112]);
        if (tmp_called_instance_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 241;
        tmp_call_result_87 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_96, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[86], 0));

        Py_DECREF(tmp_called_instance_96);
        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_instance_97;
        PyObject *tmp_expression_name_132;
        PyObject *tmp_call_result_88;
        CHECK_OBJECT(par_self);
        tmp_expression_name_132 = par_self;
        tmp_called_instance_97 = LOOKUP_ATTRIBUTE(tmp_expression_name_132, mod_consts[112]);
        if (tmp_called_instance_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 253;
        tmp_call_result_88 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_97, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[113], 0));

        Py_DECREF(tmp_called_instance_97);
        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_assattr_name_23;
        PyObject *tmp_called_name_41;
        PyObject *tmp_expression_name_133;
        PyObject *tmp_mvar_value_50;
        PyObject *tmp_args_element_name_55;
        PyObject *tmp_expression_name_134;
        PyObject *tmp_assattr_target_23;
        tmp_mvar_value_50 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_50 == NULL)) {
            tmp_mvar_value_50 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_50 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_133 = tmp_mvar_value_50;
        tmp_called_name_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_133, mod_consts[90]);
        if (tmp_called_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_134 = par_self;
        tmp_args_element_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_134, mod_consts[110]);
        if (tmp_args_element_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_41);

            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 254;
        tmp_assattr_name_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_41, tmp_args_element_name_55);
        Py_DECREF(tmp_called_name_41);
        Py_DECREF(tmp_args_element_name_55);
        if (tmp_assattr_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_23 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[114], tmp_assattr_name_23);
        Py_DECREF(tmp_assattr_name_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_42;
        PyObject *tmp_expression_name_135;
        PyObject *tmp_expression_name_136;
        PyObject *tmp_call_result_89;
        PyObject *tmp_args_element_name_56;
        PyObject *tmp_called_instance_98;
        PyObject *tmp_mvar_value_51;
        CHECK_OBJECT(par_self);
        tmp_expression_name_136 = par_self;
        tmp_expression_name_135 = LOOKUP_ATTRIBUTE(tmp_expression_name_136, mod_consts[114]);
        if (tmp_expression_name_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_135, mod_consts[18]);
        Py_DECREF(tmp_expression_name_135);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_51 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_51 == NULL)) {
            tmp_mvar_value_51 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_51 == NULL)) {
            Py_DECREF(tmp_called_name_42);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_98 = tmp_mvar_value_51;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 255;
        tmp_args_element_name_56 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_98, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[115], 0));

        if (tmp_args_element_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 255;
        tmp_call_result_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_42, tmp_args_element_name_56);
        Py_DECREF(tmp_called_name_42);
        Py_DECREF(tmp_args_element_name_56);
        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_99;
        PyObject *tmp_mvar_value_52;
        tmp_mvar_value_52 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_52 == NULL)) {
            tmp_mvar_value_52 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_52 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_99 = tmp_mvar_value_52;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 256;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_99, mod_consts[41]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_100;
        PyObject *tmp_call_result_90;
        CHECK_OBJECT(var_font);
        tmp_called_instance_100 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 257;
        tmp_call_result_90 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_100, mod_consts[42], &PyTuple_GET_ITEM(mod_consts[43], 0));

        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_instance_101;
        PyObject *tmp_call_result_91;
        CHECK_OBJECT(var_font);
        tmp_called_instance_101 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 258;
        tmp_call_result_91 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_101, mod_consts[44], &PyTuple_GET_ITEM(mod_consts[45], 0));

        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_instance_102;
        PyObject *tmp_expression_name_137;
        PyObject *tmp_call_result_92;
        PyObject *tmp_args_element_name_57;
        CHECK_OBJECT(par_self);
        tmp_expression_name_137 = par_self;
        tmp_called_instance_102 = LOOKUP_ATTRIBUTE(tmp_expression_name_137, mod_consts[114]);
        if (tmp_called_instance_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_name_57 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 259;
        {
            PyObject *call_args[] = {tmp_args_element_name_57};
            tmp_call_result_92 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_102, mod_consts[46], call_args);
        }

        Py_DECREF(tmp_called_instance_102);
        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_instance_103;
        PyObject *tmp_expression_name_138;
        PyObject *tmp_call_result_93;
        CHECK_OBJECT(par_self);
        tmp_expression_name_138 = par_self;
        tmp_called_instance_103 = LOOKUP_ATTRIBUTE(tmp_expression_name_138, mod_consts[114]);
        if (tmp_called_instance_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 260;
        tmp_call_result_93 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_103, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[116], 0));

        Py_DECREF(tmp_called_instance_103);
        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_instance_104;
        PyObject *tmp_expression_name_139;
        PyObject *tmp_call_result_94;
        CHECK_OBJECT(par_self);
        tmp_expression_name_139 = par_self;
        tmp_called_instance_104 = LOOKUP_ATTRIBUTE(tmp_expression_name_139, mod_consts[114]);
        if (tmp_called_instance_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 261;
        tmp_call_result_94 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_104, mod_consts[94], &PyTuple_GET_ITEM(mod_consts[117], 0));

        Py_DECREF(tmp_called_instance_104);
        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_instance_105;
        PyObject *tmp_expression_name_140;
        PyObject *tmp_call_result_95;
        CHECK_OBJECT(par_self);
        tmp_expression_name_140 = par_self;
        tmp_called_instance_105 = LOOKUP_ATTRIBUTE(tmp_expression_name_140, mod_consts[114]);
        if (tmp_called_instance_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 262;
        tmp_call_result_95 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_105, mod_consts[96], &PyTuple_GET_ITEM(mod_consts[97], 0));

        Py_DECREF(tmp_called_instance_105);
        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_106;
        PyObject *tmp_mvar_value_53;
        tmp_mvar_value_53 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_53 == NULL)) {
            tmp_mvar_value_53 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_53 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_106 = tmp_mvar_value_53;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 263;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_106, mod_consts[98]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_item;
            assert(old != NULL);
            var_item = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_107;
        PyObject *tmp_mvar_value_54;
        tmp_mvar_value_54 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_54 == NULL)) {
            tmp_mvar_value_54 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_54 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_107 = tmp_mvar_value_54;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 264;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_107, mod_consts[41]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_108;
        PyObject *tmp_call_result_96;
        CHECK_OBJECT(var_font);
        tmp_called_instance_108 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 265;
        tmp_call_result_96 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_108, mod_consts[42], &PyTuple_GET_ITEM(mod_consts[43], 0));

        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_instance_109;
        PyObject *tmp_call_result_97;
        CHECK_OBJECT(var_font);
        tmp_called_instance_109 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 266;
        tmp_call_result_97 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_109, mod_consts[44], &PyTuple_GET_ITEM(mod_consts[99], 0));

        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_instance_110;
        PyObject *tmp_call_result_98;
        PyObject *tmp_args_element_name_58;
        CHECK_OBJECT(var_item);
        tmp_called_instance_110 = var_item;
        CHECK_OBJECT(var_font);
        tmp_args_element_name_58 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_name_58};
            tmp_call_result_98 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_110, mod_consts[46], call_args);
        }

        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_instance_111;
        PyObject *tmp_expression_name_141;
        PyObject *tmp_call_result_99;
        PyObject *tmp_args_element_name_59;
        PyObject *tmp_args_element_name_60;
        CHECK_OBJECT(par_self);
        tmp_expression_name_141 = par_self;
        tmp_called_instance_111 = LOOKUP_ATTRIBUTE(tmp_expression_name_141, mod_consts[114]);
        if (tmp_called_instance_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_59 = mod_consts[101];
        CHECK_OBJECT(var_item);
        tmp_args_element_name_60 = var_item;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 268;
        {
            PyObject *call_args[] = {tmp_args_element_name_59, tmp_args_element_name_60};
            tmp_call_result_99 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_111, mod_consts[100], call_args);
        }

        Py_DECREF(tmp_called_instance_111);
        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_112;
        PyObject *tmp_mvar_value_55;
        tmp_mvar_value_55 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_55 == NULL)) {
            tmp_mvar_value_55 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_55 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_112 = tmp_mvar_value_55;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 269;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_112, mod_consts[98]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_item;
            assert(old != NULL);
            var_item = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_113;
        PyObject *tmp_mvar_value_56;
        tmp_mvar_value_56 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_56 == NULL)) {
            tmp_mvar_value_56 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_56 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_113 = tmp_mvar_value_56;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 270;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_113, mod_consts[41]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_font;
            assert(old != NULL);
            var_font = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_114;
        PyObject *tmp_call_result_100;
        CHECK_OBJECT(var_font);
        tmp_called_instance_114 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 271;
        tmp_call_result_100 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_114, mod_consts[42], &PyTuple_GET_ITEM(mod_consts[43], 0));

        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_instance_115;
        PyObject *tmp_call_result_101;
        CHECK_OBJECT(var_font);
        tmp_called_instance_115 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 272;
        tmp_call_result_101 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_115, mod_consts[44], &PyTuple_GET_ITEM(mod_consts[99], 0));

        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_instance_116;
        PyObject *tmp_call_result_102;
        PyObject *tmp_args_element_name_61;
        CHECK_OBJECT(var_item);
        tmp_called_instance_116 = var_item;
        CHECK_OBJECT(var_font);
        tmp_args_element_name_61 = var_font;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_name_61};
            tmp_call_result_102 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_116, mod_consts[46], call_args);
        }

        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_instance_117;
        PyObject *tmp_expression_name_142;
        PyObject *tmp_call_result_103;
        PyObject *tmp_args_element_name_62;
        PyObject *tmp_args_element_name_63;
        CHECK_OBJECT(par_self);
        tmp_expression_name_142 = par_self;
        tmp_called_instance_117 = LOOKUP_ATTRIBUTE(tmp_expression_name_142, mod_consts[114]);
        if (tmp_called_instance_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_62 = mod_consts[102];
        CHECK_OBJECT(var_item);
        tmp_args_element_name_63 = var_item;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = {tmp_args_element_name_62, tmp_args_element_name_63};
            tmp_call_result_103 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_117, mod_consts[100], call_args);
        }

        Py_DECREF(tmp_called_instance_117);
        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_assattr_name_24;
        PyObject *tmp_called_name_43;
        PyObject *tmp_expression_name_143;
        PyObject *tmp_mvar_value_57;
        PyObject *tmp_args_element_name_64;
        PyObject *tmp_expression_name_144;
        PyObject *tmp_assattr_target_24;
        tmp_mvar_value_57 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_57 == NULL)) {
            tmp_mvar_value_57 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_57 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_143 = tmp_mvar_value_57;
        tmp_called_name_43 = LOOKUP_ATTRIBUTE(tmp_expression_name_143, mod_consts[29]);
        if (tmp_called_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_144 = par_self;
        tmp_args_element_name_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_144, mod_consts[110]);
        if (tmp_args_element_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_43);

            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 275;
        tmp_assattr_name_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_43, tmp_args_element_name_64);
        Py_DECREF(tmp_called_name_43);
        Py_DECREF(tmp_args_element_name_64);
        if (tmp_assattr_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_24 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[118], tmp_assattr_name_24);
        Py_DECREF(tmp_assattr_name_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_44;
        PyObject *tmp_expression_name_145;
        PyObject *tmp_expression_name_146;
        PyObject *tmp_call_result_104;
        PyObject *tmp_args_element_name_65;
        PyObject *tmp_called_instance_118;
        PyObject *tmp_mvar_value_58;
        CHECK_OBJECT(par_self);
        tmp_expression_name_146 = par_self;
        tmp_expression_name_145 = LOOKUP_ATTRIBUTE(tmp_expression_name_146, mod_consts[118]);
        if (tmp_expression_name_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_145, mod_consts[18]);
        Py_DECREF(tmp_expression_name_145);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_58 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_58 == NULL)) {
            tmp_mvar_value_58 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_58 == NULL)) {
            Py_DECREF(tmp_called_name_44);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_118 = tmp_mvar_value_58;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 276;
        tmp_args_element_name_65 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_118, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[108], 0));

        if (tmp_args_element_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 276;
        tmp_call_result_104 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_65);
        Py_DECREF(tmp_called_name_44);
        Py_DECREF(tmp_args_element_name_65);
        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_instance_119;
        PyObject *tmp_expression_name_147;
        PyObject *tmp_call_result_105;
        CHECK_OBJECT(par_self);
        tmp_expression_name_147 = par_self;
        tmp_called_instance_119 = LOOKUP_ATTRIBUTE(tmp_expression_name_147, mod_consts[118]);
        if (tmp_called_instance_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 277;
        tmp_call_result_105 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_119, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[86], 0));

        Py_DECREF(tmp_called_instance_119);
        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_instance_120;
        PyObject *tmp_expression_name_148;
        PyObject *tmp_call_result_106;
        CHECK_OBJECT(par_self);
        tmp_expression_name_148 = par_self;
        tmp_called_instance_120 = LOOKUP_ATTRIBUTE(tmp_expression_name_148, mod_consts[118]);
        if (tmp_called_instance_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 289;
        tmp_call_result_106 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_120, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[119], 0));

        Py_DECREF(tmp_called_instance_120);
        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_name_45;
        PyObject *tmp_expression_name_149;
        PyObject *tmp_expression_name_150;
        PyObject *tmp_call_result_107;
        PyObject *tmp_args_element_name_66;
        PyObject *tmp_expression_name_151;
        PyObject *tmp_args_element_name_67;
        CHECK_OBJECT(par_self);
        tmp_expression_name_150 = par_self;
        tmp_expression_name_149 = LOOKUP_ATTRIBUTE(tmp_expression_name_150, mod_consts[39]);
        if (tmp_expression_name_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_149, mod_consts[70]);
        Py_DECREF(tmp_expression_name_149);
        if (tmp_called_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_151 = par_self;
        tmp_args_element_name_66 = LOOKUP_ATTRIBUTE(tmp_expression_name_151, mod_consts[110]);
        if (tmp_args_element_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_45);

            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_67 = mod_consts[71];
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 290;
        {
            PyObject *call_args[] = {tmp_args_element_name_66, tmp_args_element_name_67};
            tmp_call_result_107 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_45, call_args);
        }

        Py_DECREF(tmp_called_name_45);
        Py_DECREF(tmp_args_element_name_66);
        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_assattr_name_25;
        PyObject *tmp_called_instance_121;
        PyObject *tmp_mvar_value_59;
        PyObject *tmp_assattr_target_25;
        tmp_mvar_value_59 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_59 == NULL)) {
            tmp_mvar_value_59 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_59 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_121 = tmp_mvar_value_59;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 291;
        tmp_assattr_name_25 = CALL_METHOD_NO_ARGS(tmp_called_instance_121, mod_consts[13]);
        if (tmp_assattr_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_25 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[120], tmp_assattr_name_25);
        Py_DECREF(tmp_assattr_name_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_122;
        PyObject *tmp_expression_name_152;
        PyObject *tmp_call_result_108;
        CHECK_OBJECT(par_self);
        tmp_expression_name_152 = par_self;
        tmp_called_instance_122 = LOOKUP_ATTRIBUTE(tmp_expression_name_152, mod_consts[120]);
        if (tmp_called_instance_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 292;
        tmp_call_result_108 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_122, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[121], 0));

        Py_DECREF(tmp_called_instance_122);
        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_assattr_name_26;
        PyObject *tmp_called_name_46;
        PyObject *tmp_expression_name_153;
        PyObject *tmp_mvar_value_60;
        PyObject *tmp_args_element_name_68;
        PyObject *tmp_expression_name_154;
        PyObject *tmp_assattr_target_26;
        tmp_mvar_value_60 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_60 == NULL)) {
            tmp_mvar_value_60 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_60 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_153 = tmp_mvar_value_60;
        tmp_called_name_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_153, mod_consts[16]);
        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_154 = par_self;
        tmp_args_element_name_68 = LOOKUP_ATTRIBUTE(tmp_expression_name_154, mod_consts[120]);
        if (tmp_args_element_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 293;
        tmp_assattr_name_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_46, tmp_args_element_name_68);
        Py_DECREF(tmp_called_name_46);
        Py_DECREF(tmp_args_element_name_68);
        if (tmp_assattr_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_26 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_26, mod_consts[122], tmp_assattr_name_26);
        Py_DECREF(tmp_assattr_name_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_47;
        PyObject *tmp_expression_name_155;
        PyObject *tmp_expression_name_156;
        PyObject *tmp_call_result_109;
        PyObject *tmp_args_element_name_69;
        PyObject *tmp_called_instance_123;
        PyObject *tmp_mvar_value_61;
        CHECK_OBJECT(par_self);
        tmp_expression_name_156 = par_self;
        tmp_expression_name_155 = LOOKUP_ATTRIBUTE(tmp_expression_name_156, mod_consts[122]);
        if (tmp_expression_name_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_155, mod_consts[18]);
        Py_DECREF(tmp_expression_name_155);
        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_61 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_61 == NULL)) {
            tmp_mvar_value_61 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_61 == NULL)) {
            Py_DECREF(tmp_called_name_47);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_123 = tmp_mvar_value_61;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 294;
        tmp_args_element_name_69 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_123, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[123], 0));

        if (tmp_args_element_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 294;
        tmp_call_result_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, tmp_args_element_name_69);
        Py_DECREF(tmp_called_name_47);
        Py_DECREF(tmp_args_element_name_69);
        if (tmp_call_result_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_instance_124;
        PyObject *tmp_expression_name_157;
        PyObject *tmp_call_result_110;
        CHECK_OBJECT(par_self);
        tmp_expression_name_157 = par_self;
        tmp_called_instance_124 = LOOKUP_ATTRIBUTE(tmp_expression_name_157, mod_consts[122]);
        if (tmp_called_instance_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 295;
        tmp_call_result_110 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_124, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_124);
        if (tmp_call_result_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_instance_125;
        PyObject *tmp_expression_name_158;
        PyObject *tmp_call_result_111;
        CHECK_OBJECT(par_self);
        tmp_expression_name_158 = par_self;
        tmp_called_instance_125 = LOOKUP_ATTRIBUTE(tmp_expression_name_158, mod_consts[122]);
        if (tmp_called_instance_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 296;
        tmp_call_result_111 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_125, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_125);
        if (tmp_call_result_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_name_48;
        PyObject *tmp_expression_name_159;
        PyObject *tmp_expression_name_160;
        PyObject *tmp_call_result_112;
        PyObject *tmp_args_element_name_70;
        PyObject *tmp_called_instance_126;
        PyObject *tmp_mvar_value_62;
        CHECK_OBJECT(par_self);
        tmp_expression_name_160 = par_self;
        tmp_expression_name_159 = LOOKUP_ATTRIBUTE(tmp_expression_name_160, mod_consts[122]);
        if (tmp_expression_name_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_48 = LOOKUP_ATTRIBUTE(tmp_expression_name_159, mod_consts[22]);
        Py_DECREF(tmp_expression_name_159);
        if (tmp_called_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_62 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_62 == NULL)) {
            tmp_mvar_value_62 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_62 == NULL)) {
            Py_DECREF(tmp_called_name_48);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_126 = tmp_mvar_value_62;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 297;
        tmp_args_element_name_70 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_126, mod_consts[24], &PyTuple_GET_ITEM(mod_consts[124], 0));

        if (tmp_args_element_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_48);

            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 297;
        tmp_call_result_112 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_48, tmp_args_element_name_70);
        Py_DECREF(tmp_called_name_48);
        Py_DECREF(tmp_args_element_name_70);
        if (tmp_call_result_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_instance_127;
        PyObject *tmp_expression_name_161;
        PyObject *tmp_call_result_113;
        CHECK_OBJECT(par_self);
        tmp_expression_name_161 = par_self;
        tmp_called_instance_127 = LOOKUP_ATTRIBUTE(tmp_expression_name_161, mod_consts[122]);
        if (tmp_called_instance_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 298;
        tmp_call_result_113 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_127, mod_consts[26], &PyTuple_GET_ITEM(mod_consts[27], 0));

        Py_DECREF(tmp_called_instance_127);
        if (tmp_call_result_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_instance_128;
        PyObject *tmp_expression_name_162;
        PyObject *tmp_call_result_114;
        CHECK_OBJECT(par_self);
        tmp_expression_name_162 = par_self;
        tmp_called_instance_128 = LOOKUP_ATTRIBUTE(tmp_expression_name_162, mod_consts[122]);
        if (tmp_called_instance_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 299;
        tmp_call_result_114 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_128, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[125], 0));

        Py_DECREF(tmp_called_instance_128);
        if (tmp_call_result_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_assattr_name_27;
        PyObject *tmp_called_name_49;
        PyObject *tmp_expression_name_163;
        PyObject *tmp_mvar_value_63;
        PyObject *tmp_args_element_name_71;
        PyObject *tmp_expression_name_164;
        PyObject *tmp_assattr_target_27;
        tmp_mvar_value_63 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_63 == NULL)) {
            tmp_mvar_value_63 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_63 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 300;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_163 = tmp_mvar_value_63;
        tmp_called_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_163, mod_consts[16]);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_164 = par_self;
        tmp_args_element_name_71 = LOOKUP_ATTRIBUTE(tmp_expression_name_164, mod_consts[120]);
        if (tmp_args_element_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 300;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 300;
        tmp_assattr_name_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_49, tmp_args_element_name_71);
        Py_DECREF(tmp_called_name_49);
        Py_DECREF(tmp_args_element_name_71);
        if (tmp_assattr_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_27 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_27, mod_consts[126], tmp_assattr_name_27);
        Py_DECREF(tmp_assattr_name_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_50;
        PyObject *tmp_expression_name_165;
        PyObject *tmp_expression_name_166;
        PyObject *tmp_call_result_115;
        PyObject *tmp_args_element_name_72;
        PyObject *tmp_called_instance_129;
        PyObject *tmp_mvar_value_64;
        CHECK_OBJECT(par_self);
        tmp_expression_name_166 = par_self;
        tmp_expression_name_165 = LOOKUP_ATTRIBUTE(tmp_expression_name_166, mod_consts[126]);
        if (tmp_expression_name_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_50 = LOOKUP_ATTRIBUTE(tmp_expression_name_165, mod_consts[18]);
        Py_DECREF(tmp_expression_name_165);
        if (tmp_called_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_64 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_64 == NULL)) {
            tmp_mvar_value_64 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_64 == NULL)) {
            Py_DECREF(tmp_called_name_50);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_129 = tmp_mvar_value_64;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 301;
        tmp_args_element_name_72 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_129, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[127], 0));

        if (tmp_args_element_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_50);

            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 301;
        tmp_call_result_115 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_50, tmp_args_element_name_72);
        Py_DECREF(tmp_called_name_50);
        Py_DECREF(tmp_args_element_name_72);
        if (tmp_call_result_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_instance_130;
        PyObject *tmp_expression_name_167;
        PyObject *tmp_call_result_116;
        CHECK_OBJECT(par_self);
        tmp_expression_name_167 = par_self;
        tmp_called_instance_130 = LOOKUP_ATTRIBUTE(tmp_expression_name_167, mod_consts[126]);
        if (tmp_called_instance_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 302;
        tmp_call_result_116 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_130, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[128], 0));

        Py_DECREF(tmp_called_instance_130);
        if (tmp_call_result_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_instance_131;
        PyObject *tmp_expression_name_168;
        PyObject *tmp_call_result_117;
        CHECK_OBJECT(par_self);
        tmp_expression_name_168 = par_self;
        tmp_called_instance_131 = LOOKUP_ATTRIBUTE(tmp_expression_name_168, mod_consts[126]);
        if (tmp_called_instance_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 305;
        tmp_call_result_117 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_131, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[129], 0));

        Py_DECREF(tmp_called_instance_131);
        if (tmp_call_result_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_assattr_name_28;
        PyObject *tmp_called_name_51;
        PyObject *tmp_expression_name_169;
        PyObject *tmp_mvar_value_65;
        PyObject *tmp_args_element_name_73;
        PyObject *tmp_expression_name_170;
        PyObject *tmp_assattr_target_28;
        tmp_mvar_value_65 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_65 == NULL)) {
            tmp_mvar_value_65 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_65 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_169 = tmp_mvar_value_65;
        tmp_called_name_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_169, mod_consts[130]);
        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_170 = par_self;
        tmp_args_element_name_73 = LOOKUP_ATTRIBUTE(tmp_expression_name_170, mod_consts[120]);
        if (tmp_args_element_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 306;
        tmp_assattr_name_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_51, tmp_args_element_name_73);
        Py_DECREF(tmp_called_name_51);
        Py_DECREF(tmp_args_element_name_73);
        if (tmp_assattr_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_28 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_28, mod_consts[131], tmp_assattr_name_28);
        Py_DECREF(tmp_assattr_name_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_52;
        PyObject *tmp_expression_name_171;
        PyObject *tmp_expression_name_172;
        PyObject *tmp_call_result_118;
        PyObject *tmp_args_element_name_74;
        PyObject *tmp_called_instance_132;
        PyObject *tmp_mvar_value_66;
        CHECK_OBJECT(par_self);
        tmp_expression_name_172 = par_self;
        tmp_expression_name_171 = LOOKUP_ATTRIBUTE(tmp_expression_name_172, mod_consts[131]);
        if (tmp_expression_name_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_52 = LOOKUP_ATTRIBUTE(tmp_expression_name_171, mod_consts[18]);
        Py_DECREF(tmp_expression_name_171);
        if (tmp_called_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_66 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_66 == NULL)) {
            tmp_mvar_value_66 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_66 == NULL)) {
            Py_DECREF(tmp_called_name_52);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_132 = tmp_mvar_value_66;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 307;
        tmp_args_element_name_74 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_132, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[132], 0));

        if (tmp_args_element_name_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_52);

            exception_lineno = 307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 307;
        tmp_call_result_118 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_52, tmp_args_element_name_74);
        Py_DECREF(tmp_called_name_52);
        Py_DECREF(tmp_args_element_name_74);
        if (tmp_call_result_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_instance_133;
        PyObject *tmp_expression_name_173;
        PyObject *tmp_call_result_119;
        CHECK_OBJECT(par_self);
        tmp_expression_name_173 = par_self;
        tmp_called_instance_133 = LOOKUP_ATTRIBUTE(tmp_expression_name_173, mod_consts[131]);
        if (tmp_called_instance_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 308;
        tmp_call_result_119 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_133, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[133], 0));

        Py_DECREF(tmp_called_instance_133);
        if (tmp_call_result_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_instance_134;
        PyObject *tmp_expression_name_174;
        PyObject *tmp_call_result_120;
        CHECK_OBJECT(par_self);
        tmp_expression_name_174 = par_self;
        tmp_called_instance_134 = LOOKUP_ATTRIBUTE(tmp_expression_name_174, mod_consts[131]);
        if (tmp_called_instance_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 312;
        tmp_call_result_120 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_134, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_134);
        if (tmp_call_result_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_instance_135;
        PyObject *tmp_expression_name_175;
        PyObject *tmp_call_result_121;
        CHECK_OBJECT(par_self);
        tmp_expression_name_175 = par_self;
        tmp_called_instance_135 = LOOKUP_ATTRIBUTE(tmp_expression_name_175, mod_consts[131]);
        if (tmp_called_instance_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 313;
        tmp_call_result_121 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_135, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[134], 0));

        Py_DECREF(tmp_called_instance_135);
        if (tmp_call_result_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_assattr_name_29;
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_176;
        PyObject *tmp_mvar_value_67;
        PyObject *tmp_args_element_name_75;
        PyObject *tmp_expression_name_177;
        PyObject *tmp_assattr_target_29;
        tmp_mvar_value_67 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_67 == NULL)) {
            tmp_mvar_value_67 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_67 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_176 = tmp_mvar_value_67;
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_176, mod_consts[51]);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_177 = par_self;
        tmp_args_element_name_75 = LOOKUP_ATTRIBUTE(tmp_expression_name_177, mod_consts[120]);
        if (tmp_args_element_name_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 314;
        tmp_assattr_name_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_53, tmp_args_element_name_75);
        Py_DECREF(tmp_called_name_53);
        Py_DECREF(tmp_args_element_name_75);
        if (tmp_assattr_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_29 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_29, mod_consts[135], tmp_assattr_name_29);
        Py_DECREF(tmp_assattr_name_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_54;
        PyObject *tmp_expression_name_178;
        PyObject *tmp_expression_name_179;
        PyObject *tmp_call_result_122;
        PyObject *tmp_args_element_name_76;
        PyObject *tmp_called_instance_136;
        PyObject *tmp_mvar_value_68;
        CHECK_OBJECT(par_self);
        tmp_expression_name_179 = par_self;
        tmp_expression_name_178 = LOOKUP_ATTRIBUTE(tmp_expression_name_179, mod_consts[135]);
        if (tmp_expression_name_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_54 = LOOKUP_ATTRIBUTE(tmp_expression_name_178, mod_consts[18]);
        Py_DECREF(tmp_expression_name_178);
        if (tmp_called_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_68 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_68 == NULL)) {
            tmp_mvar_value_68 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_68 == NULL)) {
            Py_DECREF(tmp_called_name_54);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_136 = tmp_mvar_value_68;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 315;
        tmp_args_element_name_76 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_136, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[53], 0));

        if (tmp_args_element_name_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_54);

            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 315;
        tmp_call_result_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_54, tmp_args_element_name_76);
        Py_DECREF(tmp_called_name_54);
        Py_DECREF(tmp_args_element_name_76);
        if (tmp_call_result_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_instance_137;
        PyObject *tmp_expression_name_180;
        PyObject *tmp_call_result_123;
        CHECK_OBJECT(par_self);
        tmp_expression_name_180 = par_self;
        tmp_called_instance_137 = LOOKUP_ATTRIBUTE(tmp_expression_name_180, mod_consts[135]);
        if (tmp_called_instance_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 316;
        tmp_call_result_123 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_137, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[54], 0));

        Py_DECREF(tmp_called_instance_137);
        if (tmp_call_result_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_instance_138;
        PyObject *tmp_expression_name_181;
        PyObject *tmp_call_result_124;
        CHECK_OBJECT(par_self);
        tmp_expression_name_181 = par_self;
        tmp_called_instance_138 = LOOKUP_ATTRIBUTE(tmp_expression_name_181, mod_consts[135]);
        if (tmp_called_instance_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 321;
        tmp_call_result_124 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_138, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[136], 0));

        Py_DECREF(tmp_called_instance_138);
        if (tmp_call_result_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_assattr_name_30;
        PyObject *tmp_called_name_55;
        PyObject *tmp_expression_name_182;
        PyObject *tmp_mvar_value_69;
        PyObject *tmp_args_element_name_77;
        PyObject *tmp_expression_name_183;
        PyObject *tmp_assattr_target_30;
        tmp_mvar_value_69 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_69 == NULL)) {
            tmp_mvar_value_69 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_69 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_182 = tmp_mvar_value_69;
        tmp_called_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_182, mod_consts[29]);
        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_183 = par_self;
        tmp_args_element_name_77 = LOOKUP_ATTRIBUTE(tmp_expression_name_183, mod_consts[120]);
        if (tmp_args_element_name_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 322;
        tmp_assattr_name_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_55, tmp_args_element_name_77);
        Py_DECREF(tmp_called_name_55);
        Py_DECREF(tmp_args_element_name_77);
        if (tmp_assattr_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_30 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_30, mod_consts[137], tmp_assattr_name_30);
        Py_DECREF(tmp_assattr_name_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_56;
        PyObject *tmp_expression_name_184;
        PyObject *tmp_expression_name_185;
        PyObject *tmp_call_result_125;
        PyObject *tmp_args_element_name_78;
        PyObject *tmp_called_instance_139;
        PyObject *tmp_mvar_value_70;
        CHECK_OBJECT(par_self);
        tmp_expression_name_185 = par_self;
        tmp_expression_name_184 = LOOKUP_ATTRIBUTE(tmp_expression_name_185, mod_consts[137]);
        if (tmp_expression_name_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_56 = LOOKUP_ATTRIBUTE(tmp_expression_name_184, mod_consts[18]);
        Py_DECREF(tmp_expression_name_184);
        if (tmp_called_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_70 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_70 == NULL)) {
            tmp_mvar_value_70 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_70 == NULL)) {
            Py_DECREF(tmp_called_name_56);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_139 = tmp_mvar_value_70;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 323;
        tmp_args_element_name_78 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_139, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[138], 0));

        if (tmp_args_element_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_56);

            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 323;
        tmp_call_result_125 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_56, tmp_args_element_name_78);
        Py_DECREF(tmp_called_name_56);
        Py_DECREF(tmp_args_element_name_78);
        if (tmp_call_result_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_instance_140;
        PyObject *tmp_expression_name_186;
        PyObject *tmp_call_result_126;
        CHECK_OBJECT(par_self);
        tmp_expression_name_186 = par_self;
        tmp_called_instance_140 = LOOKUP_ATTRIBUTE(tmp_expression_name_186, mod_consts[137]);
        if (tmp_called_instance_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 324;
        tmp_call_result_126 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_140, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[86], 0));

        Py_DECREF(tmp_called_instance_140);
        if (tmp_call_result_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_instance_141;
        PyObject *tmp_expression_name_187;
        PyObject *tmp_call_result_127;
        CHECK_OBJECT(par_self);
        tmp_expression_name_187 = par_self;
        tmp_called_instance_141 = LOOKUP_ATTRIBUTE(tmp_expression_name_187, mod_consts[137]);
        if (tmp_called_instance_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 336;
        tmp_call_result_127 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_141, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[139], 0));

        Py_DECREF(tmp_called_instance_141);
        if (tmp_call_result_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_assattr_name_31;
        PyObject *tmp_called_name_57;
        PyObject *tmp_expression_name_188;
        PyObject *tmp_mvar_value_71;
        PyObject *tmp_args_element_name_79;
        PyObject *tmp_expression_name_189;
        PyObject *tmp_assattr_target_31;
        tmp_mvar_value_71 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_71 == NULL)) {
            tmp_mvar_value_71 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_71 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_188 = tmp_mvar_value_71;
        tmp_called_name_57 = LOOKUP_ATTRIBUTE(tmp_expression_name_188, mod_consts[29]);
        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_189 = par_self;
        tmp_args_element_name_79 = LOOKUP_ATTRIBUTE(tmp_expression_name_189, mod_consts[120]);
        if (tmp_args_element_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 337;
        tmp_assattr_name_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_57, tmp_args_element_name_79);
        Py_DECREF(tmp_called_name_57);
        Py_DECREF(tmp_args_element_name_79);
        if (tmp_assattr_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_31 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_31, mod_consts[140], tmp_assattr_name_31);
        Py_DECREF(tmp_assattr_name_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_58;
        PyObject *tmp_expression_name_190;
        PyObject *tmp_expression_name_191;
        PyObject *tmp_call_result_128;
        PyObject *tmp_args_element_name_80;
        PyObject *tmp_called_instance_142;
        PyObject *tmp_mvar_value_72;
        CHECK_OBJECT(par_self);
        tmp_expression_name_191 = par_self;
        tmp_expression_name_190 = LOOKUP_ATTRIBUTE(tmp_expression_name_191, mod_consts[140]);
        if (tmp_expression_name_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_190, mod_consts[18]);
        Py_DECREF(tmp_expression_name_190);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_72 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_72 == NULL)) {
            tmp_mvar_value_72 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_72 == NULL)) {
            Py_DECREF(tmp_called_name_58);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_142 = tmp_mvar_value_72;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 338;
        tmp_args_element_name_80 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_142, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[141], 0));

        if (tmp_args_element_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 338;
        tmp_call_result_128 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, tmp_args_element_name_80);
        Py_DECREF(tmp_called_name_58);
        Py_DECREF(tmp_args_element_name_80);
        if (tmp_call_result_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_instance_143;
        PyObject *tmp_expression_name_192;
        PyObject *tmp_call_result_129;
        CHECK_OBJECT(par_self);
        tmp_expression_name_192 = par_self;
        tmp_called_instance_143 = LOOKUP_ATTRIBUTE(tmp_expression_name_192, mod_consts[140]);
        if (tmp_called_instance_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 339;
        tmp_call_result_129 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_143, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[86], 0));

        Py_DECREF(tmp_called_instance_143);
        if (tmp_call_result_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_instance_144;
        PyObject *tmp_expression_name_193;
        PyObject *tmp_call_result_130;
        CHECK_OBJECT(par_self);
        tmp_expression_name_193 = par_self;
        tmp_called_instance_144 = LOOKUP_ATTRIBUTE(tmp_expression_name_193, mod_consts[140]);
        if (tmp_called_instance_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 351;
        tmp_call_result_130 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_144, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[142], 0));

        Py_DECREF(tmp_called_instance_144);
        if (tmp_call_result_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_name_59;
        PyObject *tmp_expression_name_194;
        PyObject *tmp_expression_name_195;
        PyObject *tmp_call_result_131;
        PyObject *tmp_args_element_name_81;
        PyObject *tmp_expression_name_196;
        PyObject *tmp_args_element_name_82;
        CHECK_OBJECT(par_self);
        tmp_expression_name_195 = par_self;
        tmp_expression_name_194 = LOOKUP_ATTRIBUTE(tmp_expression_name_195, mod_consts[39]);
        if (tmp_expression_name_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_59 = LOOKUP_ATTRIBUTE(tmp_expression_name_194, mod_consts[70]);
        Py_DECREF(tmp_expression_name_194);
        if (tmp_called_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_196 = par_self;
        tmp_args_element_name_81 = LOOKUP_ATTRIBUTE(tmp_expression_name_196, mod_consts[120]);
        if (tmp_args_element_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_59);

            exception_lineno = 352;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_82 = mod_consts[71];
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_name_81, tmp_args_element_name_82};
            tmp_call_result_131 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_59, call_args);
        }

        Py_DECREF(tmp_called_name_59);
        Py_DECREF(tmp_args_element_name_81);
        if (tmp_call_result_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_assattr_name_32;
        PyObject *tmp_called_name_60;
        PyObject *tmp_expression_name_197;
        PyObject *tmp_mvar_value_73;
        PyObject *tmp_args_element_name_83;
        PyObject *tmp_expression_name_198;
        PyObject *tmp_assattr_target_32;
        tmp_mvar_value_73 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_73 == NULL)) {
            tmp_mvar_value_73 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_73 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_197 = tmp_mvar_value_73;
        tmp_called_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_197, mod_consts[16]);
        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_198 = par_self;
        tmp_args_element_name_83 = LOOKUP_ATTRIBUTE(tmp_expression_name_198, mod_consts[14]);
        if (tmp_args_element_name_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 353;
        tmp_assattr_name_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_60, tmp_args_element_name_83);
        Py_DECREF(tmp_called_name_60);
        Py_DECREF(tmp_args_element_name_83);
        if (tmp_assattr_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_32 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_32, mod_consts[143], tmp_assattr_name_32);
        Py_DECREF(tmp_assattr_name_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_61;
        PyObject *tmp_expression_name_199;
        PyObject *tmp_expression_name_200;
        PyObject *tmp_call_result_132;
        PyObject *tmp_args_element_name_84;
        PyObject *tmp_called_instance_145;
        PyObject *tmp_mvar_value_74;
        CHECK_OBJECT(par_self);
        tmp_expression_name_200 = par_self;
        tmp_expression_name_199 = LOOKUP_ATTRIBUTE(tmp_expression_name_200, mod_consts[143]);
        if (tmp_expression_name_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_61 = LOOKUP_ATTRIBUTE(tmp_expression_name_199, mod_consts[18]);
        Py_DECREF(tmp_expression_name_199);
        if (tmp_called_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_74 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_74 == NULL)) {
            tmp_mvar_value_74 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_74 == NULL)) {
            Py_DECREF(tmp_called_name_61);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_145 = tmp_mvar_value_74;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 354;
        tmp_args_element_name_84 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_145, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[144], 0));

        if (tmp_args_element_name_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_61);

            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 354;
        tmp_call_result_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_61, tmp_args_element_name_84);
        Py_DECREF(tmp_called_name_61);
        Py_DECREF(tmp_args_element_name_84);
        if (tmp_call_result_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_instance_146;
        PyObject *tmp_expression_name_201;
        PyObject *tmp_call_result_133;
        CHECK_OBJECT(par_self);
        tmp_expression_name_201 = par_self;
        tmp_called_instance_146 = LOOKUP_ATTRIBUTE(tmp_expression_name_201, mod_consts[143]);
        if (tmp_called_instance_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 355;
        tmp_call_result_133 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_146, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_146);
        if (tmp_call_result_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_name_62;
        PyObject *tmp_expression_name_202;
        PyObject *tmp_expression_name_203;
        PyObject *tmp_call_result_134;
        PyObject *tmp_args_element_name_85;
        PyObject *tmp_called_instance_147;
        PyObject *tmp_mvar_value_75;
        CHECK_OBJECT(par_self);
        tmp_expression_name_203 = par_self;
        tmp_expression_name_202 = LOOKUP_ATTRIBUTE(tmp_expression_name_203, mod_consts[143]);
        if (tmp_expression_name_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_202, mod_consts[22]);
        Py_DECREF(tmp_expression_name_202);
        if (tmp_called_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_75 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_75 == NULL)) {
            tmp_mvar_value_75 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_75 == NULL)) {
            Py_DECREF(tmp_called_name_62);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_147 = tmp_mvar_value_75;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 356;
        tmp_args_element_name_85 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_147, mod_consts[24], &PyTuple_GET_ITEM(mod_consts[145], 0));

        if (tmp_args_element_name_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_62);

            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 356;
        tmp_call_result_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_62, tmp_args_element_name_85);
        Py_DECREF(tmp_called_name_62);
        Py_DECREF(tmp_args_element_name_85);
        if (tmp_call_result_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_instance_148;
        PyObject *tmp_expression_name_204;
        PyObject *tmp_call_result_135;
        CHECK_OBJECT(par_self);
        tmp_expression_name_204 = par_self;
        tmp_called_instance_148 = LOOKUP_ATTRIBUTE(tmp_expression_name_204, mod_consts[143]);
        if (tmp_called_instance_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 357;
        tmp_call_result_135 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_148, mod_consts[26], &PyTuple_GET_ITEM(mod_consts[27], 0));

        Py_DECREF(tmp_called_instance_148);
        if (tmp_call_result_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_instance_149;
        PyObject *tmp_expression_name_205;
        PyObject *tmp_call_result_136;
        CHECK_OBJECT(par_self);
        tmp_expression_name_205 = par_self;
        tmp_called_instance_149 = LOOKUP_ATTRIBUTE(tmp_expression_name_205, mod_consts[143]);
        if (tmp_called_instance_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 358;
        tmp_call_result_136 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_149, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[146], 0));

        Py_DECREF(tmp_called_instance_149);
        if (tmp_call_result_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_assattr_name_33;
        PyObject *tmp_called_name_63;
        PyObject *tmp_expression_name_206;
        PyObject *tmp_mvar_value_76;
        PyObject *tmp_args_element_name_86;
        PyObject *tmp_expression_name_207;
        PyObject *tmp_assattr_target_33;
        tmp_mvar_value_76 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_76 == NULL)) {
            tmp_mvar_value_76 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_76 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_206 = tmp_mvar_value_76;
        tmp_called_name_63 = LOOKUP_ATTRIBUTE(tmp_expression_name_206, mod_consts[16]);
        if (tmp_called_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_207 = par_self;
        tmp_args_element_name_86 = LOOKUP_ATTRIBUTE(tmp_expression_name_207, mod_consts[14]);
        if (tmp_args_element_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_63);

            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 359;
        tmp_assattr_name_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_63, tmp_args_element_name_86);
        Py_DECREF(tmp_called_name_63);
        Py_DECREF(tmp_args_element_name_86);
        if (tmp_assattr_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_33 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_33, mod_consts[147], tmp_assattr_name_33);
        Py_DECREF(tmp_assattr_name_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_64;
        PyObject *tmp_expression_name_208;
        PyObject *tmp_expression_name_209;
        PyObject *tmp_call_result_137;
        PyObject *tmp_args_element_name_87;
        PyObject *tmp_called_instance_150;
        PyObject *tmp_mvar_value_77;
        CHECK_OBJECT(par_self);
        tmp_expression_name_209 = par_self;
        tmp_expression_name_208 = LOOKUP_ATTRIBUTE(tmp_expression_name_209, mod_consts[147]);
        if (tmp_expression_name_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_208, mod_consts[18]);
        Py_DECREF(tmp_expression_name_208);
        if (tmp_called_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_77 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_77 == NULL)) {
            tmp_mvar_value_77 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_77 == NULL)) {
            Py_DECREF(tmp_called_name_64);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_150 = tmp_mvar_value_77;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 360;
        tmp_args_element_name_87 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_150, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[148], 0));

        if (tmp_args_element_name_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_64);

            exception_lineno = 360;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 360;
        tmp_call_result_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_64, tmp_args_element_name_87);
        Py_DECREF(tmp_called_name_64);
        Py_DECREF(tmp_args_element_name_87);
        if (tmp_call_result_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_instance_151;
        PyObject *tmp_expression_name_210;
        PyObject *tmp_call_result_138;
        CHECK_OBJECT(par_self);
        tmp_expression_name_210 = par_self;
        tmp_called_instance_151 = LOOKUP_ATTRIBUTE(tmp_expression_name_210, mod_consts[147]);
        if (tmp_called_instance_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 361;
        tmp_call_result_138 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_151, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_151);
        if (tmp_call_result_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_instance_152;
        PyObject *tmp_expression_name_211;
        PyObject *tmp_call_result_139;
        CHECK_OBJECT(par_self);
        tmp_expression_name_211 = par_self;
        tmp_called_instance_152 = LOOKUP_ATTRIBUTE(tmp_expression_name_211, mod_consts[147]);
        if (tmp_called_instance_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 362;
        tmp_call_result_139 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_152, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_152);
        if (tmp_call_result_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_name_65;
        PyObject *tmp_expression_name_212;
        PyObject *tmp_expression_name_213;
        PyObject *tmp_call_result_140;
        PyObject *tmp_args_element_name_88;
        PyObject *tmp_called_instance_153;
        PyObject *tmp_mvar_value_78;
        CHECK_OBJECT(par_self);
        tmp_expression_name_213 = par_self;
        tmp_expression_name_212 = LOOKUP_ATTRIBUTE(tmp_expression_name_213, mod_consts[147]);
        if (tmp_expression_name_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_65 = LOOKUP_ATTRIBUTE(tmp_expression_name_212, mod_consts[22]);
        Py_DECREF(tmp_expression_name_212);
        if (tmp_called_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_78 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_78 == NULL)) {
            tmp_mvar_value_78 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[23]);
        }

        if (unlikely(tmp_mvar_value_78 == NULL)) {
            Py_DECREF(tmp_called_name_65);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_153 = tmp_mvar_value_78;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 363;
        tmp_args_element_name_88 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_153, mod_consts[24], &PyTuple_GET_ITEM(mod_consts[124], 0));

        if (tmp_args_element_name_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_65);

            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 363;
        tmp_call_result_140 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_65, tmp_args_element_name_88);
        Py_DECREF(tmp_called_name_65);
        Py_DECREF(tmp_args_element_name_88);
        if (tmp_call_result_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_instance_154;
        PyObject *tmp_expression_name_214;
        PyObject *tmp_call_result_141;
        CHECK_OBJECT(par_self);
        tmp_expression_name_214 = par_self;
        tmp_called_instance_154 = LOOKUP_ATTRIBUTE(tmp_expression_name_214, mod_consts[147]);
        if (tmp_called_instance_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 364;
        tmp_call_result_141 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_154, mod_consts[26], &PyTuple_GET_ITEM(mod_consts[27], 0));

        Py_DECREF(tmp_called_instance_154);
        if (tmp_call_result_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_instance_155;
        PyObject *tmp_expression_name_215;
        PyObject *tmp_call_result_142;
        CHECK_OBJECT(par_self);
        tmp_expression_name_215 = par_self;
        tmp_called_instance_155 = LOOKUP_ATTRIBUTE(tmp_expression_name_215, mod_consts[147]);
        if (tmp_called_instance_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 365;
        tmp_call_result_142 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_155, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[149], 0));

        Py_DECREF(tmp_called_instance_155);
        if (tmp_call_result_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_assattr_name_34;
        PyObject *tmp_called_name_66;
        PyObject *tmp_expression_name_216;
        PyObject *tmp_mvar_value_79;
        PyObject *tmp_args_element_name_89;
        PyObject *tmp_expression_name_217;
        PyObject *tmp_assattr_target_34;
        tmp_mvar_value_79 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_79 == NULL)) {
            tmp_mvar_value_79 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_79 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_216 = tmp_mvar_value_79;
        tmp_called_name_66 = LOOKUP_ATTRIBUTE(tmp_expression_name_216, mod_consts[16]);
        if (tmp_called_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_217 = par_self;
        tmp_args_element_name_89 = LOOKUP_ATTRIBUTE(tmp_expression_name_217, mod_consts[14]);
        if (tmp_args_element_name_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_66);

            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 366;
        tmp_assattr_name_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_66, tmp_args_element_name_89);
        Py_DECREF(tmp_called_name_66);
        Py_DECREF(tmp_args_element_name_89);
        if (tmp_assattr_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_34 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_34, mod_consts[150], tmp_assattr_name_34);
        Py_DECREF(tmp_assattr_name_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_67;
        PyObject *tmp_expression_name_218;
        PyObject *tmp_expression_name_219;
        PyObject *tmp_call_result_143;
        PyObject *tmp_args_element_name_90;
        PyObject *tmp_called_instance_156;
        PyObject *tmp_mvar_value_80;
        CHECK_OBJECT(par_self);
        tmp_expression_name_219 = par_self;
        tmp_expression_name_218 = LOOKUP_ATTRIBUTE(tmp_expression_name_219, mod_consts[150]);
        if (tmp_expression_name_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_67 = LOOKUP_ATTRIBUTE(tmp_expression_name_218, mod_consts[18]);
        Py_DECREF(tmp_expression_name_218);
        if (tmp_called_name_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_80 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_80 == NULL)) {
            tmp_mvar_value_80 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_80 == NULL)) {
            Py_DECREF(tmp_called_name_67);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_156 = tmp_mvar_value_80;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 367;
        tmp_args_element_name_90 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_156, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[151], 0));

        if (tmp_args_element_name_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_67);

            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 367;
        tmp_call_result_143 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_67, tmp_args_element_name_90);
        Py_DECREF(tmp_called_name_67);
        Py_DECREF(tmp_args_element_name_90);
        if (tmp_call_result_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_instance_157;
        PyObject *tmp_expression_name_220;
        PyObject *tmp_call_result_144;
        CHECK_OBJECT(par_self);
        tmp_expression_name_220 = par_self;
        tmp_called_instance_157 = LOOKUP_ATTRIBUTE(tmp_expression_name_220, mod_consts[150]);
        if (tmp_called_instance_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 368;
        tmp_call_result_144 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_157, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[128], 0));

        Py_DECREF(tmp_called_instance_157);
        if (tmp_call_result_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_instance_158;
        PyObject *tmp_expression_name_221;
        PyObject *tmp_call_result_145;
        CHECK_OBJECT(par_self);
        tmp_expression_name_221 = par_self;
        tmp_called_instance_158 = LOOKUP_ATTRIBUTE(tmp_expression_name_221, mod_consts[150]);
        if (tmp_called_instance_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 371;
        tmp_call_result_145 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_158, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[152], 0));

        Py_DECREF(tmp_called_instance_158);
        if (tmp_call_result_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_assattr_name_35;
        PyObject *tmp_called_name_68;
        PyObject *tmp_expression_name_222;
        PyObject *tmp_mvar_value_81;
        PyObject *tmp_args_element_name_91;
        PyObject *tmp_expression_name_223;
        PyObject *tmp_assattr_target_35;
        tmp_mvar_value_81 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_mvar_value_81 == NULL)) {
            tmp_mvar_value_81 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[12]);
        }

        if (unlikely(tmp_mvar_value_81 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_222 = tmp_mvar_value_81;
        tmp_called_name_68 = LOOKUP_ATTRIBUTE(tmp_expression_name_222, mod_consts[130]);
        if (tmp_called_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_223 = par_self;
        tmp_args_element_name_91 = LOOKUP_ATTRIBUTE(tmp_expression_name_223, mod_consts[14]);
        if (tmp_args_element_name_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_68);

            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 372;
        tmp_assattr_name_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_68, tmp_args_element_name_91);
        Py_DECREF(tmp_called_name_68);
        Py_DECREF(tmp_args_element_name_91);
        if (tmp_assattr_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_35 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_35, mod_consts[153], tmp_assattr_name_35);
        Py_DECREF(tmp_assattr_name_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_69;
        PyObject *tmp_expression_name_224;
        PyObject *tmp_expression_name_225;
        PyObject *tmp_call_result_146;
        PyObject *tmp_args_element_name_92;
        PyObject *tmp_called_instance_159;
        PyObject *tmp_mvar_value_82;
        CHECK_OBJECT(par_self);
        tmp_expression_name_225 = par_self;
        tmp_expression_name_224 = LOOKUP_ATTRIBUTE(tmp_expression_name_225, mod_consts[153]);
        if (tmp_expression_name_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_69 = LOOKUP_ATTRIBUTE(tmp_expression_name_224, mod_consts[18]);
        Py_DECREF(tmp_expression_name_224);
        if (tmp_called_name_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_82 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_82 == NULL)) {
            tmp_mvar_value_82 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_82 == NULL)) {
            Py_DECREF(tmp_called_name_69);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_159 = tmp_mvar_value_82;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 373;
        tmp_args_element_name_92 = CALL_METHOD_WITH_ARGS4(tmp_called_instance_159, mod_consts[19], &PyTuple_GET_ITEM(mod_consts[154], 0));

        if (tmp_args_element_name_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_69);

            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 373;
        tmp_call_result_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_69, tmp_args_element_name_92);
        Py_DECREF(tmp_called_name_69);
        Py_DECREF(tmp_args_element_name_92);
        if (tmp_call_result_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_instance_160;
        PyObject *tmp_expression_name_226;
        PyObject *tmp_call_result_147;
        CHECK_OBJECT(par_self);
        tmp_expression_name_226 = par_self;
        tmp_called_instance_160 = LOOKUP_ATTRIBUTE(tmp_expression_name_226, mod_consts[153]);
        if (tmp_called_instance_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 374;
        tmp_call_result_147 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_160, mod_consts[10], &PyTuple_GET_ITEM(mod_consts[133], 0));

        Py_DECREF(tmp_called_instance_160);
        if (tmp_call_result_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_instance_161;
        PyObject *tmp_expression_name_227;
        PyObject *tmp_call_result_148;
        CHECK_OBJECT(par_self);
        tmp_expression_name_227 = par_self;
        tmp_called_instance_161 = LOOKUP_ATTRIBUTE(tmp_expression_name_227, mod_consts[153]);
        if (tmp_called_instance_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 378;
        tmp_call_result_148 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_161, mod_consts[21], &PyTuple_GET_ITEM(mod_consts[11], 0));

        Py_DECREF(tmp_called_instance_161);
        if (tmp_call_result_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_instance_162;
        PyObject *tmp_expression_name_228;
        PyObject *tmp_call_result_149;
        CHECK_OBJECT(par_self);
        tmp_expression_name_228 = par_self;
        tmp_called_instance_162 = LOOKUP_ATTRIBUTE(tmp_expression_name_228, mod_consts[153]);
        if (tmp_called_instance_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 379;
        tmp_call_result_149 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_162, mod_consts[0], &PyTuple_GET_ITEM(mod_consts[155], 0));

        Py_DECREF(tmp_called_instance_162);
        if (tmp_call_result_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_name_70;
        PyObject *tmp_expression_name_229;
        PyObject *tmp_call_result_150;
        PyObject *tmp_args_element_name_93;
        PyObject *tmp_expression_name_230;
        CHECK_OBJECT(par_MainWindow);
        tmp_expression_name_229 = par_MainWindow;
        tmp_called_name_70 = LOOKUP_ATTRIBUTE(tmp_expression_name_229, mod_consts[156]);
        if (tmp_called_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_230 = par_self;
        tmp_args_element_name_93 = LOOKUP_ATTRIBUTE(tmp_expression_name_230, mod_consts[14]);
        if (tmp_args_element_name_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_70);

            exception_lineno = 380;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 380;
        tmp_call_result_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_70, tmp_args_element_name_93);
        Py_DECREF(tmp_called_name_70);
        Py_DECREF(tmp_args_element_name_93);
        if (tmp_call_result_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_instance_163;
        PyObject *tmp_call_result_151;
        PyObject *tmp_args_element_name_94;
        CHECK_OBJECT(par_self);
        tmp_called_instance_163 = par_self;
        CHECK_OBJECT(par_MainWindow);
        tmp_args_element_name_94 = par_MainWindow;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 382;
        {
            PyObject *call_args[] = {tmp_args_element_name_94};
            tmp_call_result_151 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_163, mod_consts[157], call_args);
        }

        if (tmp_call_result_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_instance_164;
        PyObject *tmp_expression_name_231;
        PyObject *tmp_call_result_152;
        CHECK_OBJECT(par_self);
        tmp_expression_name_231 = par_self;
        tmp_called_instance_164 = LOOKUP_ATTRIBUTE(tmp_expression_name_231, mod_consts[39]);
        if (tmp_called_instance_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 383;
        tmp_call_result_152 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_164, mod_consts[158], &PyTuple_GET_ITEM(mod_consts[97], 0));

        Py_DECREF(tmp_called_instance_164);
        if (tmp_call_result_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_instance_165;
        PyObject *tmp_expression_name_232;
        PyObject *tmp_mvar_value_83;
        PyObject *tmp_call_result_153;
        PyObject *tmp_args_element_name_95;
        tmp_mvar_value_83 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_83 == NULL)) {
            tmp_mvar_value_83 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_83 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 384;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_232 = tmp_mvar_value_83;
        tmp_called_instance_165 = LOOKUP_ATTRIBUTE(tmp_expression_name_232, mod_consts[159]);
        if (tmp_called_instance_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_MainWindow);
        tmp_args_element_name_95 = par_MainWindow;
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = {tmp_args_element_name_95};
            tmp_call_result_153 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_165, mod_consts[160], call_args);
        }

        Py_DECREF(tmp_called_instance_165);
        if (tmp_call_result_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_name_71;
        PyObject *tmp_expression_name_233;
        PyObject *tmp_call_result_154;
        PyObject *tmp_args_element_name_96;
        PyObject *tmp_expression_name_234;
        PyObject *tmp_args_element_name_97;
        PyObject *tmp_expression_name_235;
        CHECK_OBJECT(par_MainWindow);
        tmp_expression_name_233 = par_MainWindow;
        tmp_called_name_71 = LOOKUP_ATTRIBUTE(tmp_expression_name_233, mod_consts[161]);
        if (tmp_called_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_234 = par_self;
        tmp_args_element_name_96 = LOOKUP_ATTRIBUTE(tmp_expression_name_234, mod_consts[153]);
        if (tmp_args_element_name_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);

            exception_lineno = 385;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_235 = par_self;
        tmp_args_element_name_97 = LOOKUP_ATTRIBUTE(tmp_expression_name_235, mod_consts[64]);
        if (tmp_args_element_name_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_71);
            Py_DECREF(tmp_args_element_name_96);

            exception_lineno = 385;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_name_96, tmp_args_element_name_97};
            tmp_call_result_154 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_71, call_args);
        }

        Py_DECREF(tmp_called_name_71);
        Py_DECREF(tmp_args_element_name_96);
        Py_DECREF(tmp_args_element_name_97);
        if (tmp_call_result_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_called_name_72;
        PyObject *tmp_expression_name_236;
        PyObject *tmp_call_result_155;
        PyObject *tmp_args_element_name_98;
        PyObject *tmp_expression_name_237;
        PyObject *tmp_args_element_name_99;
        PyObject *tmp_expression_name_238;
        CHECK_OBJECT(par_MainWindow);
        tmp_expression_name_236 = par_MainWindow;
        tmp_called_name_72 = LOOKUP_ATTRIBUTE(tmp_expression_name_236, mod_consts[161]);
        if (tmp_called_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_237 = par_self;
        tmp_args_element_name_98 = LOOKUP_ATTRIBUTE(tmp_expression_name_237, mod_consts[64]);
        if (tmp_args_element_name_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_72);

            exception_lineno = 386;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_238 = par_self;
        tmp_args_element_name_99 = LOOKUP_ATTRIBUTE(tmp_expression_name_238, mod_consts[60]);
        if (tmp_args_element_name_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_72);
            Py_DECREF(tmp_args_element_name_98);

            exception_lineno = 386;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = {tmp_args_element_name_98, tmp_args_element_name_99};
            tmp_call_result_155 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_72, call_args);
        }

        Py_DECREF(tmp_called_name_72);
        Py_DECREF(tmp_args_element_name_98);
        Py_DECREF(tmp_args_element_name_99);
        if (tmp_call_result_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_called_name_73;
        PyObject *tmp_expression_name_239;
        PyObject *tmp_call_result_156;
        PyObject *tmp_args_element_name_100;
        PyObject *tmp_expression_name_240;
        PyObject *tmp_args_element_name_101;
        PyObject *tmp_expression_name_241;
        CHECK_OBJECT(par_MainWindow);
        tmp_expression_name_239 = par_MainWindow;
        tmp_called_name_73 = LOOKUP_ATTRIBUTE(tmp_expression_name_239, mod_consts[161]);
        if (tmp_called_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_240 = par_self;
        tmp_args_element_name_100 = LOOKUP_ATTRIBUTE(tmp_expression_name_240, mod_consts[60]);
        if (tmp_args_element_name_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_73);

            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_241 = par_self;
        tmp_args_element_name_101 = LOOKUP_ATTRIBUTE(tmp_expression_name_241, mod_consts[79]);
        if (tmp_args_element_name_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_73);
            Py_DECREF(tmp_args_element_name_100);

            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_name_100, tmp_args_element_name_101};
            tmp_call_result_156 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_73, call_args);
        }

        Py_DECREF(tmp_called_name_73);
        Py_DECREF(tmp_args_element_name_100);
        Py_DECREF(tmp_args_element_name_101);
        if (tmp_call_result_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_49a1d1d0fdc1dde9b897536938e86fa2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_49a1d1d0fdc1dde9b897536938e86fa2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49a1d1d0fdc1dde9b897536938e86fa2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_49a1d1d0fdc1dde9b897536938e86fa2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49a1d1d0fdc1dde9b897536938e86fa2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_49a1d1d0fdc1dde9b897536938e86fa2,
        type_description_1,
        par_self,
        par_MainWindow,
        var_font,
        var_item
    );


    // Release cached frame.
    if (frame_49a1d1d0fdc1dde9b897536938e86fa2 == cache_frame_49a1d1d0fdc1dde9b897536938e86fa2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_49a1d1d0fdc1dde9b897536938e86fa2);
    }
    cache_frame_49a1d1d0fdc1dde9b897536938e86fa2 = NULL;

    assertFrameObject(frame_49a1d1d0fdc1dde9b897536938e86fa2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_font);
    Py_DECREF(var_font);
    var_font = NULL;

    CHECK_OBJECT(var_item);
    Py_DECREF(var_item);
    var_item = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_font);
    var_font = NULL;

    Py_XDECREF(var_item);
    var_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_MainWindow);
    Py_DECREF(par_MainWindow);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_MainWindow);
    Py_DECREF(par_MainWindow);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_src$ui$ui$$$function_2_retranslateUi(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_MainWindow = python_pars[1];
    PyObject *var__translate = NULL;
    PyObject *var_item = NULL;
    struct Nuitka_FrameObject *frame_d6d70972538d040ed3d309562ca492da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d6d70972538d040ed3d309562ca492da = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d6d70972538d040ed3d309562ca492da)) {
        Py_XDECREF(cache_frame_d6d70972538d040ed3d309562ca492da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6d70972538d040ed3d309562ca492da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6d70972538d040ed3d309562ca492da = MAKE_FUNCTION_FRAME(codeobj_d6d70972538d040ed3d309562ca492da, module_src$ui$ui, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d6d70972538d040ed3d309562ca492da->m_type_description == NULL);
    frame_d6d70972538d040ed3d309562ca492da = cache_frame_d6d70972538d040ed3d309562ca492da;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d6d70972538d040ed3d309562ca492da);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d6d70972538d040ed3d309562ca492da) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[5]);
        }

        if (unlikely(tmp_mvar_value_1 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_1;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[162]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[163]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var__translate == NULL);
        var__translate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        CHECK_OBJECT(par_MainWindow);
        tmp_expression_name_3 = par_MainWindow;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[164]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_2 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 391;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, &PyTuple_GET_ITEM(mod_consts[165], 0));

        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 391;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 391;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_5 = par_self;
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[52]);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[166]);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_4 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 392;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, &PyTuple_GET_ITEM(mod_consts[167], 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 392;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_called_name_6;
        CHECK_OBJECT(par_self);
        tmp_expression_name_7 = par_self;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[56]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[21]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_6 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 397;
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, &PyTuple_GET_ITEM(mod_consts[168], 0));

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 397;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 397;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_called_name_8;
        CHECK_OBJECT(par_self);
        tmp_expression_name_9 = par_self;
        tmp_expression_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[60]);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[21]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_8 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 398;
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, &PyTuple_GET_ITEM(mod_consts[169], 0));

        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 398;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_name_10;
        CHECK_OBJECT(par_self);
        tmp_expression_name_11 = par_self;
        tmp_expression_name_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[64]);
        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[21]);
        Py_DECREF(tmp_expression_name_10);
        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_10 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 399;
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_10, &PyTuple_GET_ITEM(mod_consts[170], 0));

        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_9);

            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 399;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_5);
        Py_DECREF(tmp_called_name_9);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_12;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_called_name_13;
        CHECK_OBJECT(par_self);
        tmp_expression_name_13 = par_self;
        tmp_expression_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[39]);
        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[171]);
        Py_DECREF(tmp_expression_name_12);
        if (tmp_called_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_15 = par_self;
        tmp_expression_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[39]);
        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[172]);
        Py_DECREF(tmp_expression_name_14);
        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_16 = par_self;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[49]);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_called_name_12);

            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 400;
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_12);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);

            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_13 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 400;
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_13, &PyTuple_GET_ITEM(mod_consts[173], 0));

        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_element_name_6);

            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_8};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_11, call_args);
        }

        Py_DECREF(tmp_called_name_11);
        Py_DECREF(tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_called_name_15;
        CHECK_OBJECT(par_self);
        tmp_expression_name_18 = par_self;
        tmp_expression_name_17 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[76]);
        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[21]);
        Py_DECREF(tmp_expression_name_17);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_15 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 401;
        tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_15, &PyTuple_GET_ITEM(mod_consts[174], 0));

        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_14);

            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 401;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_14);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_name_17;
        CHECK_OBJECT(par_self);
        tmp_expression_name_20 = par_self;
        tmp_expression_name_19 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[79]);
        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[21]);
        Py_DECREF(tmp_expression_name_19);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_17 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 402;
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_17, &PyTuple_GET_ITEM(mod_consts[169], 0));

        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 402;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 402;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_16, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_name_18;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_called_name_19;
        CHECK_OBJECT(par_self);
        tmp_expression_name_22 = par_self;
        tmp_expression_name_21 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[82]);
        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[21]);
        Py_DECREF(tmp_expression_name_21);
        if (tmp_called_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_19 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 403;
        tmp_args_element_name_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_19, &PyTuple_GET_ITEM(mod_consts[175], 0));

        if (tmp_args_element_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_18);

            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 403;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_18, tmp_args_element_name_11);
        Py_DECREF(tmp_called_name_18);
        Py_DECREF(tmp_args_element_name_11);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_name_20;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_called_name_21;
        CHECK_OBJECT(par_self);
        tmp_expression_name_24 = par_self;
        tmp_expression_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[84]);
        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[21]);
        Py_DECREF(tmp_expression_name_23);
        if (tmp_called_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_21 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 404;
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_21, &PyTuple_GET_ITEM(mod_consts[176], 0));

        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_20);

            exception_lineno = 404;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 404;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_12);
        Py_DECREF(tmp_called_name_20);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_name_22;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_called_name_23;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_called_name_24;
        CHECK_OBJECT(par_self);
        tmp_expression_name_26 = par_self;
        tmp_expression_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[39]);
        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[171]);
        Py_DECREF(tmp_expression_name_25);
        if (tmp_called_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_28 = par_self;
        tmp_expression_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[39]);
        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_23 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[172]);
        Py_DECREF(tmp_expression_name_27);
        if (tmp_called_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_29 = par_self;
        tmp_args_element_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[72]);
        if (tmp_args_element_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_called_name_23);

            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 405;
        tmp_args_element_name_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_23, tmp_args_element_name_14);
        Py_DECREF(tmp_called_name_23);
        Py_DECREF(tmp_args_element_name_14);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);

            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_24 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 405;
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_24, &PyTuple_GET_ITEM(mod_consts[177], 0));

        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_22);
            Py_DECREF(tmp_args_element_name_13);

            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 405;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_15};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_22, call_args);
        }

        Py_DECREF(tmp_called_name_22);
        Py_DECREF(tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_30;
        CHECK_OBJECT(par_self);
        tmp_expression_name_30 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[91]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 406;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[178], &PyTuple_GET_ITEM(mod_consts[97], 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_item == NULL);
        var_item = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_25;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_called_name_26;
        CHECK_OBJECT(var_item);
        tmp_expression_name_31 = var_item;
        tmp_called_name_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[21]);
        if (tmp_called_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_26 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 407;
        tmp_args_element_name_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_26, &PyTuple_GET_ITEM(mod_consts[179], 0));

        if (tmp_args_element_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_25);

            exception_lineno = 407;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 407;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_25, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_25);
        Py_DECREF(tmp_args_element_name_16);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_32;
        CHECK_OBJECT(par_self);
        tmp_expression_name_32 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[91]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 408;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, mod_consts[178], &PyTuple_GET_ITEM(mod_consts[180], 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_item;
            assert(old != NULL);
            var_item = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_27;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_17;
        PyObject *tmp_called_name_28;
        CHECK_OBJECT(var_item);
        tmp_expression_name_33 = var_item;
        tmp_called_name_27 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[21]);
        if (tmp_called_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_28 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 409;
        tmp_args_element_name_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_28, &PyTuple_GET_ITEM(mod_consts[181], 0));

        if (tmp_args_element_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_27);

            exception_lineno = 409;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 409;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_27, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_27);
        Py_DECREF(tmp_args_element_name_17);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_34;
        CHECK_OBJECT(par_self);
        tmp_expression_name_34 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[91]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 410;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, mod_consts[178], &PyTuple_GET_ITEM(mod_consts[117], 0));

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_item;
            assert(old != NULL);
            var_item = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_29;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_called_name_30;
        CHECK_OBJECT(var_item);
        tmp_expression_name_35 = var_item;
        tmp_called_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[21]);
        if (tmp_called_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_30 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 411;
        tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_30, &PyTuple_GET_ITEM(mod_consts[175], 0));

        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_29);

            exception_lineno = 411;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 411;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_29, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_29);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_name_31;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_called_name_32;
        CHECK_OBJECT(par_self);
        tmp_expression_name_37 = par_self;
        tmp_expression_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_37, mod_consts[104]);
        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_36, mod_consts[21]);
        Py_DECREF(tmp_expression_name_36);
        if (tmp_called_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_32 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 412;
        tmp_args_element_name_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_32, &PyTuple_GET_ITEM(mod_consts[182], 0));

        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_31);

            exception_lineno = 412;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 412;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_31, tmp_args_element_name_19);
        Py_DECREF(tmp_called_name_31);
        Py_DECREF(tmp_args_element_name_19);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_name_33;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_called_name_34;
        CHECK_OBJECT(par_self);
        tmp_expression_name_39 = par_self;
        tmp_expression_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_39, mod_consts[107]);
        if (tmp_expression_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_38, mod_consts[21]);
        Py_DECREF(tmp_expression_name_38);
        if (tmp_called_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_34 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 413;
        tmp_args_element_name_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_34, &PyTuple_GET_ITEM(mod_consts[183], 0));

        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_33);

            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 413;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_33, tmp_args_element_name_20);
        Py_DECREF(tmp_called_name_33);
        Py_DECREF(tmp_args_element_name_20);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_name_35;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_called_name_36;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_called_name_37;
        CHECK_OBJECT(par_self);
        tmp_expression_name_41 = par_self;
        tmp_expression_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_41, mod_consts[39]);
        if (tmp_expression_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_35 = LOOKUP_ATTRIBUTE(tmp_expression_name_40, mod_consts[171]);
        Py_DECREF(tmp_expression_name_40);
        if (tmp_called_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_43 = par_self;
        tmp_expression_name_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_43, mod_consts[39]);
        if (tmp_expression_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_42, mod_consts[172]);
        Py_DECREF(tmp_expression_name_42);
        if (tmp_called_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_44 = par_self;
        tmp_args_element_name_22 = LOOKUP_ATTRIBUTE(tmp_expression_name_44, mod_consts[88]);
        if (tmp_args_element_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);
            Py_DECREF(tmp_called_name_36);

            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 414;
        tmp_args_element_name_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_36, tmp_args_element_name_22);
        Py_DECREF(tmp_called_name_36);
        Py_DECREF(tmp_args_element_name_22);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);

            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_37 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 414;
        tmp_args_element_name_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_37, &PyTuple_GET_ITEM(mod_consts[184], 0));

        if (tmp_args_element_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_35);
            Py_DECREF(tmp_args_element_name_21);

            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 414;
        {
            PyObject *call_args[] = {tmp_args_element_name_21, tmp_args_element_name_23};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_35, call_args);
        }

        Py_DECREF(tmp_called_name_35);
        Py_DECREF(tmp_args_element_name_21);
        Py_DECREF(tmp_args_element_name_23);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_name_38;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_name_24;
        PyObject *tmp_called_name_39;
        CHECK_OBJECT(par_self);
        tmp_expression_name_46 = par_self;
        tmp_expression_name_45 = LOOKUP_ATTRIBUTE(tmp_expression_name_46, mod_consts[112]);
        if (tmp_expression_name_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_38 = LOOKUP_ATTRIBUTE(tmp_expression_name_45, mod_consts[21]);
        Py_DECREF(tmp_expression_name_45);
        if (tmp_called_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_39 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 415;
        tmp_args_element_name_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_39, &PyTuple_GET_ITEM(mod_consts[182], 0));

        if (tmp_args_element_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_38);

            exception_lineno = 415;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 415;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_38, tmp_args_element_name_24);
        Py_DECREF(tmp_called_name_38);
        Py_DECREF(tmp_args_element_name_24);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_47;
        CHECK_OBJECT(par_self);
        tmp_expression_name_47 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_47, mod_consts[114]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 416;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, mod_consts[178], &PyTuple_GET_ITEM(mod_consts[97], 0));

        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_item;
            assert(old != NULL);
            var_item = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_40;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_name_25;
        PyObject *tmp_called_name_41;
        CHECK_OBJECT(var_item);
        tmp_expression_name_48 = var_item;
        tmp_called_name_40 = LOOKUP_ATTRIBUTE(tmp_expression_name_48, mod_consts[21]);
        if (tmp_called_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_41 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 417;
        tmp_args_element_name_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_41, &PyTuple_GET_ITEM(mod_consts[179], 0));

        if (tmp_args_element_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_40);

            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 417;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_40, tmp_args_element_name_25);
        Py_DECREF(tmp_called_name_40);
        Py_DECREF(tmp_args_element_name_25);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_name_49;
        CHECK_OBJECT(par_self);
        tmp_expression_name_49 = par_self;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_49, mod_consts[114]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 418;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[178], &PyTuple_GET_ITEM(mod_consts[180], 0));

        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_item;
            assert(old != NULL);
            var_item = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_42;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_name_26;
        PyObject *tmp_called_name_43;
        CHECK_OBJECT(var_item);
        tmp_expression_name_50 = var_item;
        tmp_called_name_42 = LOOKUP_ATTRIBUTE(tmp_expression_name_50, mod_consts[21]);
        if (tmp_called_name_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_43 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 419;
        tmp_args_element_name_26 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_43, &PyTuple_GET_ITEM(mod_consts[169], 0));

        if (tmp_args_element_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_42);

            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 419;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_42, tmp_args_element_name_26);
        Py_DECREF(tmp_called_name_42);
        Py_DECREF(tmp_args_element_name_26);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_name_44;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_name_27;
        PyObject *tmp_called_name_45;
        CHECK_OBJECT(par_self);
        tmp_expression_name_52 = par_self;
        tmp_expression_name_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_52, mod_consts[118]);
        if (tmp_expression_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_44 = LOOKUP_ATTRIBUTE(tmp_expression_name_51, mod_consts[21]);
        Py_DECREF(tmp_expression_name_51);
        if (tmp_called_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_45 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 420;
        tmp_args_element_name_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_45, &PyTuple_GET_ITEM(mod_consts[183], 0));

        if (tmp_args_element_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_44);

            exception_lineno = 420;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 420;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_44, tmp_args_element_name_27);
        Py_DECREF(tmp_called_name_44);
        Py_DECREF(tmp_args_element_name_27);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_name_46;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_name_28;
        PyObject *tmp_called_name_47;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_args_element_name_29;
        PyObject *tmp_expression_name_57;
        PyObject *tmp_args_element_name_30;
        PyObject *tmp_called_name_48;
        CHECK_OBJECT(par_self);
        tmp_expression_name_54 = par_self;
        tmp_expression_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_54, mod_consts[39]);
        if (tmp_expression_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_46 = LOOKUP_ATTRIBUTE(tmp_expression_name_53, mod_consts[171]);
        Py_DECREF(tmp_expression_name_53);
        if (tmp_called_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_56 = par_self;
        tmp_expression_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_56, mod_consts[39]);
        if (tmp_expression_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_47 = LOOKUP_ATTRIBUTE(tmp_expression_name_55, mod_consts[172]);
        Py_DECREF(tmp_expression_name_55);
        if (tmp_called_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_57 = par_self;
        tmp_args_element_name_29 = LOOKUP_ATTRIBUTE(tmp_expression_name_57, mod_consts[110]);
        if (tmp_args_element_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_called_name_47);

            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 421;
        tmp_args_element_name_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_47, tmp_args_element_name_29);
        Py_DECREF(tmp_called_name_47);
        Py_DECREF(tmp_args_element_name_29);
        if (tmp_args_element_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);

            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_48 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 421;
        tmp_args_element_name_30 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_48, &PyTuple_GET_ITEM(mod_consts[185], 0));

        if (tmp_args_element_name_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_46);
            Py_DECREF(tmp_args_element_name_28);

            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = {tmp_args_element_name_28, tmp_args_element_name_30};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_46, call_args);
        }

        Py_DECREF(tmp_called_name_46);
        Py_DECREF(tmp_args_element_name_28);
        Py_DECREF(tmp_args_element_name_30);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_name_49;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_expression_name_59;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_name_31;
        PyObject *tmp_called_name_50;
        CHECK_OBJECT(par_self);
        tmp_expression_name_59 = par_self;
        tmp_expression_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_59, mod_consts[126]);
        if (tmp_expression_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_49 = LOOKUP_ATTRIBUTE(tmp_expression_name_58, mod_consts[21]);
        Py_DECREF(tmp_expression_name_58);
        if (tmp_called_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_50 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 422;
        tmp_args_element_name_31 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_50, &PyTuple_GET_ITEM(mod_consts[186], 0));

        if (tmp_args_element_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_49);

            exception_lineno = 422;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 422;
        tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_49, tmp_args_element_name_31);
        Py_DECREF(tmp_called_name_49);
        Py_DECREF(tmp_args_element_name_31);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_name_51;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_name_32;
        PyObject *tmp_called_name_52;
        CHECK_OBJECT(par_self);
        tmp_expression_name_61 = par_self;
        tmp_expression_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_61, mod_consts[135]);
        if (tmp_expression_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_51 = LOOKUP_ATTRIBUTE(tmp_expression_name_60, mod_consts[166]);
        Py_DECREF(tmp_expression_name_60);
        if (tmp_called_name_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_52 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 423;
        tmp_args_element_name_32 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_52, &PyTuple_GET_ITEM(mod_consts[167], 0));

        if (tmp_args_element_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_51);

            exception_lineno = 423;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 423;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_51, tmp_args_element_name_32);
        Py_DECREF(tmp_called_name_51);
        Py_DECREF(tmp_args_element_name_32);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_name_53;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_name_33;
        PyObject *tmp_called_name_54;
        CHECK_OBJECT(par_self);
        tmp_expression_name_63 = par_self;
        tmp_expression_name_62 = LOOKUP_ATTRIBUTE(tmp_expression_name_63, mod_consts[137]);
        if (tmp_expression_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_53 = LOOKUP_ATTRIBUTE(tmp_expression_name_62, mod_consts[21]);
        Py_DECREF(tmp_expression_name_62);
        if (tmp_called_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_54 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 428;
        tmp_args_element_name_33 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_54, &PyTuple_GET_ITEM(mod_consts[187], 0));

        if (tmp_args_element_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_53);

            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 428;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_53, tmp_args_element_name_33);
        Py_DECREF(tmp_called_name_53);
        Py_DECREF(tmp_args_element_name_33);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_name_55;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_name_34;
        PyObject *tmp_called_name_56;
        CHECK_OBJECT(par_self);
        tmp_expression_name_65 = par_self;
        tmp_expression_name_64 = LOOKUP_ATTRIBUTE(tmp_expression_name_65, mod_consts[140]);
        if (tmp_expression_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_55 = LOOKUP_ATTRIBUTE(tmp_expression_name_64, mod_consts[21]);
        Py_DECREF(tmp_expression_name_64);
        if (tmp_called_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_56 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 429;
        tmp_args_element_name_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_56, &PyTuple_GET_ITEM(mod_consts[183], 0));

        if (tmp_args_element_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_55);

            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 429;
        tmp_call_result_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_55, tmp_args_element_name_34);
        Py_DECREF(tmp_called_name_55);
        Py_DECREF(tmp_args_element_name_34);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_name_57;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_expression_name_67;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_name_35;
        PyObject *tmp_called_name_58;
        PyObject *tmp_expression_name_68;
        PyObject *tmp_expression_name_69;
        PyObject *tmp_args_element_name_36;
        PyObject *tmp_expression_name_70;
        PyObject *tmp_args_element_name_37;
        PyObject *tmp_called_name_59;
        CHECK_OBJECT(par_self);
        tmp_expression_name_67 = par_self;
        tmp_expression_name_66 = LOOKUP_ATTRIBUTE(tmp_expression_name_67, mod_consts[39]);
        if (tmp_expression_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_57 = LOOKUP_ATTRIBUTE(tmp_expression_name_66, mod_consts[171]);
        Py_DECREF(tmp_expression_name_66);
        if (tmp_called_name_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_69 = par_self;
        tmp_expression_name_68 = LOOKUP_ATTRIBUTE(tmp_expression_name_69, mod_consts[39]);
        if (tmp_expression_name_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_58 = LOOKUP_ATTRIBUTE(tmp_expression_name_68, mod_consts[172]);
        Py_DECREF(tmp_expression_name_68);
        if (tmp_called_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_70 = par_self;
        tmp_args_element_name_36 = LOOKUP_ATTRIBUTE(tmp_expression_name_70, mod_consts[120]);
        if (tmp_args_element_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);
            Py_DECREF(tmp_called_name_58);

            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 430;
        tmp_args_element_name_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_58, tmp_args_element_name_36);
        Py_DECREF(tmp_called_name_58);
        Py_DECREF(tmp_args_element_name_36);
        if (tmp_args_element_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);

            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_59 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 430;
        tmp_args_element_name_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_59, &PyTuple_GET_ITEM(mod_consts[188], 0));

        if (tmp_args_element_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_57);
            Py_DECREF(tmp_args_element_name_35);

            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = {tmp_args_element_name_35, tmp_args_element_name_37};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_57, call_args);
        }

        Py_DECREF(tmp_called_name_57);
        Py_DECREF(tmp_args_element_name_35);
        Py_DECREF(tmp_args_element_name_37);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_name_60;
        PyObject *tmp_expression_name_71;
        PyObject *tmp_expression_name_72;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_name_38;
        PyObject *tmp_called_name_61;
        CHECK_OBJECT(par_self);
        tmp_expression_name_72 = par_self;
        tmp_expression_name_71 = LOOKUP_ATTRIBUTE(tmp_expression_name_72, mod_consts[150]);
        if (tmp_expression_name_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_60 = LOOKUP_ATTRIBUTE(tmp_expression_name_71, mod_consts[21]);
        Py_DECREF(tmp_expression_name_71);
        if (tmp_called_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__translate);
        tmp_called_name_61 = var__translate;
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 431;
        tmp_args_element_name_38 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_61, &PyTuple_GET_ITEM(mod_consts[189], 0));

        if (tmp_args_element_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_60);

            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_d6d70972538d040ed3d309562ca492da->m_frame.f_lineno = 431;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_60, tmp_args_element_name_38);
        Py_DECREF(tmp_called_name_60);
        Py_DECREF(tmp_args_element_name_38);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d6d70972538d040ed3d309562ca492da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d6d70972538d040ed3d309562ca492da);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6d70972538d040ed3d309562ca492da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6d70972538d040ed3d309562ca492da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6d70972538d040ed3d309562ca492da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6d70972538d040ed3d309562ca492da,
        type_description_1,
        par_self,
        par_MainWindow,
        var__translate,
        var_item
    );


    // Release cached frame.
    if (frame_d6d70972538d040ed3d309562ca492da == cache_frame_d6d70972538d040ed3d309562ca492da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_d6d70972538d040ed3d309562ca492da);
    }
    cache_frame_d6d70972538d040ed3d309562ca492da = NULL;

    assertFrameObject(frame_d6d70972538d040ed3d309562ca492da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__translate);
    Py_DECREF(var__translate);
    var__translate = NULL;

    CHECK_OBJECT(var_item);
    Py_DECREF(var_item);
    var_item = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var__translate);
    var__translate = NULL;

    Py_XDECREF(var_item);
    var_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_MainWindow);
    Py_DECREF(par_MainWindow);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_MainWindow);
    Py_DECREF(par_MainWindow);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_src$ui$ui$$$function_1_setupUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$ui$ui$$$function_1_setupUi,
        mod_consts[209],
#if PYTHON_VERSION >= 300
        mod_consts[210],
#endif
        codeobj_49a1d1d0fdc1dde9b897536938e86fa2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_src$ui$ui,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_src$ui$ui$$$function_2_retranslateUi() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_src$ui$ui$$$function_2_retranslateUi,
        mod_consts[157],
#if PYTHON_VERSION >= 300
        mod_consts[211],
#endif
        codeobj_d6d70972538d040ed3d309562ca492da,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_src$ui$ui,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_src$ui$ui[] = {
    impl_src$ui$ui$$$function_1_setupUi,
    impl_src$ui$ui$$$function_2_retranslateUi,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_src$ui$ui;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_src$ui$ui) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_src$ui$ui[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_src$ui$ui,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "src.ui.ui";

// Internal entry point for module code.
PyObject *modulecode_src$ui$ui(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_src$ui$ui = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_src$ui$ui;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("src.ui.ui: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("src.ui.ui: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("src.ui.ui: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initsrc$ui$ui\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_src$ui$ui = MODULE_DICT(module_src$ui$ui);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_src$ui$ui,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_src$ui$ui,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_src$ui$ui,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_src$ui$ui,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_src$ui$ui,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_src$ui$ui);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_src$ui$ui, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_src$ui$ui, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_src$ui$ui, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_src$ui$ui);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_src$ui$ui, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1a94deaa1852a198195d4491d0abac1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_src$ui$ui$$$class_1_Ui_MainWindow_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1cbe8b9341d14d1d4d11a149583c6152_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_1a94deaa1852a198195d4491d0abac1c = MAKE_MODULE_FRAME(codeobj_1a94deaa1852a198195d4491d0abac1c, module_src$ui$ui);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_1a94deaa1852a198195d4491d0abac1c);
    assert(Py_REFCNT(frame_1a94deaa1852a198195d4491d0abac1c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[192]);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[193], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[192]);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[194], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[196];
        tmp_globals_name_1 = (PyObject *)moduledict_src$ui$ui;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[197];
        tmp_level_name_1 = mod_consts[101];
        frame_1a94deaa1852a198195d4491d0abac1c->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_src$ui$ui,
                mod_consts[5],
                mod_consts[101]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[5]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_src$ui$ui,
                mod_consts[23],
                mod_consts[101]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[23]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_src$ui$ui,
                mod_consts[12],
                mod_consts[101]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[12]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[198];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_8 = impl___main__$$$function_2__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[199];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[199];
        tmp_metaclass_name_1 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[101];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_10 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = mod_consts[199];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[199];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_expression_name_2, mod_consts[200]);
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[200]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[201];
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_1a94deaa1852a198195d4491d0abac1c->m_frame.f_lineno = 12;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_res = PyObject_HasAttr(tmp_expression_name_4, mod_consts[202]);
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_type_arg_2;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[203];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[204];
        tmp_getattr_default_1 = mod_consts[205];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_type_arg_2 = tmp_class_creation_1__prepared;
        tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_expression_name_5 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[204]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_1);

            exception_lineno = 12;

            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_12;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_13;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_src$ui$ui$$$class_1_Ui_MainWindow_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[206];
        tmp_res = PyObject_SetItem(locals_src$ui$ui$$$class_1_Ui_MainWindow_12, mod_consts[207], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[201];
        tmp_res = PyObject_SetItem(locals_src$ui$ui$$$class_1_Ui_MainWindow_12, mod_consts[208], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2)) {
            Py_XDECREF(cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2 = MAKE_FUNCTION_FRAME(codeobj_1cbe8b9341d14d1d4d11a149583c6152, module_src$ui$ui, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2->m_type_description == NULL);
        frame_1cbe8b9341d14d1d4d11a149583c6152_2 = cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_1cbe8b9341d14d1d4d11a149583c6152_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_1cbe8b9341d14d1d4d11a149583c6152_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_src$ui$ui$$$function_1_setupUi();

        tmp_res = PyObject_SetItem(locals_src$ui$ui$$$class_1_Ui_MainWindow_12, mod_consts[209], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_src$ui$ui$$$function_2_retranslateUi();

        tmp_res = PyObject_SetItem(locals_src$ui$ui$$$class_1_Ui_MainWindow_12, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1cbe8b9341d14d1d4d11a149583c6152_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_1cbe8b9341d14d1d4d11a149583c6152_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1cbe8b9341d14d1d4d11a149583c6152_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1cbe8b9341d14d1d4d11a149583c6152_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1cbe8b9341d14d1d4d11a149583c6152_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1cbe8b9341d14d1d4d11a149583c6152_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_1cbe8b9341d14d1d4d11a149583c6152_2 == cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(frame_1cbe8b9341d14d1d4d11a149583c6152_2);
        }
        cache_frame_1cbe8b9341d14d1d4d11a149583c6152_2 = NULL;

        assertFrameObject(frame_1cbe8b9341d14d1d4d11a149583c6152_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[198];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[198];
        tmp_res = PyObject_SetItem(locals_src$ui$ui$$$class_1_Ui_MainWindow_12, mod_consts[212], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[201];
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_src$ui$ui$$$class_1_Ui_MainWindow_12;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_1a94deaa1852a198195d4491d0abac1c->m_frame.f_lineno = 12;
            tmp_assign_source_14 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_14;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_13 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_src$ui$ui$$$class_1_Ui_MainWindow_12);
        locals_src$ui$ui$$$class_1_Ui_MainWindow_12 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_src$ui$ui$$$class_1_Ui_MainWindow_12);
        locals_src$ui$ui$$$class_1_Ui_MainWindow_12 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_13);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[213];
        tmp_globals_name_2 = (PyObject *)moduledict_src$ui$ui;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[101];
        frame_1a94deaa1852a198195d4491d0abac1c->m_frame.f_lineno = 433;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_src$ui$ui, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_15);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a94deaa1852a198195d4491d0abac1c);
#endif
    popFrameStack();

    assertFrameObject(frame_1a94deaa1852a198195d4491d0abac1c);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a94deaa1852a198195d4491d0abac1c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a94deaa1852a198195d4491d0abac1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a94deaa1852a198195d4491d0abac1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a94deaa1852a198195d4491d0abac1c, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return module_src$ui$ui;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
