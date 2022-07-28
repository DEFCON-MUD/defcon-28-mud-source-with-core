inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 0, 9 }));
  set_short( "Passage - x12y0z9" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y0z9.c",
  "east" : DIR+"/rooms/x13y0z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
