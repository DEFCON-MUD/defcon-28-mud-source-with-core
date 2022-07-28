inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 6, 1 }));
  set_short( "Passage - x54y6z1" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y6z1.c",
  "east" : DIR+"/rooms/x55y6z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
