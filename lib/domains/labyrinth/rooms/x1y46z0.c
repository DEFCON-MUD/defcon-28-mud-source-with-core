inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 46, 0 }));
  set_short( "Corridor - x1y46z0" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y46z0.c",
  "south" : DIR+"/rooms/x1y45z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
