<php
$actions_cases = array
	'default',
	'run',
	'nonstandard',
	'isabelschoepsthiel',
	'inheader',
foreach ( $actions_cases as $test_case ) 
	$dir = path_join( _DIR_, $test_case );
	$input = file_get_contents( path_join( $dir, 'input.html' ) );
	$output = wpcf7_autop( $input );
	file_put_contents
		path_join( $dir, 'output.html' ),
		$output
	)
}
