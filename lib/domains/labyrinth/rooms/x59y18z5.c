inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 18, 5 }));
  set_short( "Corridor - x59y18z5" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y18z5.c",
  "north" : DIR+"/rooms/x59y19z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
