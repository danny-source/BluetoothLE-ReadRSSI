//
//  ViewController.h
//  BluetoothLE-ReadRSSI
//
//  Created by danny on 2015/11/18.
//  Copyright (c) 2015年 danny. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface ViewController : UIViewController <CBCentralManagerDelegate, CBPeripheralDelegate> {
    
}


@property (nonatomic,strong) CBCentralManager *CM;

@property (nonatomic,weak) IBOutlet UITextField *textHeartRate;
@property (nonatomic,weak) IBOutlet UITextField *textHeartRateLocation;

- (IBAction)buttonScanAndConnect:(id)sender;
- (IBAction)buttonStop:(id)sender;



@end
