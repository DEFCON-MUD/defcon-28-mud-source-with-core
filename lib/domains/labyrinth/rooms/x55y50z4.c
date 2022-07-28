inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 50, 4 }));
  set_short( "Hallway - x55y50z4" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y51z4.c",
  "south" : DIR+"/rooms/x55y49z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
