inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 59, 5 }));
  set_short( "Hallway - x5y59z5" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y60z5.c",
  "south" : DIR+"/rooms/x5y58z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
