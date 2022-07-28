inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 30, 4 }));
  set_short( "Corridor - x1y30z4" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y31z4.c",
  "south" : DIR+"/rooms/x1y29z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
