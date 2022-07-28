inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 0, 6 }));
  set_short( "Corridor - x59y0z6" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y0z6.c",
  "east" : DIR+"/rooms/x60y0z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
