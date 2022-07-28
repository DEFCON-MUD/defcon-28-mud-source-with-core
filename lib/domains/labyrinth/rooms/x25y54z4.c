inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 54, 4 }));
  set_short( "Corridor - x25y54z4" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y54z4.c",
  "east" : DIR+"/rooms/x26y54z4.c",
  "south" : DIR+"/rooms/x25y53z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
