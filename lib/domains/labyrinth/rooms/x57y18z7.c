inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 18, 7 }));
  set_short( "Corridor - x57y18z7" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y18z7.c",
  "east" : DIR+"/rooms/x58y18z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
