<?php
// Get variables for company info


$street_address = variable_get('co_address', '');
$city = variable_get('co_city', '');
$state = variable_get('co_state', '');
$zip = variable_get('co_zip', '');
$phone = variable_get('co_phone', '');
$phone2 = variable_get('co_phone2', '');
$fax = variable_get('co_fax','');
$powered_by = variable_get('powered_by', '');
$options = array(
  'attributes' => array(
    'target' => '_blank',
  ),
);

if ($powered_by == '0') {
  $pb_url = 'https://www.tributemedia.com';
  $pb_text = 'powered by Tribute Media ' . l(t('a web marketing agency'), $pb_url, $options);
}
if ($powered_by == '1') {
  $pb_url = 'http://www.dealermarketing.net';
  $pb_text = 'powered by ' . l(t('Dealer Marketing'), $pb_url, $options);
}
?>

<div id="top" class="materialize d7">
  <div class="page">
    <div class="page-inner">
        
      <div class="top-wrapper w-navigation">
        <div class="top-wrapper wo-navigation">

          <?php if (!empty($page['help'])): ?>
            <div id="help-wrapper" class="help-wrapper">
              <div class="inner">
                <div id="help-container" class="container">
                  <div class="inner">
                    <?php print render($page['help']); ?>
                  </div>
                </div> <!-- #help-container -->
              </div> 
            </div> <!-- .help-wrapper -->
          <?php endif; ?>
                  
          <header id="header-wrapper" class="header-wrapper wrapper" role="banner">
            <div class="inner">
              <div id="header-container" class="container">
                <div class="inner row">
                  
                  <!-- branding -->
                  <div id="site-info" class="site-info col s11 m3">
                    <div class="inner">
                         <?php if ($logo): ?><div class="logo"><a class="logo" href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a></div> <!-- .logo --><?php endif; ?>
                    </div> <!-- .inner -->
                  </div> <!-- .site-info -->
                  
                  <!-- header block -->
                  <div id="header" class="header-region region col s12 m8 hide-on-med-and-down">
                    <div class="inner">
                      <?php print render($page['header']); ?>
                    </div>
                  </div> <!-- #header -->
                  
                </div> <!-- .header-inner -->
              </div> <!-- #header-container -->
            </div> <!-- .header-wrapper-inner -->
          </header> <!-- #header-wrapper -->
          
        </div> <!-- .top-wrapper .wo-navigation-->
        
        <?php if ($main_menu): ?>
          <nav id="main-navigation-wrapper" class="main-navigation-wrapper wrapper">
            <div class="shrinking-icon"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo-icon"><img alt="<?php print t('Home'); ?>" src="/<?php $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL)); echo $theme_path; ?>/logo-icon.png"></a></div>
            <div id="main-navigation" class="main-navigation container ">
              <div class="inner row">
               <?php print theme('links__system_main_menu', array(
                 'links' => $main_menu,
                 'attributes' => array(
                   'id' => 'main-menu-links',
                   'class' => array('links', 'clearfix'),
                 ),
                 'heading' => array(
                   'text' => t('Main menu'),
                   'level' => 'h2',
                   'class' => array('element-invisible'),
                 ),
               )); ?>
              </div> <!-- .inner -->
            </div> <!-- .main-navigation -->
          </nav> <!-- .main-navigation-wrapper -->
        <?php endif; ?> <!-- end main menu -->
        
        
        <?php if (!empty($page['mega_menu'])): ?>
          <nav id="mega-menu-wrapper" class="mega-menu-wrapper wrapper">
            <div class="shrinking-icon"><a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="logo-icon"><img alt="<?php print t('Home'); ?>" src="/<?php $theme_path = drupal_get_path('theme', variable_get('theme_default', NULL)); echo $theme_path; ?>/logo-icon.png"></a></div>
            <div class="inner">
            <div id="mega-menu-container" class="container">
              <div class="inner row">
                    <?php print render($page['mega_menu']); ?>
              </div>
            </div> <!-- #mega_menu-container -->
          </div>
        </nav>
        <?php endif; ?>
        
      </div> <!-- .top-wrapper .w-navigation-->



      <?php if (!empty($page['highlighted'])): ?>
        <section id="highlighted-wrapper" class="highlighted-wrapper wrapper">
          <div class="inner">
          <div id="highlighted-container" class="container">
            <div class="inner row">
                  <?php print $messages; ?>
                  <?php print render($page['highlighted']); ?>
            </div>
          </div> <!-- #highlighted-container -->
        </div>
      </section>
      <?php endif; ?>

      <div id="content-area-wrapper" class="content-area-wrapper">
        <div class="inner">
        
        <?php if ($page['preface']): ?>
          <section id="preface-wrapper" class="preface-wrapper wrapper">
            <div class="inner">
              <div id="preface-container" class=""> <!-- add container class here to make preface not full-width-->
                <div id="preface" class="region clearfix">
                  <div class="inner row">
                  <?php print render($page['preface']); ?>
                  </div><!-- .inner -->
                </div> <!-- #preface -->
              </div>  <!-- #preface-container -->
            </div>
          </section>
        <?php endif; ?>
        </div>
      </div><!-- #content-area-wrapper -->
      <a id="main-content"></a>
      <?php if ($page['postscript']): ?>
        <section id="postscript-wrapper" class="preface-wrapper wrapper">
          <div class="inner">
            <div id="postscript-container" class="container">
              <div id="postscript" class="region clearfix">
                <div class="inner row">
                <?php print render($page['postscript']); ?>
                </div><!-- .inner -->
              </div> <!-- #postscript -->
            </div>  <!-- #postscript-container -->
          </div>
        </section>
      <?php endif; ?>

<footer  class="footer wrapper clearfix">
	<div id="footer-wrapper">
		<!-- <div class="inner"> -->
		<?php if ($page['footer']): ?>
			<div class="footer-region container">		
            	<?php print render($page['footer']); ?>
			</div>
		<?php endif; ?>
	    <div itemscope itemtype="http://shcema.org/LocalBusiness" id="copyright-line" class="left-align center-on-mobile">
	    	<div class="connect">
				<div>&copy;<?php echo date("Y");?>&nbsp;</div>
				<div itemprop="name"><?php print $site_name; ?></div>
			</div>
			
			<div class="connect">
				<div itemprop="address" itemscope itemtype="http://schema.org/PostalAddress">
					<div itemprop="streetAddress"><?php print $street_address; ?></div>
					<div itemprop="addressLocality"><?php print $city; ?></div>
					<div itemprop="addressRegion"><?php print $state; ?></div>
					<div itemprop="postalCode"><?php print $zip; ?></div>
				</div><!-- end scope address -->
			</div>
			<div class="pipe">&nbsp;&nbsp;|&nbsp;&nbsp;</div>
			<div itemprop="telephone"><?php print $phone; ?></div>
            <?php if(!empty($phone2)) { ?>
            <div class="pipe">&nbsp;&nbsp;|&nbsp;&nbsp;</div>
			<div itemprop="telephone"><?php print $phone2; ?></div>
            <?php } ?>
            <?php if(!empty($fax)) { ?>
            <div class="pipe">&nbsp;&nbsp;|&nbsp;&nbsp;</div>
			<div itemprop="faxNumber"><?php print 'Fax: ' . $fax; ?></div>
            <?php } ?>
		</div><!-- #copyright-line -->
    <?php if ($powered_by != '2') { ?>
	    <div id="powered-by" class="right-align center-on-mobile">
        <div class="inner">
          <?php 
          print $pb_text;
        	if ($logged_in) {
            print ' | ' . l(t('logout'), '/user/logout');
        	} else {
        		print ' | ' . l(t('login'), '/user');
          }
          ?>
				</div> <!-- end inner -->
			</div> <!-- #powered-by -->
      <?php } ?>
		</div> <!-- #footer-wrapper -->
</footer>
    
    <?php if (!empty($page['mob'])): ?>
                <?php print render($page['mob']); ?>

    <?php endif; ?>
    
      
    </div> <!-- .page-inner -->
    
    <div id="back-to-top-wrapper">
      <a href="#top" id="back-to-top" class="back-to-top waves-effect waves-light">Top <i class="fa fa-arrow-circle-up"> </i></a>
    </div>  
  </div> <!-- .page -->
</div> <!-- .materialize -->



