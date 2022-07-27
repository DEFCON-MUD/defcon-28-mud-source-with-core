inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 1 }));
  set_short( "Passage - x37y16z1" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y16z1.c",
  "north" : DIR+"/rooms/x37y17z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
