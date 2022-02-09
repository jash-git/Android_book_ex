echo 'rw:读写自旋锁'
echo 'spin:普通自旋锁'
read -p '使用哪个自旋锁类型装载rw_lock驱动(rw)' lock_type
if [ "$lock_type" == "" ]; then
    lock_type="rw"
fi
source /root/drivers/common.sh
select_target
if [ $selected_target == 1 ]; then
    source build_ubuntu.sh
elif [ $selected_target == 2 ]; then
    source build_s3c6410.sh
elif [ $selected_target == 3 ]; then
    source build_emulator.sh
fi
