inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 10, 5 }));
  set_short( "Passage - x47y10z5" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y11z5.c",
  "south" : DIR+"/rooms/x47y9z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
