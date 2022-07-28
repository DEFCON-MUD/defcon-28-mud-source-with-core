inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 8 }));
  set_short( "Corridor - x45y14z8" );
set_objects( DIR+"/npc/drone.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y14z8.c",
  "north" : DIR+"/rooms/x45y15z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
