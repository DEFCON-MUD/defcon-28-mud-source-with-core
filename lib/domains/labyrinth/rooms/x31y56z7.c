inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 56, 7 }));
  set_short( "Passage - x31y56z7" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y56z7.c",
  "east" : DIR+"/rooms/x32y56z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
