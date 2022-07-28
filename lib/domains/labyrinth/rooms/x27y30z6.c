inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 30, 6 }));
  set_short( "Corridor - x27y30z6" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y30z6.c",
  "north" : DIR+"/rooms/x27y31z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
