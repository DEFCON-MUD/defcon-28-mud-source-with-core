inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 38, 2 }));
  set_short( "Corridor - x47y38z2" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y38z2.c",
  "north" : DIR+"/rooms/x47y39z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
