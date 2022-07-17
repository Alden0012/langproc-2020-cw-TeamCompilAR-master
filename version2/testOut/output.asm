        .global	foo
        .ent	foo
        .type	foo, @function
foo:
        addiu $sp, $sp, 1000
        sw $fp, 996($sp)
        move $fp, $sp
        nop
        move $sp,$fp
        lw $fp,996($sp)
        addiu $sp,$sp,1000
        j $31
        nop
