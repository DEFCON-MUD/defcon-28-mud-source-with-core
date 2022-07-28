inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 51, 1 }));
  set_short( "Corridor - x15y51z1" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y52z1.c",
  "south" : DIR+"/rooms/x15y50z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
