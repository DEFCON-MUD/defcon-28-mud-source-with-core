inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 39, 40, -8 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^" );

  set_objects(
    DIR+"/npc/Gl0Rz0.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/38_40_-8.c",
  "east" : DIR+"/rooms/40_40_-8.c"
  ]) );

}

