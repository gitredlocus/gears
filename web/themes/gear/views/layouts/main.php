<!doctype html>
<html>
<head>

  <meta name="viewport" content="width=device-width, maximum-scale=1, initial-scale=1, user-scalable=0">
  <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,800">


  <meta charset="utf-8">

  <!-- Always force latest IE rendering engine or request Chrome Frame -->
  <meta content="IE=edge,chrome=1" http-equiv="X-UA-Compatible">

  <!-- Use title if it's in the page YAML frontmatter -->
  <title>Gear App Dashboard</title>

  <link href="<?php echo Yii::app()->theme->baseUrl; ?>/stylesheets/application.css" media="screen" rel="stylesheet" type="text/css" />

  <!--[if lt IE 9]-->
  <script src="<?php echo Yii::app()->theme->baseUrl; ?>/javascripts/vendor/html5shiv.js" type="text/javascript"></script>
  <script src="<?php echo Yii::app()->theme->baseUrl; ?>/javascripts/vendor/excanvas.js" type="text/javascript"></script>
  <!--[endif]-->

  <script src="<?php echo Yii::app()->theme->baseUrl; ?>/javascripts/application.js" type="text/javascript"></script>
</head>
<body>
	
	<?php echo $content; ?>
	<div class="clear"></div>

	<div id="footer"></div><!-- footer -->

</div><!-- page -->

</body>
</html>