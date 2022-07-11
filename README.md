# tester_arduino
Arduino: come creare un tester per batterie

Nel mondo di Arduino è possibile creare una miriade di progetti. Arduino, a differenza di altri settori della scienza, richiede un approccio sia informatico che elettronico, e per tale motivo rappresenta il connubio perfetto tra la propria fantasia e le proprie conoscenze. Si possono creare progetti che prettamente si basano su conoscenze elettroniche, progetti che prettamente si basano su conoscenze informatiche o progetti che richiedono la perfetta integrazione dei due campi.

Un progetto molto interessante da effettuare è il tester che permette di sapere lo stato di carica di una batteria. Questo strumento di misurazione sarà utilizzato come strumento di apprendimento e non come dispositivo di precisa misurazione.

I materiali da utilizzare sono i seguenti:

Arduino Uno
Green LED
Yellow LED
Red LED
5.1k Zener Diode
100 ohm resistors
2.2k ohm resistor
Breadboard
Jumper
Per quanto concerne l’assemblaggio è abbastanza semplice. Tramite l’ausilio del diodo Zener sarà possibile testare le batterie che hanno una tensione maggiore di 8 volt.

Il circuito presenta tre LED differente, ciascuno dei quali rappresenta approssimativamente il livello di carica della batteria da analizzare. Il LED rosso rappresenta la batteria nel momento in cui è scarica. Il LED giallo rappresenta la batteria nel momento in cui possiede circa la metà della carica. Infine, il LED verde rappresenta che la batteria è carica. Per ciascun LED si collega un resistore da 100 ohm nel polo positivo del LED.

In seguito vi è un diagramma elettrico del progetto:
![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2020/01/Sesasnza-titolo.jpg?w=759&ssl=1)

codice https://github.com/SimoneMoreWare/tester_arduino/blob/main/tester.ino
