inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 4, 4 }));
  set_short( "Corridor - x31y4z4" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y4z4.c",
  "south" : DIR+"/rooms/x31y3z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
