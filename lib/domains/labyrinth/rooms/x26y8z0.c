inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 8, 0 }));
  set_short( "Hallway - x26y8z0" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y8z0.c",
  "east" : DIR+"/rooms/x27y8z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
