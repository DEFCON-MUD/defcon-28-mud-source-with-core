inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 39, 1 }));
  set_short( "Corridor - x13y39z1" );
set_objects( DIR+"/monsters/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y40z1.c",
  "south" : DIR+"/rooms/x13y38z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
