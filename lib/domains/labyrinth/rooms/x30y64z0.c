inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 64, 0 }));
  set_short( "Corridor - x30y64z0" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y64z0.c",
  "east" : DIR+"/rooms/x31y64z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
