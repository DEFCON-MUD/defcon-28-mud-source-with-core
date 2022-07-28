inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 0, 3 }));
  set_short( "Hallway - x50y0z3" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y0z3.c",
  "east" : DIR+"/rooms/x51y0z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
