inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 22, 5 }));
  set_short( "Passage - x33y22z5" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y22z5.c",
  "east" : DIR+"/rooms/x34y22z5.c",
  "north" : DIR+"/rooms/x33y23z5.c",
  "south" : DIR+"/rooms/x33y21z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
