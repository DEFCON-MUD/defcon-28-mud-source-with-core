inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 8, 9 }));
  set_short( "Passage - x35y8z9" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y8z9.c",
  "east" : DIR+"/rooms/x36y8z9.c",
  "south" : DIR+"/rooms/x35y7z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
