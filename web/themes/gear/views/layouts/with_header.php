<?php

	$this->renderPartial('/layouts/header');

?>

<?php $this->beginContent(); ?>
	<?php echo $content; ?>
<?php $this->endContent(); ?>