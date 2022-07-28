inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 7, 8 }));
  set_short( "Corridor - x5y7z8" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y8z8.c",
  "south" : DIR+"/rooms/x5y6z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
