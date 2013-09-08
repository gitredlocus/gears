<?php

/**
 * This is the model class for table "user".
 *
 * The followings are the available columns in table 'user':
 * @property integer $user_id
 * @property string $user_name
 * @property string $email_id
 * @property string $date_added
 * @property string $password
 * @property integer $group_id
 * @property integer $status
 */
class User extends CActiveRecord
{
	/**
	 * Returns the static model of the specified AR class.
	 * @param string $className active record class name.
	 * @return User the static model class
	 */
	public static function model($className=__CLASS__)
	{
		return parent::model($className);
	}

	/**
	 * @return string the associated database table name
	 */
	public function tableName()
	{
		return 'user';
	}

	/**
	 * @return array validation rules for model attributes.
	 */
	public function rules()
	{
		// NOTE: you should only define rules for those attributes that
		// will receive user inputs.
		return array(
			array('user_name, email_id, date_added, password, group_id, status', 'required'),
			array('group_id, status', 'numerical', 'integerOnly'=>true),
			array('user_name, email_id', 'length', 'max'=>32),
			array('date_added, password', 'length', 'max'=>40),
			// The following rule is used by search().
			// Please remove those attributes that should not be searched.
			array('user_id, user_name, email_id, date_added, password, group_id, status', 'safe', 'on'=>'search'),
		);
	}

	/**
	 * @return array relational rules.
	 */
	public function relations()
	{
		// NOTE: you may need to adjust the relation name and the related
		// class name for the relations automatically generated below.
		return array(
		);
	}

	/**
	 * @return array customized attribute labels (name=>label)
	 */
	public function attributeLabels()
	{
		return array(
			'user_id' => 'User',
			'user_name' => 'User Name',
			'email_id' => 'Email',
			'date_added' => 'Date Added',
			'password' => 'Password',
			'group_id' => 'Group',
			'status' => 'Status',
		);
	}

	/**
	 * Retrieves a list of models based on the current search/filter conditions.
	 * @return CActiveDataProvider the data provider that can return the models based on the search/filter conditions.
	 */
	public function search()
	{
		// Warning: Please modify the following code to remove attributes that
		// should not be searched.

		$criteria=new CDbCriteria;

		$criteria->compare('user_id',$this->user_id);
		$criteria->compare('user_name',$this->user_name,true);
		$criteria->compare('email_id',$this->email_id,true);
		$criteria->compare('date_added',$this->date_added,true);
		$criteria->compare('password',$this->password,true);
		$criteria->compare('group_id',$this->group_id);
		$criteria->compare('status',$this->status);

		return new CActiveDataProvider($this, array(
			'criteria'=>$criteria,
		));
	}
}