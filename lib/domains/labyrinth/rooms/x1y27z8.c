inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 27, 8 }));
  set_short( "Passage - x1y27z8" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y28z8.c",
  "south" : DIR+"/rooms/x1y26z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
