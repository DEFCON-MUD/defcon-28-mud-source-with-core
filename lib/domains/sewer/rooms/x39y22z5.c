inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 22, 5 }));
  set_short( "Hallway - x39y22z5" );
set_objects( DIR+"/monsters/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y22z5.c",
  "north" : DIR+"/rooms/x39y23z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
