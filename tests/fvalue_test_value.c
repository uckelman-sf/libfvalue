/*
 * Library value type test program
 *
 * Copyright (C) 2010-2018, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "fvalue_test_libcerror.h"
#include "fvalue_test_libfvalue.h"
#include "fvalue_test_macros.h"
#include "fvalue_test_memory.h"
#include "fvalue_test_unused.h"

#include "../libfvalue/libfvalue_value.h"

/* Tests the libfvalue_value_free function
 * Returns 1 if successful or 0 if not
 */
int fvalue_test_value_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libfvalue_value_free(
	          NULL,
	          &error );

	FVALUE_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

	FVALUE_TEST_ASSERT_IS_NOT_NULL(
	 "error",
	 error );

	libcerror_error_free(
	 &error );

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	return( 0 );
}

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc FVALUE_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] FVALUE_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc FVALUE_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] FVALUE_TEST_ATTRIBUTE_UNUSED )
#endif
{
	FVALUE_TEST_UNREFERENCED_PARAMETER( argc )
	FVALUE_TEST_UNREFERENCED_PARAMETER( argv )

	/* TODO: add tests for libfvalue_value_initialize */

	FVALUE_TEST_RUN(
	 "libfvalue_value_free",
	 fvalue_test_value_free );

	/* TODO: add tests for libfvalue_value_clone */

	/* TODO: add tests for libfvalue_value_clear */

	/* TODO: add tests for libfvalue_value_get_type */

	/* TODO: add tests for libfvalue_value_get_identifier */

	/* TODO: add tests for libfvalue_value_set_identifier */

	/* TODO: add tests for libfvalue_value_get_data_flags */

	/* TODO: add tests for libfvalue_value_set_data_flags */

	/* TODO: add tests for libfvalue_value_has_data */

	/* TODO: add tests for libfvalue_value_initialize_data */

	/* TODO: add tests for libfvalue_value_get_data_size */

	/* TODO: add tests for libfvalue_value_get_data */

	/* TODO: add tests for libfvalue_value_set_data */

	/* TODO: add tests for libfvalue_value_copy_data */

	/* TODO: add tests for libfvalue_value_get_format_flags */

	/* TODO: add tests for libfvalue_value_set_format_flags */

#if defined( __GNUC__ ) && !defined( LIBFVALUE_DLL_IMPORT )

	/* TODO: add tests for libfvalue_value_get_value_instance_by_index */

#endif /* defined( __GNUC__ ) && !defined( LIBFVALUE_DLL_IMPORT ) */

	/* TODO: add tests for libfvalue_value_get_number_of_value_entries */

	/* TODO: add tests for libfvalue_value_get_entry */

	/* TODO: add tests for libfvalue_value_set_entry */

	/* TODO: add tests for libfvalue_value_append_entry */

	/* TODO: add tests for libfvalue_value_get_entry_data */

	/* TODO: add tests for libfvalue_value_set_entry_data */

	/* TODO: add tests for libfvalue_value_append_entry_data */

	/* TODO: add tests for libfvalue_value_copy_entry_data */

	/* TODO: add tests for libfvalue_value_copy_from_boolean */

	/* TODO: add tests for libfvalue_value_copy_to_boolean */

	/* TODO: add tests for libfvalue_value_copy_from_8bit */

	/* TODO: add tests for libfvalue_value_copy_to_8bit */

	/* TODO: add tests for libfvalue_value_copy_from_16bit */

	/* TODO: add tests for libfvalue_value_copy_to_16bit */

	/* TODO: add tests for libfvalue_value_copy_from_32bit */

	/* TODO: add tests for libfvalue_value_copy_to_32bit */

	/* TODO: add tests for libfvalue_value_copy_from_64bit */

	/* TODO: add tests for libfvalue_value_copy_to_64bit */

	/* TODO: add tests for libfvalue_value_copy_from_float */

	/* TODO: add tests for libfvalue_value_copy_to_float */

	/* TODO: add tests for libfvalue_value_copy_from_double */

	/* TODO: add tests for libfvalue_value_copy_to_double */

	/* TODO: add tests for libfvalue_value_copy_from_utf8_string */

	/* TODO: add tests for libfvalue_value_get_utf8_string_size */

	/* TODO: add tests for libfvalue_value_copy_to_utf8_string */

	/* TODO: add tests for libfvalue_value_copy_to_utf8_string_with_index */

	/* TODO: add tests for libfvalue_value_copy_from_utf16_string */

	/* TODO: add tests for libfvalue_value_get_utf16_string_size */

	/* TODO: add tests for libfvalue_value_copy_to_utf16_string */

	/* TODO: add tests for libfvalue_value_copy_to_utf16_string_with_index */

	/* TODO: add tests for libfvalue_value_copy_from_utf32_string */

	/* TODO: add tests for libfvalue_value_get_utf32_string_size */

	/* TODO: add tests for libfvalue_value_copy_to_utf32_string */

	/* TODO: add tests for libfvalue_value_copy_to_utf32_string_with_index */

	/* TODO: add tests for libfvalue_value_read_from_file_stream */

	/* TODO: add tests for libfvalue_value_write_to_file_stream */

#if defined( __GNUC__ ) && !defined( LIBFVALUE_DLL_IMPORT )

	/* TODO: add tests for libfvalue_value_print */

#endif /* defined( __GNUC__ ) && !defined( LIBFVALUE_DLL_IMPORT ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

