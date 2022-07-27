inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 6, 7 }));
  set_short( "Corridor - x41y6z7" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y6z7.c",
  "south" : DIR+"/rooms/x41y5z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
