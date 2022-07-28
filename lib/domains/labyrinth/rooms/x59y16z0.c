inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 0 }));
  set_short( "Hallway - x59y16z0" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y17z0.c",
  "south" : DIR+"/rooms/x59y15z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
