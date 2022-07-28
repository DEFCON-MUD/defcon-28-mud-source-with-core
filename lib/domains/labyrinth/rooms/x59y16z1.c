inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 1 }));
  set_short( "Passage - x59y16z1" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z1.c",
  "east" : DIR+"/rooms/x60y16z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
