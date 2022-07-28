inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 58, 8 }));
  set_short( "Corridor - x35y58z8" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y58z8.c",
  "south" : DIR+"/rooms/x35y57z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
