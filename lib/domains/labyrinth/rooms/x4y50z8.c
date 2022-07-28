inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 50, 8 }));
  set_short( "Hallway - x4y50z8" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y50z8.c",
  "east" : DIR+"/rooms/x5y50z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
