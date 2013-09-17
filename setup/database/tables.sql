-- phpMyAdmin SQL Dump
-- version 3.5.1
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Sep 13, 2013 at 07:28 AM
-- Server version: 5.5.24-log
-- PHP Version: 5.3.13

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `sedash`
--

CREATE DATABASE `sedash`;

USE `sedash`;


-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `user_id` int(11) NOT NULL AUTO_INCREMENT,
  `user_name` varchar(32) NOT NULL,
  `email_id` varchar(32) NOT NULL,
  `date_added` varchar(40) NOT NULL,
  `password` varchar(40) NOT NULL,
  `group_id` int(11) NOT NULL,
  `status` int(1) NOT NULL,
  PRIMARY KEY (`user_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`user_id`, `user_name`, `email_id`, `date_added`, `password`, `group_id`, `status`) VALUES
(0, 'admin', 'info@redlocus.com', '', 'admin', 0, 1);


-- --------------------------------------------------------

--
-- Table structure for table `group_info`
--

CREATE TABLE IF NOT EXISTS `group_info` (
  `group_id` int(11) NOT NULL AUTO_INCREMENT,
  `group_name` varchar(40) NOT NULL,
  PRIMARY KEY (`group_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

--
-- Dumping data for table `group_info`
--

INSERT INTO `group_info` (`group_id`, `group_name`) VALUES
(0, 'default');

-- --------------------------------------------------------

--
-- Table structure for table `user_group_info`
--

CREATE TABLE IF NOT EXISTS `user_group_info` (
  `user_id` int(11) NOT NULL,
  `group_id` int(11) NOT NULL,
  PRIMARY KEY (`group_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user_group_info`
--

INSERT INTO `user_group_info` (`user_id`, `group_id`) VALUES
(0, 0);


-- --------------------------------------------------------

--
-- Table structure for table `langauge`
--

CREATE TABLE IF NOT EXISTS `langauge` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` varchar(11) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=3 ;

--
-- Dumping data for table `langauge`
--

INSERT INTO `langauge` (`id`, `name`) VALUES
(0, 'C / C++'),
(1, 'JAVA');

-- --------------------------------------------------------

--
-- Table structure for table `project`
--

CREATE TABLE IF NOT EXISTS `project` (
  `project_id` int(11) NOT NULL AUTO_INCREMENT,
  `project_name` varchar(40) NOT NULL,
  `project_config_id` int(11) NOT NULL,
  `language_id` int(11) NOT NULL,
  `run_frequency_id` int(11) NOT NULL,
  `project_repo` varchar(200) NOT NULL,
  PRIMARY KEY (`project_id`),
  UNIQUE KEY `project_config_id` (`project_config_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

--
-- Dumping data for table `project`
--

INSERT INTO `project` (`project_id`, `project_name`, `project_config_id`, `language_id`, `run_frequency_id`, `project_repo`) VALUES
(0, 'redis', 0, 0, 0, '');

-- --------------------------------------------------------

--
-- Table structure for table `project_config_info`
--

CREATE TABLE IF NOT EXISTS `project_config_info` (
  `project_config_id` int(11) NOT NULL AUTO_INCREMENT,
  `project_config_name` varchar(11) NOT NULL,
  PRIMARY KEY (`project_config_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

--
-- Dumping data for table `project_config_info`
--

INSERT INTO `project_config_info` (`project_config_id`, `project_config_name`) VALUES
(0, 'default');

-- --------------------------------------------------------

--
-- Table structure for table `project_tool_info`
--

CREATE TABLE IF NOT EXISTS `project_tool_info` (
  `project_config_id` int(11) NOT NULL,
  `tool_id` int(11) NOT NULL,
  PRIMARY KEY (`tool_id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `project_tool_info`
--

INSERT INTO `project_tool_info` (`project_config_id`, `tool_id`) VALUES
(0, 0),
(0, 1),
(0, 2),
(0, 3);

-- --------------------------------------------------------

--
-- Table structure for table `run_frequency`
--

CREATE TABLE IF NOT EXISTS `run_frequency` (
  `id` int(11) NOT NULL,
  `frequency` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `run_frequency`
--

INSERT INTO `run_frequency` (`id`, `frequency`) VALUES
(0, 'Never (Manual)'),
(1, 'After 6 Hours'),
(2, 'After 12 Hours');

-- --------------------------------------------------------

--
-- Table structure for table `project_run_info`
--

CREATE TABLE IF NOT EXISTS `project_run_info` (
  `project_id` int(11) NOT NULL,
  `run_id` int(11) NOT NULL AUTO_INCREMENT,
  `run_date` date NOT NULL,
  `run_start_time` time NOT NULL,
  `run_end_date` time NOT NULL,
  PRIMARY KEY (`run_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=2 ;

--
-- Dumping data for table `project_run_info`
--

INSERT INTO `project_run_info` (`project_id`, `run_id`, `run_date`, `run_start_time`, `run_end_date`) VALUES
(0, 1, '2013-09-12', '22:13:06', '22:13:06');

-- --------------------------------------------------------

--
-- Table structure for table `tool_info`
--
-- BM: This can be further normalized based on category
--

CREATE TABLE IF NOT EXISTS `tool_info` (
  `tool_id` int(11) NOT NULL AUTO_INCREMENT,
  `tool_category` varchar(40) NOT NULL,
  `tool_name` varchar(40) NOT NULL,
  PRIMARY KEY (`tool_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `tool_info`
--

INSERT INTO `tool_info` (`tool_id`, `tool_category`, `tool_name`) VALUES
(0, 'Comments Anaysis', 'ct'),
(1, 'Duplicate Code', 'cpd'),
(2, 'Code Coverage', 'lcov'),
(3, 'Code Complexity', 'mcc');

-- --------------------------------------------------------

--
-- Table structure for table `run_info`
--

CREATE TABLE IF NOT EXISTS `run_info` (
  `run_id` int(11) NOT NULL,
  `tool_id` int(11) NOT NULL,
  `job_id` int(11) NOT NULL,
  `tool_run_status` int(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `run_info`
--

INSERT INTO `run_info` (`run_id`, `tool_id`, `job_id`, `tool_run_status`) VALUES
(0, 0, 1, 1),
(0, 1, 2, 1),
(0, 2, 1, 1),
(0, 3, 3, 1);


/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
