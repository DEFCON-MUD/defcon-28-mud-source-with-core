inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 19, 7 }));
  set_short( "Corridor - x51y19z7" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y20z7.c",
  "south" : DIR+"/rooms/x51y18z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
