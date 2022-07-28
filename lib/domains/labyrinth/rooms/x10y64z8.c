inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 64, 8 }));
  set_short( "Hallway - x10y64z8" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y64z8.c",
  "east" : DIR+"/rooms/x11y64z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
