inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 7 }));
  set_short( "Passage - x27y50z7" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y50z7.c",
  "north" : DIR+"/rooms/x27y51z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
