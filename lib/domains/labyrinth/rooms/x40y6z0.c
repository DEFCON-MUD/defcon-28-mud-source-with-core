inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 6, 0 }));
  set_short( "Passage - x40y6z0" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y6z0.c",
  "east" : DIR+"/rooms/x41y6z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
