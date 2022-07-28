inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 60, 1 }));
  set_short( "Passage - x49y60z1" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y60z1.c",
  "south" : DIR+"/rooms/x49y59z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
