inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 6, 1 }));
  set_short( "Corridor - x26y6z1" );
set_objects( DIR+"/monsters/rhel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y6z1.c",
  "east" : DIR+"/rooms/x27y6z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
