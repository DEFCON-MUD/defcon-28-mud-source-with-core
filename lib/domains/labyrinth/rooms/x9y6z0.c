inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 6, 0 }));
  set_short( "Corridor - x9y6z0" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y6z0.c",
  "east" : DIR+"/rooms/x10y6z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
