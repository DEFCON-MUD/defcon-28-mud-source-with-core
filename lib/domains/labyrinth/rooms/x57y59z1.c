inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 59, 1 }));
  set_short( "Passage - x57y59z1" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y60z1.c",
  "south" : DIR+"/rooms/x57y58z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
