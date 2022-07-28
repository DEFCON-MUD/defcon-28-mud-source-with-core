inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 36, 1 }));
  set_short( "Corridor - x35y36z1" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y36z1.c",
  "north" : DIR+"/rooms/x35y37z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
