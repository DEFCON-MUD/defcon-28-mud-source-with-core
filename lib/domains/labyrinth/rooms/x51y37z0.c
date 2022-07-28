inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 37, 0 }));
  set_short( "Passage - x51y37z0" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y38z0.c",
  "south" : DIR+"/rooms/x51y36z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
