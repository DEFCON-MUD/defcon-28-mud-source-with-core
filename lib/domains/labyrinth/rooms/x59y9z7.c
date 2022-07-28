inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 9, 7 }));
  set_short( "Corridor - x59y9z7" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y10z7.c",
  "south" : DIR+"/rooms/x59y8z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
