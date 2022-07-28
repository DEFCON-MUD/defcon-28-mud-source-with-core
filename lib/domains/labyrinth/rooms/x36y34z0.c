inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 34, 0 }));
  set_short( "Corridor - x36y34z0" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y34z0.c",
  "east" : DIR+"/rooms/x37y34z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
