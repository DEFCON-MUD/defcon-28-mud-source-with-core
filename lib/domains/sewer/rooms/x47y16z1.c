inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 1 }));
  set_short( "Hallway - x47y16z1" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y16z1.c",
  "south" : DIR+"/rooms/x47y15z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
