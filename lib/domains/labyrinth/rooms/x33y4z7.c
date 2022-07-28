inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 4, 7 }));
  set_short( "Corridor - x33y4z7" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y4z7.c",
  "south" : DIR+"/rooms/x33y3z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
