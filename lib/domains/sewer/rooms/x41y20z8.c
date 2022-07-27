inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 20, 8 }));
  set_short( "Passage - x41y20z8" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y20z8.c",
  "north" : DIR+"/rooms/x41y21z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
