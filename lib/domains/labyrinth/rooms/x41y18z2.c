inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 18, 2 }));
  set_short( "Hallway - x41y18z2" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y18z2.c",
  "north" : DIR+"/rooms/x41y19z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
