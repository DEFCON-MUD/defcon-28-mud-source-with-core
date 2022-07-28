inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 10, 9 }));
  set_short( "Hallway - x47y10z9" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y10z9.c",
  "north" : DIR+"/rooms/x47y11z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
