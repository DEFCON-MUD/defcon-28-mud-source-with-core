inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 34, 2 }));
  set_short( "Passage - x25y34z2" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y34z2.c",
  "north" : DIR+"/rooms/x25y35z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
