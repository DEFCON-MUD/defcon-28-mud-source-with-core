inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 4, 6 }));
  set_short( "Hallway - x5y4z6" );
set_objects( DIR+"/monsters/r1radsensor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y4z6.c",
  "east" : DIR+"/rooms/x6y4z6.c",
  "north" : DIR+"/rooms/x5y5z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
