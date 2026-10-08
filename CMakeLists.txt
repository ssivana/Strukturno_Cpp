cmake_minimum_required(VERSION 4.1)
project(strukturno_juni)

set(CMAKE_CXX_STANDARD 20)

add_executable(strukturno_juni
        auditoriski/aud3/task3.cpp
        auditoriski/aud3/task4.cpp
        auditoriski/aud3/task5.cpp
        auditoriski/aud3/task6.cpp
        auditoriski/aud3/task7.cpp
        auditoriski/aud3/task8.cpp
        auditoriski/aud3/task9.cpp
        auditoriski/aud4/task1.cpp
        auditoriski/aud4/task2.cpp
        auditoriski/aud4/task3.cpp
        auditoriski/aud4/task4.cpp
        auditoriski/aud5/task1.cpp
        auditoriski/aud5/task2.cpp
        auditoriski/aud5/task3.cpp
        auditoriski/aud5/task4.cpp
        auditoriski/aud5/task5.cpp
        auditoriski/aud5/task6.cpp
        auditoriski/aud5/task7.cpp
        auditoriski/aud5/kol1.cpp
        auditoriski/aud5/kol2.cpp
        auditoriski/aud5/kol3.cpp
        auditoriski/aud5/switch.cpp
        auditoriski/aud5/switchCalculator.cpp
        auditoriski/aud6/tsk1.cpp
        auditoriski/aud6/tsk2.cpp
        auditoriski/aud6/tsk3.cpp
        auditoriski/aud6/tsk4.cpp
        auditoriski/aud6/tsk5.cpp
        auditoriski/aud6/tsk6.cpp
        auditoriski/aud8/tsk1.cpp
        auditoriski/aud8/tsk2.cpp
        auditoriski/aud8/tsk3.cpp
        auditoriski/aud8/tsk4.cpp
        auditoriski/aud8/tsk5.cpp
        auditoriski/aud8/tsk6.cpp
        auditoriski/aud8/tsk7.cpp
        auditoriski/aud8/tsk8.cpp
        auditoriski/aud9/task1.cpp
        auditoriski/aud9/task2.cpp
        auditoriski/aud9/task3.cpp
        auditoriski/aud9/task4.cpp
        auditoriski/aud10/tsk1.cpp
        auditoriski/aud10/tsk2.cpp
        auditoriski/aud10/tsk3.cpp
        auditoriski/aud10/tsk4.cpp
        auditoriski/aud10/tsk5.cpp
        auditoriski/aud10/tsk6.cpp
        auditoriski/aud10/tsk7.cpp
        auditoriski/aud10/tsk8.cpp
        auditoriski/aud10/tsk9.cpp
        auditoriski/aud10/tsk10.cpp
        auditoriski/aud10/tsk11.cpp
        auditoriski/aud11/tsk1.cpp
        auditoriski/aud11/tsk2.cpp
        auditoriski/aud11/tsk3.cpp
        auditoriski/aud11/tsk4.cpp
        auditoriski/aud12/tsk1.cpp
        auditoriski/aud12/tsk2.cpp
        auditoriski/aud12/tsk3.cpp
        auditoriski/aud12/tsk4.cpp
        auditoriski/aud12/tsk5.cpp
        auditoriski/aud12/tsk6.cpp
        auditoriski/aud12/tsk7.cpp
        auditoriski/aud12/tsk8.cpp
        auditoriski/aud12/tsk9.cpp
        Zad_za_vezbanje_za_prv_kolok/zad1.cpp
        Zad_za_vezbanje_za_prv_kolok/zad3.cpp
        Zad_za_vezbanje_za_prv_kolok/zad4.cpp
        Zad_za_vezbanje_za_prv_kolok/zad5.cpp
        Zad_za_vezbanje_za_prv_kolok/zad6.cpp
        Zad_za_vezbanje_za_prv_kolok/zad7.cpp
        Zad_za_vezbanje_za_prv_kolok/zad8.cpp
        Zad_za_vezbanje_za_prv_kolok/zad9.cpp
        Zad_za_vezbanje_za_prv_kolok/zad10.cpp
        Zad_za_vezbanje_za_prv_kolok/zad11.cpp
        "Exercises for first midterm/tsk1.cpp"
        "Exercises for first midterm/tsk13.cpp"
        "Exercises for first midterm/tsk12.cpp"
        "Exercises for first midterm/tsk11.cpp"
        "Exercises for first midterm/tsk10.cpp"
        "Exercises for first midterm/tsk9.cpp"
        "Exercises for first midterm/tsk8.cpp"
        "Exercises for first midterm/tsk6.cpp"
        "Exercises for first midterm/tsk7.cpp"
        "Exercises for first midterm/tsk4.cpp"
        "Exercises for first midterm/tsk5.cpp"
        "Exercises for first midterm/tsk3.cpp"
        "Exercises for first midterm/tsk2.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad1.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad3.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad5.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad6.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad7.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad8.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad9.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad10.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad11.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad12.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad13.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad14.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad15.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad16.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad17.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad18.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad19.cpp"
        "Zadaci za vrzbanje za vtor kolokv i ispit/zad20.cpp"
        UsteZadZaVezbanje/zad1.cpp
        UsteZadZaVezbanje/zad2.cpp
        UsteZadZaVezbanje/zad3.cpp
        f.cpp
        UsteZadZaVezbanje/zad4.cpp
        UsteZadZaVezbanje/zad5.cpp
        UsteZadZaVezbanje/zad6.cpp
        UsteZadZaVezbanje/zad7.cpp
        UsteZadZaVezbanje/zad8.cpp
        UsteZadZaVezbanje/zad10.cpp
        UsteZadZaVezbanje/zad14.cpp
        UsteZadZaVezbanje/zad9.cpp
        UsteZadZaVezbanje/zad11.cpp
        UsteZadZaVezbanje/zad12.cpp
        ZadaciodLabs/zad2.cpp
        ZadaciodLabs/zad20.cpp
        ZadaciodLabs/zad19.cpp
        ZadaciodLabs/zad18.cpp
        ZadaciodLabs/zad17.cpp
        ZadaciodLabs/zad16.cpp
        ZadaciodLabs/zad15.cpp
        ZadaciodLabs/zad14.cpp
        ZadaciodLabs/zad13.cpp
        ZadaciodLabs/zad12.cpp
        ZadaciodLabs/zad11.cpp
        ZadaciodLabs/zad10.cpp
        ZadaciodLabs/zad9.cpp
        ZadaciodLabs/zad8.cpp
        ZadaciodLabs/zad7.cpp
        ZadaciodLabs/zad6.cpp
        ZadaciodLabs/zad5.cpp
        ZadaciodLabs/zad4.cpp
        ZadaciodLabs/zad3.cpp
        ZadaciodLabs/zad1.cpp
        "Januari Ispit zadaci/X.cpp"
        "Januari Ispit zadaci/vtorkolok1.cpp"
        "Januari Ispit zadaci/power.cpp"
        "Januari Ispit zadaci/deleteIndexElement.cpp"
        "Januari Ispit zadaci/shiftright'.cpp"

)
