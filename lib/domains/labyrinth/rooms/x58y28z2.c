inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 28, 2 }));
  set_short( "Corridor - x58y28z2" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y28z2.c",
  "east" : DIR+"/rooms/x59y28z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
