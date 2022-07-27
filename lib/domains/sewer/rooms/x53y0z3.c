inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 0, 3 }));
  set_short( "Hallway - x53y0z3" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y0z3.c",
  "east" : DIR+"/rooms/x54y0z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
