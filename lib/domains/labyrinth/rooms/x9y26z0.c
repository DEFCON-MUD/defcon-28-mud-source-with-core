inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 26, 0 }));
  set_short( "Hallway - x9y26z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y26z0.c",
  "east" : DIR+"/rooms/x10y26z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
