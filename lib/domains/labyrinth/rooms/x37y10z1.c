inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 10, 1 }));
  set_short( "Passage - x37y10z1" );
set_objects( DIR+"/npc/clubdancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y10z1.c",
  "east" : DIR+"/rooms/x38y10z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
