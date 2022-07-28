inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 62, 6 }));
  set_short( "Hallway - x26y62z6" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y62z6.c",
  "east" : DIR+"/rooms/x27y62z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
