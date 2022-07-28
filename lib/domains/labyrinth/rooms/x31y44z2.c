inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 44, 2 }));
  set_short( "Corridor - x31y44z2" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y44z2.c",
  "south" : DIR+"/rooms/x31y43z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
