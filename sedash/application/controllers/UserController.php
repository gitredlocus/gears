<?php

class UserController extends Controller
{	
	public function filters()
	{
		return array(
			'accessControl', // perform access control for CRUD operations
			'postOnly + delete', // we only allow deletion via POST request
		);
	}
	
	public function accessRules()
	{
		return array(
			array('allow',  // allow all users to perform 'index' and 'view' actions
				'actions'=>array('login'),
				'users'=>array('*'),
			),
			array('allow',  // allow all users to perform 'index' and 'view' actions
				'actions'=>array('logout'),
				'users'=>array('@'),
			),
			array('deny',
				'users'=>array('*'),
			),
		);
	}
	
	public function actionLogin()
	{
		if (isset($_POST['user']))
		{
			$identity = new UserIdentity($_POST['user']['email'], $_POST['user']['password']);
			if ($identity->authenticate())
			{
				Yii::app()->user->login($identity, 0);
				$this->redirect(Yii::app()->user->returnUrl);
			}
		}
		
		
		$this->renderPartial('/layouts/header');
		$this->renderPartial('login');
		$this->renderPartial('/layouts/footer');
	}
	
	public function actionLogout()
	{
		Yii::app()->user->logout();
		$this->redirect(Yii::app()->homeUrl);
	}
}	