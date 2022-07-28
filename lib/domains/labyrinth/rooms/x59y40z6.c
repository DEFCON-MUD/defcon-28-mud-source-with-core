inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 40, 6 }));
  set_short( "Passage - x59y40z6" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y40z6.c",
  "south" : DIR+"/rooms/x59y39z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
