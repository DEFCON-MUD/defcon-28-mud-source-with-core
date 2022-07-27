inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 48, 5 }));
  set_short( "Hallway - x3y48z5" );
set_objects( DIR+"/monsters/colleen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y48z5.c",
  "north" : DIR+"/rooms/x3y49z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
