inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 26, 9 }));
  set_short( "Passage - x3y26z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y26z9.c",
  "north" : DIR+"/rooms/x3y27z9.c",
  "south" : DIR+"/rooms/x3y25z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
