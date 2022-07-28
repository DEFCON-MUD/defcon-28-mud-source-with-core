inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 39, 4 }));
  set_short( "Corridor - x25y39z4" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y40z4.c",
  "south" : DIR+"/rooms/x25y38z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
