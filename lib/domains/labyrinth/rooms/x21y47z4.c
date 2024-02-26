inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 47, 4 }));
  set_short( "Corridor - x21y47z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y48z4.c",
  "south" : DIR+"/rooms/x21y46z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
