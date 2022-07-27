inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 16, 7 }));
  set_short( "Hallway - x37y16z7" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y17z7.c",
  "south" : DIR+"/rooms/x37y15z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
