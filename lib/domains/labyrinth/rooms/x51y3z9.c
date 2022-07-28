inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 3, 9 }));
  set_short( "Corridor - x51y3z9" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y4z9.c",
  "south" : DIR+"/rooms/x51y2z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
