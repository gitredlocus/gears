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
<div class="navbar navbar-top navbar-inverse">
  <div class="navbar-inner">
    <div class="container-fluid">

      <a class="brand" href="#">Gear App</a>

      <!-- the new toggle buttons -->

      <ul class="nav pull-right">

        <li class="toggle-primary-sidebar hidden-desktop" data-toggle="collapse" data-target=".nav-collapse-primary"><button type="button" class="btn btn-navbar"><i class="icon-th-list"></i></button></li>

        <li class="hidden-desktop" data-toggle="collapse" data-target=".nav-collapse-top"><button type="button" class="btn btn-navbar"><i class="icon-align-justify"></i></button></li>

      </ul>

      
          

          <div class="nav-collapse nav-collapse-top collapse">

            <ul class="nav full pull-right">
              <li class="dropdown user-avatar">

                <!-- the dropdown has a custom user-avatar class, this is the small avatar with the badge -->

                <a href="#" class="dropdown-toggle" data-toggle="dropdown">
                  <span>
                    <img class="menu-avatar" src="../../images/avatars/avatar1.jpg" /> <span>John Smith <i class="icon-caret-down"></i></span>
                    <span class="badge badge-dark-red">5</span>
                  </span>
                </a>

                <ul class="dropdown-menu">

                  <!-- the first element is the one with the big avatar, add a with-image class to it -->

                  <li class="with-image">
                    <div class="avatar">
                      <img src="../../images/avatars/avatar1.jpg" />
                    </div>
                    <span>John Smith</span>
                  </li>

                  <li class="divider"></li>

                  <li><a href="#"><i class="icon-user"></i> <span>Profile</span></a></li>
                  <li><a href="#"><i class="icon-cog"></i> <span>Settings</span></a></li>
                  <li><a href="#"><i class="icon-envelope"></i> <span>Messages</span> <span class="label label-dark-red pull-right">5</span></a></li>
                  <li><a href="#"><i class="icon-off"></i> <span>Logout</span></a></li>
                </ul>
              </li>
            </ul>

            <form class="navbar-search pull-right">
              <input type="text" class="search-query animated" placeholder="Search">
              <i class="icon-search"></i>
            </form>

            <ul class="nav pull-right">
              <li class="active"><a href="#" title="Go home"><i class="icon-home"></i> Home</a></li>
              <li><a href="#" title="Manage users"><i class="icon-user"></i> Users</a></li>
              <li class="dropdown">
                <a href="#" class="dropdown-toggle" data-toggle="dropdown">Dropdown <b class="caret"></b></a>
                <ul class="dropdown-menu">
                  <li><a href="#">Action</a></li>
                  <li><a href="#">Another action</a></li>
                  <li><a href="#">Some link</a></li>
                  <li><a href="#">One more separated link</a></li>
                </ul>
              </li>


            </ul>

          </div>
      

    </div>
  </div>
</div><div class="sidebar-background">
  <div class="primary-sidebar-background"></div>
</div>

<div class="primary-sidebar">

  <!-- Main nav -->
  <ul class="nav nav-collapse collapse nav-collapse-primary">

    

        

            <li class="">
              <span class="glow"></span>
              <a href="../dashboard/dashboard.html">
                  <i class="icon-dashboard icon-2x"></i>
                  <span>Dashboard</span>
              </a>
            </li>

        

    

        

            <!-- li class="dark-nav ">

              <span class="glow"></span>

              

              <a class="accordion-toggle collapsed " data-toggle="collapse" href="#vhn9jKTaSd">
                  <i class="icon-beaker icon-2x"></i>
                    <span>
                      UI Lab
                      <i class="icon-caret-down"></i>
                    </span>

              </a>

              <ul id="vhn9jKTaSd" class="collapse ">
                
                    <li class="">
                      <a href="../ui_lab/buttons.html">
                          <i class="icon-hand-up"></i> Buttons
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../ui_lab/general.html">
                          <i class="icon-beaker"></i> General elements
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../ui_lab/icons.html">
                          <i class="icon-info-sign"></i> Icons
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../ui_lab/grid.html">
                          <i class="icon-th-large"></i> Grid
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../ui_lab/tables.html">
                          <i class="icon-table"></i> Tables
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../ui_lab/widgets.html">
                          <i class="icon-plus-sign-alt"></i> Widgets
                      </a>
                    </li>
                
              </ul>

            </li-->

        

    

        

            <!-- li class="">
              <span class="glow"></span>
              <a href="../forms/forms.html">
                  <i class="icon-edit icon-2x"></i>
                  <span>Forms</span>
              </a>
            </li>

        

    

        

            <li class="active">
              <span class="glow"></span>
              <a href="charts.html">
                  <i class="icon-bar-chart icon-2x"></i>
                  <span>Charts</span>
              </a>
            </li>

        

    

        

            <li class="dark-nav ">

              <span class="glow"></span>

              

              <a class="accordion-toggle collapsed " data-toggle="collapse" href="#DKY5qHVTyb">
                  <i class="icon-link icon-2x"></i>
                    <span>
                      Others
                      <i class="icon-caret-down"></i>
                    </span>

              </a>

              <ul id="DKY5qHVTyb" class="collapse ">
                
                    <li class="">
                      <a href="../other/wizard.html">
                          <i class="icon-magic"></i> Wizard
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../other/login.html">
                          <i class="icon-user"></i> Login Page
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../other/sign_up.html">
                          <i class="icon-user"></i> Sign Up Page
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../other/full_calendar.html">
                          <i class="icon-calendar"></i> Full Calendar
                      </a>
                    </li>
                
                    <li class="">
                      <a href="../other/error404.html">
                          <i class="icon-ban-circle"></i> Error 404 page
                      </a>
                    </li>
                
              </ul>

            </li-->

        

    

  </ul>

  
    <hr class="divider" style="margin-top: 60px">

    <div class="sparkline-box side">

      <div class="sparkline-row">
        <h4 class="gray"><span>Orders</span> 847</h4>
        <div class="sparkline big" data-color="gray"><!--7,22,27,6,9,16,19,25,23,28,18,28--></div>
      </div>

      <hr class="divider">
      <div class="sparkline-row">
        <h4 class="dark-green"><span>Income</span> $43.330</h4>
        <div class="sparkline big" data-color="darkGreen"><!--24,11,12,15,10,7,23,27,20,12,25,9--></div>
      </div>

      <hr class="divider">
      <div class="sparkline-row">
        <h4 class="blue"><span>Reviews</span> 223</h4>
        <div class="sparkline big" data-color="blue"><!--23,20,15,4,6,7,17,17,10,20,6,8--></div>
      </div>

      <hr class="divider">
    </div>
  </div>







<div class="main-content">
  <div class="container-fluid">
    <div class="row-fluid">

      <div class="area-top clearfix">
        <div class="pull-left header">
          <h3 class="title">
            <i class="icon-bar-chart"></i>
            Project
          </h3>
          <h5>
            A subtitle can be added here
          </h5>
        </div>

        <ul class="inline pull-right sparkline-box">

          <li class="sparkline-row">
            <h4 class="blue"><span>Orders</span> 847</h4>
            <div class="sparkline big" data-color="blue"><!--12,16,27,14,19,6,15,8,14,27,10,8--></div>
          </li>

          <li class="sparkline-row">
            <h4 class="green"><span>Reviews</span> 223</h4>
            <div class="sparkline big" data-color="green"><!--9,18,29,5,17,12,15,20,15,28,23,5--></div>
          </li>

          <li class="sparkline-row">
            <h4 class="red"><span>New visits</span> 7930</h4>
            <div class="sparkline big"><!--7,22,26,21,5,9,6,8,27,23,28,5--></div>
          </li>

        </ul>
      </div>
    </div>
 </div>

  <div class="container-fluid padded">
    <div class="row-fluid">

      <!-- Breadcrumb line -->

      <div id="breadcrumbs">
        <div class="breadcrumb-button blue">
          <span class="breadcrumb-label"><i class="icon-home"></i> Home</span>
          <span class="breadcrumb-arrow"><span></span></span>
        </div>

        

        <div class="breadcrumb-button">
          <span class="breadcrumb-label">
            <i class="icon-bar-chart"></i> Project
          </span>
          <span class="breadcrumb-arrow"><span></span></span>
        </div>
      </div>
    </div>
  </div>


  <div class="container-fluid padded">
    <div class="box">
      <div class="box-header">
        <span class="title">Toolbars</span>
        <ul class="box-toolbar">
          <li>
            <form class="fill-up" style="width: 100px">
              <label class="input-with-submit">
                <input type="text" placeholder="Search..."/>
                <button type="submit" class="submit-icon">
                  <i class="icon-search"></i>
                </button>
              </label>
            </form>
          </li>
        </ul>
      </div>
      <div class="box-content padded">
        <div class="btn-toolbar" style="margin: 0;">
          <div class="btn-group">
            <button class="btn btn-default"><i class="icon-file"></i></button>
            <button class="btn btn-default"><i class="icon-folder-open-alt"></i></button>
            <button class="btn btn-default"><i class="icon-save"></i></button>
          </div>
          <div class="btn-group">
            <button class="btn btn-default"><i class="icon-cut"></i></button>
            <button class="btn btn-default"><i class="icon-copy"></i></button>
            <button class="btn btn-default"><i class="icon-paste"></i></button>
          </div>
          <div class="btn-group">
            <button class="btn btn-default"><i class="icon-download-alt"></i></button>
            <button class="btn btn-default"><i class="icon-search"></i></button>
            <button class="btn btn-default"><i class="icon-lock"></i></button>
            <button class="btn btn-default"><i class="icon-comment-alt"></i></button>
          </div>
        </div>
      </div>
    </div>
</div> 
  <div class="container-fluid padded">
    <div class="box">
  <div class="box-header"><span class="title">xCharts</span></div>
  <div class="box-content padded">
    <div class="sine-chart" style="height: 250px" id="xchart-sine"></div>
  </div>
</div>

<div class="box">
  <div class="box-header"><span class="title">Gauges</span></div>
  <div class="box-content padded" style="text-align: center">
    <div class="justgage" data-title="Normal" id="7WshgLH2tv"></div>
    <div class="justgage" data-title="No labels" data-labels="false" id="hZjhQPhKNf"></div>
    <div class="justgage" data-title="Custom Width" data-gauge-width-scale="0.2" id="RpvjDvpvLu"></div>
    <div class="justgage" data-title="Custom Animation" data-animation-type="bounce" id="jNEjQrCacW"></div>
  </div>
</div>



  </div>
</div>

</body>
</html>
