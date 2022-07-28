inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 17, 0 }));
  set_short( "Hallway - x11y17z0" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y18z0.c",
  "south" : DIR+"/rooms/x11y16z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
