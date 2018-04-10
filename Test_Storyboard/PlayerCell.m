//
//  PlayerCell.m
//  Test_Storyboard
//
//  Created by 謝明衞 on 2018/4/9.
//  Copyright © 2018年 謝明衞. All rights reserved.
//

#import "PlayerCell.h"

@implementation PlayerCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

-(IBAction)testTouch:(id)sender{
    [self setBackgroundColor:[UIColor blueColor]];
    
    [((UIButton*)sender) setTitle:@"OK"
                         forState:UIControlStateNormal];
}

@end
