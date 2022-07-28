inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 40, 4 }));
  set_short( "Passage - x5y40z4" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y40z4.c",
  "east" : DIR+"/rooms/x6y40z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
