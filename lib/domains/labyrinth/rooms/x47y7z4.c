inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 7, 4 }));
  set_short( "Passage - x47y7z4" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y8z4.c",
  "south" : DIR+"/rooms/x47y6z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
