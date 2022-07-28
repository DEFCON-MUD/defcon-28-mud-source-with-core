inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 64, 8 }));
  set_short( "Corridor - x61y64z8" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y64z8.c",
  "east" : DIR+"/rooms/x62y64z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the glorzo in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
