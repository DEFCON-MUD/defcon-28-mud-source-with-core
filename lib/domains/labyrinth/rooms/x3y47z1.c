inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 47, 1 }));
  set_short( "Hallway - x3y47z1" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y48z1.c",
  "south" : DIR+"/rooms/x3y46z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
