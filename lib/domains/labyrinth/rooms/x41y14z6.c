inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 14, 6 }));
  set_short( "Corridor - x41y14z6" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y14z6.c",
  "north" : DIR+"/rooms/x41y15z6.c",
  "south" : DIR+"/rooms/x41y13z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
