inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 51, 62, -1 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^" );

  set_objects(
    DIR+"/npc/enforcer.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/50_62_-1.c",
  "east" : DIR+"/rooms/52_62_-1.c"
  ]) );

}

