inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 31, 6 }));
  set_short( "Passage - x5y31z6" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y32z6.c",
  "south" : DIR+"/rooms/x5y30z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
