inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 4, 8 }));
  set_short( "Hallway - x1y4z8" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y5z8.c",
  "south" : DIR+"/rooms/x1y3z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
