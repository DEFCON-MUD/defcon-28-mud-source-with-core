inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 2 }));
  set_short( "Corridor - x29y32z2" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y32z2.c",
  "north" : DIR+"/rooms/x29y33z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
