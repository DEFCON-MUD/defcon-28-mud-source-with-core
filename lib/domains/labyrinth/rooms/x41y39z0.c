inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 39, 0 }));
  set_short( "Corridor - x41y39z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y40z0.c",
  "south" : DIR+"/rooms/x41y38z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
