inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 0, 8 }));
  set_short( "Corridor - x33y0z8" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y0z8.c",
  "east" : DIR+"/rooms/x34y0z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
