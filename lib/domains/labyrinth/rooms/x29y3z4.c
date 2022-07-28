inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 3, 4 }));
  set_short( "Hallway - x29y3z4" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y4z4.c",
  "south" : DIR+"/rooms/x29y2z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
