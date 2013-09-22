<?php /* @var $this Controller */ ?>
<!DOCTYPE html>
<!--[if lt IE 7]>      <html class="no-js lt-ie9 lt-ie8 lt-ie7"> <![endif]-->
<!--[if IE 7]>         <html class="no-js lt-ie9 lt-ie8"> <![endif]-->
<!--[if IE 8]>         <html class="no-js lt-ie9"> <![endif]-->
<!--[if gt IE 8]><!--> <html class="no-js"> <!--<![endif]-->
	<head>
		<meta charset="utf-8">
	  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
	  <meta name="description" content="">
	  <meta name="viewport" content="width=device-width">
	  <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/bootstrap.css" />
	  <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/bootstrap-responsive.css" />
	  <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/bootstrap-overrides.css" />
	  <link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/font-awesome.css" />
		<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/style.css" />
		<title><?php echo CHtml::encode($this->pageTitle); ?></title>
	</head>
	<body>
		<div class="navbar navbar-inverse">
			<div class="navbar-inner">
					<?php $this->widget('zii.widgets.CMenu',array(
						'encodeLabel'=>false,
						'htmlOptions'=>array('class'=>'nav'),
						'items'=>array(
							array(
								'label'=>'Optimus <span>Prime</span>',
								'url'=>'/',
								'itemOptions'=>array('class'=>'logo'),
								'active'=>(Yii::app()->controller->id == 'event' && Yii::app()->controller->action->id == 'index'), 
							),
							array(
								'encodeLabel'=>'true', 
								'label'=>'Events <b class="caret"></b>',
								'url'=>'#', 
								'active'=>(strpos(Yii::app()->request->requestUri, '/event/')===0), 
								'itemOptions'=>array('class'=>'dropdown'),
								'linkOptions'=>array('class'=>'dropdown-toggle','data-toggle'=>'dropdown'), 
								'submenuOptions'=>array('class'=>'dropdown-menu'),
								'items'=>array(
									array('label'=>'Create an Event','url'=>'/event/create'),
									array('label'=>'Create an Event Type','url'=>'/event/type/create'),														
								)
							),
							array(
								'encodeLabel'=>'true', 
								'label'=>'Assets <b class="caret"></b>',
								'url'=>'#', 
								'active'=>(strpos(Yii::app()->request->requestUri, '/asset/')===0), 
								'itemOptions'=>array('class'=>'dropdown'),
								'linkOptions'=>array('class'=>'dropdown-toggle','data-toggle'=>'dropdown'), 
								'submenuOptions'=>array('class'=>'dropdown-menu'),
								'items'=>array(
									array('label'=>'Create an Asset Type','url'=>'/asset/type/create'),														
								)
							),
							array(
								'encodeLabel'=>'true', 
								'label'=>'Users <b class="caret"></b>',
								'url'=>'#', 
								'active'=>(strpos(Yii::app()->request->requestUri, '/user/')===0 && Yii::app()->controller->action->id != 'tasks'), 
								'itemOptions'=>array('class'=>'dropdown'),
								'linkOptions'=>array('class'=>'dropdown-toggle','data-toggle'=>'dropdown'), 
								'submenuOptions'=>array('class'=>'dropdown-menu'),
								'items'=>array(
									array('label'=>'View Groups','url'=>'/user/group/'),	
									array('label'=>'Create a Group','url'=>'/user/group/create'),										
								)
							),
						),
					)); ?>
					<?php $this->widget('zii.widgets.CMenu',array(
					  'encodeLabel'=>false,
					  'htmlOptions'=>array('class'=>'nav pull-right'),
					  'items'=>array(
					  	array(
					  		'encodeLabel'=>true,
					  		'label'=>'My Tasks',
					  		'url'=>'/user/' . Yii::app()->user->id . '/tasks', 
					  		'active'=>(Yii::app()->controller->id == 'user' && Yii::app()->controller->action->id == 'tasks'),
					  	),
					  	array(
					  		'encodeLabel'=>true,
					  		'label'=>'Logout',
					  		'url'=>'/user/logout',
					  		'itemOptions'=>array('class'=>'last'),
					  	),
					  ),
					)); ?>
					<ul class="nav pull-right">
						<li><input type="text" name="search" class="search"/></li>
					</ul>
			</div>
		</div><!-- navbar -->
			<?php echo $content; ?>
			<div class="clearfix"></div>
			<div id="footer">
			</div><!-- footer -->
			
		</div><!-- page -->

		<script src="//ajax.googleapis.com/ajax/libs/jquery/1.8.2/jquery.min.js"></script>
		<script>window.jQuery || document.write('<script src="js/vendor/jquery-1.8.2.min.js"><\/script>')</script>
		<script src="<?php echo Yii::app()->request->baseUrl; ?>/js/bootstrap.js"></script>
		<script src="<?php echo Yii::app()->request->baseUrl; ?>/js/plugins.js"></script>
		<script src="<?php echo Yii::app()->request->baseUrl; ?>/js/script.js"></script>
   </body>
</html>
