inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 10, 0 }));
  set_short( "Passage - x19y10z0" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y11z0.c",
  "south" : DIR+"/rooms/x19y9z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
