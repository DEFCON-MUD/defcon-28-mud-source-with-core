inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 13, 9 }));
  set_short( "Corridor - x1y13z9" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y14z9.c",
  "south" : DIR+"/rooms/x1y12z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
