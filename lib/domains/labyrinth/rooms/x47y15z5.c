inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 15, 5 }));
  set_short( "Corridor - x47y15z5" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y16z5.c",
  "south" : DIR+"/rooms/x47y14z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
