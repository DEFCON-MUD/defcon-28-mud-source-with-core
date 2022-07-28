inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 17, 8 }));
  set_short( "Passage - x53y17z8" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y18z8.c",
  "south" : DIR+"/rooms/x53y16z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
