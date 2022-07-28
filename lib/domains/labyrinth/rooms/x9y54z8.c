inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 8 }));
  set_short( "Corridor - x9y54z8" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y54z8.c",
  "south" : DIR+"/rooms/x9y53z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
