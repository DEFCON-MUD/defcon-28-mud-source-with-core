inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 54, 8 }));
  set_short( "Passage - x11y54z8" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y54z8.c",
  "south" : DIR+"/rooms/x11y53z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
