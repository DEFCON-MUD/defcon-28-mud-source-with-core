inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 42, 9 }));
  set_short( "Corridor - x19y42z9" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y42z9.c",
  "south" : DIR+"/rooms/x19y41z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
