inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 33, 1 }));
  set_short( "Hallway - x29y33z1" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y34z1.c",
  "south" : DIR+"/rooms/x29y32z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
