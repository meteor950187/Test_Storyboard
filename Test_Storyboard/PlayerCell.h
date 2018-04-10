//
//  PlayerCell.h
//  Test_Storyboard
//
//  Created by 謝明衞 on 2018/4/9.
//  Copyright © 2018年 謝明衞. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView; 
@property (nonatomic, weak) IBOutlet UIButton *testButton;
-(IBAction)testTouch:(id)sender;


@end
