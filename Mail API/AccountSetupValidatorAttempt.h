/*
 *     Generated by class-dump 3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

@interface AccountSetupValidatorAttempt
{
    unsigned int _portNumber;
    int _securityLayerType;
    BOOL _usesSSL;
}

@property int securityLayerType; // @synthesize securityLayerType=_securityLayerType;
@property BOOL usesSSL; // @synthesize usesSSL=_usesSSL;
@property unsigned int portNumber; // @synthesize portNumber=_portNumber;

+ (id)attemptsForAccount:(id)arg1 accountInfo:(id)arg2;
- (id)description;
- (int)securityLayerType;
- (void)setSecurityLayerType:(int)arg1;
- (BOOL)usesSSL;
- (void)setUsesSSL:(BOOL)arg1;
- (unsigned int)portNumber;
- (void)setPortNumber:(unsigned int)arg1;

@end

