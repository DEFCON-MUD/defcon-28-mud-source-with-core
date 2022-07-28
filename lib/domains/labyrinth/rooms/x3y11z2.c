inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 11, 2 }));
  set_short( "Corridor - x3y11z2" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y12z2.c",
  "south" : DIR+"/rooms/x3y10z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
