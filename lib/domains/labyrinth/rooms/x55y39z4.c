inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 39, 4 }));
  set_short( "Corridor - x55y39z4" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y40z4.c",
  "south" : DIR+"/rooms/x55y38z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
