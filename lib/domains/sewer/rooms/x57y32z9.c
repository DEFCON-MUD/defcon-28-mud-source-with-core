inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 32, 9 }));
  set_short( "Corridor - x57y32z9" );
set_objects( DIR+"/monsters/monzema.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y32z9.c",
  "north" : DIR+"/rooms/x57y33z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
