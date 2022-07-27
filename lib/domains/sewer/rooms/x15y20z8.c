inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 20, 8 }));
  set_short( "Passage - x15y20z8" );
set_objects( DIR+"/monsters/politian.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y20z8.c",
  "south" : DIR+"/rooms/x15y19z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
