inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 50, 1 }));
  set_short( "Passage - x15y50z1" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y50z1.c",
  "north" : DIR+"/rooms/x15y51z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
