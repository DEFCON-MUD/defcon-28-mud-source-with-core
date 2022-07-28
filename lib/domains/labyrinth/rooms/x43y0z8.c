inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 0, 8 }));
  set_short( "Hallway - x43y0z8" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y0z8.c",
  "east" : DIR+"/rooms/x44y0z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
