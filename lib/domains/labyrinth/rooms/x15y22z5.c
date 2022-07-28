inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 22, 5 }));
  set_short( "Passage - x15y22z5" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y22z5.c",
  "south" : DIR+"/rooms/x15y21z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
