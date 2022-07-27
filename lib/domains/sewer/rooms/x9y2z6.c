inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 2, 6 }));
  set_short( "Corridor - x9y2z6" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y2z6.c",
  "north" : DIR+"/rooms/x9y3z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
