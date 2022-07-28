inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 2, 1 }));
  set_short( "Corridor - x19y2z1" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y2z1.c",
  "north" : DIR+"/rooms/x19y3z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
