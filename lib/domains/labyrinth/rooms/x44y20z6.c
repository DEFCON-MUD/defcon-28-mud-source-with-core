inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 20, 6 }));
  set_short( "Passage - x44y20z6" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y20z6.c",
  "east" : DIR+"/rooms/x45y20z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
