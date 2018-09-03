#!/usr/bin/python

# Copyright (c) 2013-2014, Rethink Robotics
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. Neither the name of the Rethink Robotics nor the names of its
#    contributors may be used to endorse or promote products derived from
#    this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.

import rospy

from baxter_pykdl import baxter_kinematics
import baxter_interface


def main():
    rospy.init_node('baxter_kinematics')
    print '*** Baxter PyKDL Kinematics ***\n'
    kin = baxter_kinematics('left')


    # FK Position
    print '\n*** Baxter Position FK ***\n'
    kp = kin.forward_position_kinematics()
    print kp

    pos = [kp[0],kp[1],kp[2]]
    rot = [kp[3],kp[4],kp[5],kp[6]]

    limite = 0.0
    kp2 = kin.forward_position_kinematics()
    while kp2 != None:
        limite = limite + 0.05
        pos = [kp[0],kp[1],kp[2]+limite]
        kp2 = kin.inverse_kinematics(pos, rot)

	#pos2 = [kp[0]-limite,kp[1],kp[2]]
    #kp = kin.inverse_kinematics(pos, rot)

	#m = {'left_w0': l[4], 'left_w1': l[5], 'left_w2': l[6], 'left_e0': l[2], 'left_e1': l[3], 'left_s0': l[0], 'left_s1': l[1]}
    #n =  {'left_w0': l2[4], 'left_w1': l2[5], 'left_w2': l2[6], 'left_e0': l2[2], 'left_e1': l2[3], 'left_s0': l2[0], 'left_s1': l2[1]}
    a = kp[1]+limite-0.05
    print a
    print limite



if __name__ == "__main__":
    main()