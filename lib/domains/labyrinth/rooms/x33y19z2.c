inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 19, 2 }));
  set_short( "Corridor - x33y19z2" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y20z2.c",
  "south" : DIR+"/rooms/x33y18z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
