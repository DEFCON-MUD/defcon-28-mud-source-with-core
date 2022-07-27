inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 60, 1 }));
  set_short( "Corridor - x7y60z1" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y60z1.c",
  "north" : DIR+"/rooms/x7y61z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
