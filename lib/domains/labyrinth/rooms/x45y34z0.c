inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 34, 0 }));
  set_short( "Hallway - x45y34z0" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y34z0.c",
  "north" : DIR+"/rooms/x45y35z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
