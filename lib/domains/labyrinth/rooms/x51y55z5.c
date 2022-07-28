inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 55, 5 }));
  set_short( "Corridor - x51y55z5" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y56z5.c",
  "south" : DIR+"/rooms/x51y54z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
