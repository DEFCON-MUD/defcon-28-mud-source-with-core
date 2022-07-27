inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 28, 5 }));
  set_short( "Hallway - x45y28z5" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y28z5.c",
  "north" : DIR+"/rooms/x45y29z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
