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
            <div class="sparkline big" data-color="blue"><!--12,26,15,24,28,18,11,7,25,28,22,14--></div>
          </li>
          <li class="sparkline-row">
            <h4 class="green"><span>Reviews</span> 223</h4>
            <div class="sparkline big" data-color="green"><!--10,27,18,14,23,24,6,25,22,5,18,29--></div>
          </li>
          <li class="sparkline-row">
            <h4 class="red"><span>New visits</span> 7930</h4>
            <div class="sparkline big"><!--7,25,25,28,21,25,18,28,13,10,20,6--></div>
          </li>
        </ul>
      </div>
    </div>
  </div>
  <div class="container-fluid padded">
    <div class="row-fluid">
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
      <h1>Create Project</h1>
      <div class="wizard-card" data-onValidated="setServerName" data-cardname="name">
        <h3>Project Info</h3>
        <div class="wizard-input-section">
          <p>Project Name</p>
          <div class="control-group">
            <input id="project[name]" type="text" data-validate="" />
          </div>
        </div>
        <div class="wizard-input-section">
          <p>Select an existing group or create a new group</p>
          <div class="control-group">
            <input id ="new-server-name" type="text" data-validate="" />
          </div>
        </div>
        <div class="wizard-input-section">
          <p>Project repository</p>
          <div class="control-group">
            <input id ="new-server-name" type="text" data-validate="" />
          </div>
        </div>
      </div>
      <div class="wizard-card" data-cardname="group">
        <h3>Languages Info</h3>
        <div class="wizard-input-section">
          <p>Project Language</p>
          <div class="control-group">
            <input id="radio1" type="radio" value="blah" />
            <label for="radio1">C/C++</label>
          </div>
        </div>
      </div>


      <div class="wizard-card" data-cardname="services">
        <h3>Tool configuration</h3>
        <div class="wizard-input-section">
          <p>Project Tools</p>
          <div class="control-group">
            <input id="checkbox1" type="checkbox" value="blah" />
            <label for="checkbox1">Static Analysis</label>
          </div>
        </div>
      </div>


      <div class="wizard-card" data-cardname="services">
        <h3>Run Frequency</h3>
        <div class="wizard-input-section">
          <p>Select how often tools will run</p>
          <div class="control-group">
            <input id="checkbox1" type="checkbox" value="blah" />
            <label for="checkbox1">After every 6 hours</label>
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