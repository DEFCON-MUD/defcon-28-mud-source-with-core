inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 32, 2 }));
  set_short( "Hallway - x19y32z2" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y32z2.c",
  "east" : DIR+"/rooms/x20y32z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
