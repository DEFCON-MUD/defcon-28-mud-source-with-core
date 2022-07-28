inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 14, 7 }));
  set_short( "Corridor - x47y14z7" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y14z7.c",
  "south" : DIR+"/rooms/x47y13z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
