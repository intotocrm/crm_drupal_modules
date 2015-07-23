<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<div class="row top-buffer">
	<div class="col-lg-4 col-md-6">
		<div class="panel panel-primary">
			<div class="panel-heading">
							<!--<i class="fa fa-comments fa-5x"></i>-->
							<h2><?php print $title; ?> </h2>
							<small><?php print $contact_type_label ; ?></small>
							<?php foreach ($photos as $photo){  ?>
								<div class="frame">							
									<div class="crop">
										<?php print render($photo); ?>								
									</div>								
								</div>								
							<?php } ?>
							
							
							
			</div>				

			<div class="panel-footer">
				<!--
				<span class="pull-left">View Details</span>
				<span class="pull-right"><i class="fa fa-arrow-circle-right"></i></span>
				-->
				<a href="<?php print "/crm-core/contact/$contact_id/edit";?>">
					<button type="button" class="btn btn-xs btn-primary">Edit</button>
				</a>
				<a href="<?php print "/crm-core/contact/$contact_id/activity/add/comment";?>">
					<button type="button" class="btn btn-xs btn-primary">Comment</button>
				</a>

				<a href="<?php print "/crm-core/contact/$contact_id/activity/add/email";?>">
					<button type="button" class="btn btn-xs btn-primary">Email</button>
				</a>
				<a href="<?php print "/crm-core/contact/$contact_id/activity/add/phone_call";?>">
					<button type="button" class="btn btn-xs btn-primary">Phone</button>
				</a>
				<div class="clearfix"></div>
			</div>
		</div>
	</div>	

	
</div>
