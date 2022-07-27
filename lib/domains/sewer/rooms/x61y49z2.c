inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 49, 2 }));
  set_short( "Corridor - x61y49z2" );
set_objects( DIR+"/monsters/jkie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y50z2.c",
  "south" : DIR+"/rooms/x61y48z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
