inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 53, 2 }));
  set_short( "Hallway - x23y53z2" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y54z2.c",
  "south" : DIR+"/rooms/x23y52z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
