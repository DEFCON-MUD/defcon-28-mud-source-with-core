inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 15, 1 }));
  set_short( "Hallway - x43y15z1" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y16z1.c",
  "south" : DIR+"/rooms/x43y14z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
