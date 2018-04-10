//
//  PlayersViewController.h
//  Test_Storyboard
//
//  Created by 謝明衞 on 2018/4/3.
//  Copyright © 2018年 謝明衞. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Player.h"
#import "PlayerCell.h"

@interface PlayersViewController : UITableViewController

@property (nonatomic, strong) NSMutableArray<Player *> *players;

@end
