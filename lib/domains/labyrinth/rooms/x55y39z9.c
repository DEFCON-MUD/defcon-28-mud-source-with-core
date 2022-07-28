inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 39, 9 }));
  set_short( "Hallway - x55y39z9" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y40z9.c",
  "south" : DIR+"/rooms/x55y38z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
