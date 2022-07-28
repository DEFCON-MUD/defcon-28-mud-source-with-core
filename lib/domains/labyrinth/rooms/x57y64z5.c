inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 64, 5 }));
  set_short( "Hallway - x57y64z5" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y64z5.c",
  "east" : DIR+"/rooms/x58y64z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
