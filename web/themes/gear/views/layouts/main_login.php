<!doctype html>
<html>
<head>

  <meta name="viewport" content="width=device-width, maximum-scale=1, initial-scale=1, user-scalable=0">
  <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,800">


  <meta charset="utf-8">

  <!-- Always force latest IE rendering engine or request Chrome Frame -->
  <meta content="IE=edge,chrome=1" http-equiv="X-UA-Compatible">

  <!-- Use title if it's in the page YAML frontmatter -->
  <title>Core Admin Theme</title>

  <link href="<?php echo Yii::app()->theme->baseUrl; ?>/stylesheets/application.css" media="screen" rel="stylesheet" type="text/css" />
  <script src="<?php echo Yii::app()->theme->baseUrl; ?>/javascripts/application.js" type="text/javascript"></script>
</head>

<body>

<div class="navbar navbar-top navbar-inverse">
  <div class="navbar-inner">
    <div class="container-fluid">

      <a class="brand" href="#">Gear App</a>

      <!-- the new toggle buttons -->

      <ul class="nav pull-right">

        <li class="toggle-primary-sidebar hidden-desktop" data-toggle="collapse" data-target=".nav-collapse-primary"><button type="button" class="btn btn-navbar"><i class="icon-th-list"></i></button></li>

        <li class="hidden-desktop" data-toggle="collapse" data-target=".nav-collapse-top"><button type="button" class="btn btn-navbar"><i class="icon-align-justify"></i></button></li>

      </ul>

      

    </div>
  </div>
</div>
<div class="container">
  
<div class="span4 offset4">


  <div class="padded">
    <div class="login box" style="margin-top: 80px;">

      <div class="box-header">
        <span class="title">Login</span>
      </div>

      <div class="box-content padded">
        <form class="separate-sections">
          <div class="input-prepend">
          <span class="add-on" href="#">
            <i class="icon-user"></i>
          </span>
            <input type="text" placeholder="username">
          </div>

          <div class="input-prepend">
          <span class="add-on" href="#">
            <i class="icon-key"></i>
          </span>
            <input type="password" placeholder="password">
          </div>

          <div>
            <a class="btn btn-blue btn-block" href=$this->redirect(array('/site/dashboard/dashboard.html'));>
                Login <i class="icon-signin"></i>
            </a>
          </div>

        </form>

        <div>
          <a href="sign_up.html">
              Don't have an account? <strong>Sign Up</strong>
          </a>
        </div>
      </div>

    </div>

    <div class="row-fluid">
      <div class="span6">
        <a href="#" class="btn btn-facebook btn-block"><i class="icon-facebook-sign"></i> Facebook</a>
      </div>
      <div class="span6">
        <a href="#" class="btn btn-twitter btn-block"><i class="icon-twitter"></i> Twitter</a>
      </div>
    </div>
  </div>
</div>
</div>

</body>
</html>
