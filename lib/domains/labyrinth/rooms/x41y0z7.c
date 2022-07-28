inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 0, 7 }));
  set_short( "Corridor - x41y0z7" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y0z7.c",
  "east" : DIR+"/rooms/x42y0z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
