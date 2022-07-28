inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 62, 2 }));
  set_short( "Passage - x3y62z2" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y62z2.c",
  "south" : DIR+"/rooms/x3y61z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
