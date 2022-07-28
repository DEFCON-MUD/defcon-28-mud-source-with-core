inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 39, 0 }));
  set_short( "Corridor - x59y39z0" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y40z0.c",
  "south" : DIR+"/rooms/x59y38z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
