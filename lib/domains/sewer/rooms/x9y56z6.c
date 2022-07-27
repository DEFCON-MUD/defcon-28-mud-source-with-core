inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 56, 6 }));
  set_short( "Passage - x9y56z6" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y56z6.c",
  "south" : DIR+"/rooms/x9y55z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
