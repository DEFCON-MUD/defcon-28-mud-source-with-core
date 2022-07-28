inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 14, 7 }));
  set_short( "Corridor - x35y14z7" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y15z7.c",
  "south" : DIR+"/rooms/x35y13z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
