inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 13, 2 }));
  set_short( "Passage - x59y13z2" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y14z2.c",
  "south" : DIR+"/rooms/x59y12z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
