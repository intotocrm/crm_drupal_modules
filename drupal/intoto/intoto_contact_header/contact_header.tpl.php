<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

$btn_class = $can_edit ? "btn btn-xs btn-primary" : "btn btn-xs btn-primary disabled";
?>WWW
		<div class="panel panel-primary">
			<div class="panel-heading">
				<a href="<?php print "/crm-core/contact/$contact_id";?>">
					<!--<i class="fa fa-comments fa-5x"></i>-->
					<?php print $title; ?>
					<?php foreach ($photos as $photo){  ?>
						<div class="frame">							
							<div class="crop">
								<?php print render($photo); ?>
							</div>								
						</div>								
					<?php } ?>
					<small><?php print $contact_type_label ; ?></small>
				</a>
			</div>				

			<div class="panel-footer">
				<!--
				<span class="pull-left">View Details</span>
				<span class="pull-right"><i class="fa fa-arrow-circle-right"></i></span>
				-->
				<a href="<?php print link_check_access("/crm-core/contact/$contact_id/edit"); ;?>">
					<button type="button" class="<?php print $btn_class;?> ">Edit</button>
				</a>
				<a href="<?php print link_check_access("/crm-core/contact/$contact_id/activity/add/comment");?>">
					<button type="button" class="<?php print $btn_class;?>">Comment</button>
				</a>

				<a href="<?php print link_check_access("/crm-core/contact/$contact_id/activity/add/email");?>">
					<button type="button" class="<?php print $btn_class;?>">Email</button>
				</a>
				<a href="<?php print link_check_access("/crm-core/contact/$contact_id/activity/add/phone_call");?>">
					<button type="button" class="<?php print $btn_class;?>">Phone</button>
				</a>
				<div class="clearfix"></div>
			</div>
		</div>

