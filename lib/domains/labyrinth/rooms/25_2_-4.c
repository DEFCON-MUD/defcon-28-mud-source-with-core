inherit "/std/room";

#include "../domain.h" 

void setup( void ) {

  #include "area.h"
  add_area("labyrinth");
  set_domainname("labyrinth");
  set_coords(({ 25, 2, -4 }));
  set_dimensions(({ 64, 64 }));

  set_short( "Labyrinth" );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^" );

  set_objects(
    DIR+"/npc/dba.c"
  );
 set_exits( ([
  "west" : DIR+"/rooms/24_2_-4.c",
  "east" : DIR+"/rooms/26_2_-4.c"
  ]) );

}

