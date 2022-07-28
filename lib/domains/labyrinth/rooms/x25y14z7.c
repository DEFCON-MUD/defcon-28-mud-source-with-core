inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 14, 7 }));
  set_short( "Passage - x25y14z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y14z7.c",
  "north" : DIR+"/rooms/x25y15z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
