inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 14, 4 }));
  set_short( "Corridor - x9y14z4" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y15z4.c",
  "south" : DIR+"/rooms/x9y13z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
