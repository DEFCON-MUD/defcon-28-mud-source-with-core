inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 1 }));
  set_short( "Hallway - x27y34z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y34z1.c",
  "north" : DIR+"/rooms/x27y35z1.c",
  "south" : DIR+"/rooms/x27y33z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
