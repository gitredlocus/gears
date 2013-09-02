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

      <a class="brand" href="#">Core Admin</a>

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

        

    

        

            <li class="dark-nav ">

              <span class="glow"></span>

              

              <a class="accordion-toggle collapsed " data-toggle="collapse" href="#PwwtBykpyH">
                  <i class="icon-beaker icon-2x"></i>
                    <span>
                      UI Lab
                      <i class="icon-caret-down"></i>
                    </span>

              </a>

              <ul id="PwwtBykpyH" class="collapse ">
                
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

            </li>

        

    

        

            <li class="">
              <span class="glow"></span>
              <a href="../forms/forms.html">
                  <i class="icon-edit icon-2x"></i>
                  <span>Forms</span>
              </a>
            </li>

        

    

        

            <li class="">
              <span class="glow"></span>
              <a href="../charts/charts.html">
                  <i class="icon-bar-chart icon-2x"></i>
                  <span>Charts</span>
              </a>
            </li>

        

    

        

            <li class="dark-nav active">

              <span class="glow"></span>

              

              <a class="accordion-toggle  " data-toggle="collapse" href="#zZxyrGHyHX">
                  <i class="icon-link icon-2x"></i>
                    <span>
                      Others
                      <i class="icon-caret-down"></i>
                    </span>

              </a>

              <ul id="zZxyrGHyHX" class="collapse in">
                
                    <li class="active">
                      <a href="wizard.html">
                          <i class="icon-magic"></i> Wizard
                      </a>
                    </li>
                
                    <li class="">
                      <a href="login.html">
                          <i class="icon-user"></i> Login Page
                      </a>
                    </li>
                
                    <li class="">
                      <a href="sign_up.html">
                          <i class="icon-user"></i> Sign Up Page
                      </a>
                    </li>
                
                    <li class="">
                      <a href="full_calendar.html">
                          <i class="icon-calendar"></i> Full Calendar
                      </a>
                    </li>
                
                    <li class="">
                      <a href="error404.html">
                          <i class="icon-ban-circle"></i> Error 404 page
                      </a>
                    </li>
                
              </ul>

            </li>

        

    

  </ul>

  <div class="hidden-tablet hidden-phone">
    <div class="text-center" style="margin-top: 60px">
      <div class="easy-pie-chart-percent" style="display: inline-block" data-percent="89"><span>89%</span></div>
      <div style="padding-top: 20px"><b>CPU Usage</b></div>
    </div>

    <hr class="divider" style="margin-top: 60px">

    <div class="sparkline-box side">

      <div class="sparkline-row">
        <h4 class="gray"><span>Orders</span> 847</h4>
        <div class="sparkline big" data-color="gray"><!--3,4,13,6,29,18,28,22,11,9,13,10--></div>
      </div>

      <hr class="divider">
      <div class="sparkline-row">
        <h4 class="dark-green"><span>Income</span> $43.330</h4>
        <div class="sparkline big" data-color="darkGreen"><!--4,25,14,13,19,17,7,26,17,25,4,11--></div>
      </div>

      <hr class="divider">
      <div class="sparkline-row">
        <h4 class="blue"><span>Reviews</span> 223</h4>
        <div class="sparkline big" data-color="blue"><!--3,29,14,4,23,26,8,22,16,16,10,3--></div>
      </div>

      <hr class="divider">
    </div>
  </div>


</div>
<div class="main-content">
  <div class="container-fluid">
    <div class="row-fluid">

      <div class="area-top clearfix">
        <div class="pull-left header">
          <h3 class="title">
            <i class="icon-magic"></i>
            Wizard
          </h3>
          <h5>
            A subtitle can be added here
          </h5>
        </div>

        <ul class="inline pull-right sparkline-box">

          <li class="sparkline-row">
            <h4 class="blue"><span>Orders</span> 847</h4>
            <div class="sparkline big" data-color="blue"><!--23,26,13,29,4,7,16,8,19,20,20,19--></div>
          </li>

          <li class="sparkline-row">
            <h4 class="green"><span>Reviews</span> 223</h4>
            <div class="sparkline big" data-color="green"><!--28,21,10,3,10,27,5,3,15,29,25,16--></div>
          </li>

          <li class="sparkline-row">
            <h4 class="red"><span>New visits</span> 7930</h4>
            <div class="sparkline big"><!--19,10,7,5,3,20,16,9,4,18,22,21--></div>
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
                <i class="icon-link"></i> Others
              </span>
              <span class="breadcrumb-arrow"><span></span></span>
            </div>
        

        <div class="breadcrumb-button">
          <span class="breadcrumb-label">
            <i class="icon-magic"></i> Wizard
          </span>
          <span class="breadcrumb-arrow"><span></span></span>
        </div>
      </div>
    </div>
  </div>

  <div class="container-fluid padded">
    <button id="open-wizard" class="btn btn-blue">Open wizard</button>

<div class="wizard" id="wizard-demo">
<h1>Create Server</h1>

<div class="wizard-card" data-onValidated="setServerName" data-cardname="name">
  <h3>Name &amp; FQDN</h3>

  <div class="wizard-input-section">
    <p>
      To begin, please enter the IP of your server or the
      fully-qualified name.
    </p>

    <div class="control-group">
      <input id="new-server-fqdn" type="text"
             placeholder="FQDN or IP" data-validate="fqdn_or_ip" />
    </div>
  </div>

  <div class="wizard-input-section">
    <p>
      Optionally, give this server a label.  This will appear
      in the server nagivation.
    </p>

    <div class="control-group">
      <input id ="new-server-name" type="text"
             placeholder="Server name (optional)" data-validate="" />
    </div>
  </div>
</div>


<div class="wizard-card" data-cardname="group">
  <h3>Server Group</h3>

  <div class="wizard-input-section">
    <p>
      Where would you like server <strong class="create-server-name"></strong>
      to go?
    </p>

    <img class="wizard-group-list" src="../../images/groups.png" />
  </div>
</div>


<div class="wizard-card" data-cardname="services">
  <h3>Service Selection</h3>

  <div class="alert hide">
    It's recommended that you select at least one
    service, like ping.
  </div>

  <div class="wizard-input-section">
    <p>
      Please choose the services you'd like Panopta to
      monitor.  Any service you select will be given a default
      check frequency of 1 minute.
    </p>

    <select data-placeholder="Service List" style="width:350px;"
            class="chzn-select create-server-service-list" multiple>

      <option value=""></option>
      <optgroup label="Basic">
        <option selected value="icmp.ping">Ping</option>
        <option selected value="tcp.ssh">SSH</option>
        <option value="tcp.ftp">FTP</option>
      </optgroup>
      <optgroup label="Web">
        <option selected value="tcp.http">HTTP</option>
        <option value="tcp.https">HTTP (Secure)</option>
        <option value="tcp.dns">DNS</option>
      </optgroup>
      <optgroup label="Email">
        <option value="tcp.pop">POP</option>
        <option value="tcp.imap">IMAP</option>
        <option value="tcp.smtp">SMTP</option>
        <option value="tcp.pops">POP (Secure)</option>
        <option value="tcp.imaps">IMAP (Secure)</option>
        <option value="tcp.smtps">SMTP (Secure)</option>
        <option value="tcp.http.exchange">Microsoft Exchange</option>
      </optgroup>
      <optgroup label="Databases">
        <option value="tcp.mysql">MySQL</option>
        <option value="tcp.postgres">PostgreSQL</option>
        <option value="tcp.mssql">Microsoft SQL Server</option>
      </optgroup>
    </select>
  </div>
</div>


<div class="wizard-card" data-onload="" data-cardname="location">
  <h3>Monitoring Location</h3>

  <div class="wizard-input-section">
    <p>
      We determined <strong>Chicago</strong> to be
      the closest location to monitor
      <strong class="create-server-name"></strong>
      If you would like to change this, or you think this is
      incorrect, please select a different
      monitoring location.
    </p>

    <select data-placeholder="Monitor nodes" style="width:350px;" >
      <option value=""></option>
      <optgroup label="North America">
        <option>Atlanta</option>
        <option selected>Chicago</option>
        <option>Dallas</option>
        <option>Denver</option>
        <option>Fremont, CA</option>
        <option>Los Angeles</option>
        <option>Miami</option>
        <option>Newark, NJ</option>
        <option>Phoenix</option>
        <option>Seattle</option>
        <option>Washington, DC</option>
      </optgroup>

      <optgroup label="Europe">
        <option>Amsterdam, NL</option>
        <option>Berlin</option>
        <option>London</option>
        <option>Milan, Italy</option>
        <option>Nurnberg, Germany</option>
        <option>Paris</option>
        <option>Stockholm</option>
        <option>Vienna</option>
      </optgroup>

      <optgroup label="Asia/Africa">
        <option>Cairo</option>
        <option>Jakarta</option>
        <option>Johannesburg</option>
        <option>Hong Kong</option>
        <option>Singapore</option>
        <option>Sydney</option>
        <option>Tokyo</option>
      </optgroup>

    </select>

  </div>
</div>

<div class="wizard-card">
  <h3>Notification Schedule</h3>

  <div class="wizard-input-section">
    <p>
      Select the notification schedule to be used for outages.
    </p>

    <select class="wizard-ns-select" data-placeholder="Notification schedule" style="width:350px;">
      <option value=""></option>
      <option>ALIS Production</option>
      <option>ALIS Development &amp; Staging</option>
      <option>Panopta Development &amp; Staging</option>
      <option>Jira</option>
      <option>QSC Enterprise Production</option>
      <option>QSC Enterprise Development &amp; Staging</option>
      <option>Panopta Production</option>
      <option>Panopta Monitoring Nodes</option>
      <option>Common</option>
    </select>
  </div>

  <div class="wizard-ns-detail hide">
    Also using <strong>ALIS Production</strong>:

    <ul id="wizard-ns-detail-servers">
      <li><i class="icon-folder-close-alt"></i> Corporate sites</li>
      <li><i class="icon-folder-close-alt"></i> dt01.sat.medtelligent.com</li>
      <li><i class="icon-desktop"></i> alisonline.com</li>
      <li><i class="icon-desktop"></i> circa-db04.sat.medtelligent.com</li>
      <li><i class="icon-desktop"></i> circa-services01.sat.medtelligent.com</li>
      <li><i class="icon-desktop"></i> circa-web01.sat.medtelligent.com</li>
      <li><i class="icon-desktop"></i> heartbeat.alisonline.com</li>
      <li><i class="icon-desktop"></i> medtelligent.com</li>
      <li><i class="icon-desktop"></i> dt02.fre.medtelligent.com</li>
      <li><i class="icon-desktop"></i> dev03.lin.medtelligent.com</li>
    </ul>
  </div>
</div>


<div class="wizard-card">
  <h3>Agent Setup</h3>

  <div class="wizard-input-section">
    <p>The <a href="#">Panopta Agent</a> allows
      you to monitor local resources (disk usage, cpu usage, etc).
      If you would like to set that up now, please download
      and follow the <a href="#">install instructions.</a>
    </p>


    <div class="btn-group">
      <a class="btn btn-default dropdown-toggle" data-toggle="dropdown" href="#">
        Download
        <span class="caret"></span>
      </a>
      <ul class="dropdown-menu">
        <li><a href="#">.rpm</a></li>
        <li><a href="#">.deb</a></li>
        <li><a href="#">.tar.gz</a></li>
      </ul>
    </div>

  </div>


  <div class="wizard-input-section">
    <p>You will be given a server key after you install the Agent
      on <strong class="create-server-name"></strong>.
      If you know your server key now, please enter it
      below.</p>

    <div class="control-group">
      <input type="text" class="create-server-agent-key"
             placeholder="Server key (optional)" data-validate="" />
    </div>
  </div>
</div>



<div class="wizard-error">
  <div class="alert alert-error">
    <strong>There was a problem</strong> with your submission.
    Please correct the errors and re-submit.
  </div>
</div>

<div class="wizard-failure">
  <div class="alert alert-error">
    <strong>There was a problem</strong> submitting the form.
    Please try again in a minute.
  </div>
</div>

<div class="wizard-success">
  <div class="alert alert-success">
    <span class="create-server-name"></span>
    was created <strong>successfully.</strong>
  </div>

  <a class="btn btn-default create-another-server">Create another server</a>
  <span style="padding:0 10px">or</span>
  <a class="btn btn-default im-done">Done</a>
</div>

</div>
  </div>
</div>

</body>
</html>
