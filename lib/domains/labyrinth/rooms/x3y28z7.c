inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 28, 7 }));
  set_short( "Corridor - x3y28z7" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y28z7.c",
  "north" : DIR+"/rooms/x3y29z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
