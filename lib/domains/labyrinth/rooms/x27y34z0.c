inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 34, 0 }));
  set_short( "Corridor - x27y34z0" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y35z0.c",
  "south" : DIR+"/rooms/x27y33z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
