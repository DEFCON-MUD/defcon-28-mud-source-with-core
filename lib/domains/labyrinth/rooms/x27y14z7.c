inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 7 }));
  set_short( "Corridor - x27y14z7" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y14z7.c",
  "south" : DIR+"/rooms/x27y13z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
