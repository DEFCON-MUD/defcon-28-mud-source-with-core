inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 3, 7 }));
  set_short( "Hallway - x35y3z7" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y4z7.c",
  "south" : DIR+"/rooms/x35y2z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
