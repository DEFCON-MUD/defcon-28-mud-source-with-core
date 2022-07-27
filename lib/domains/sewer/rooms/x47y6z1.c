inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 1 }));
  set_short( "Corridor - x47y6z1" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y6z1.c",
  "east" : DIR+"/rooms/x48y6z1.c",
  "south" : DIR+"/rooms/x47y5z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
