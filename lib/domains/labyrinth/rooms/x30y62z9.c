inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 62, 9 }));
  set_short( "Hallway - x30y62z9" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y62z9.c",
  "east" : DIR+"/rooms/x31y62z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
