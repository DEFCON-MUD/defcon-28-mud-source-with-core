inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 31, 9 }));
  set_short( "Corridor - x25y31z9" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y32z9.c",
  "south" : DIR+"/rooms/x25y30z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
