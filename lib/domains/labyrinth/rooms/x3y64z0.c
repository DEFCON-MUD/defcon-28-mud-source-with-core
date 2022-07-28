inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 64, 0 }));
  set_short( "Corridor - x3y64z0" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y64z0.c",
  "east" : DIR+"/rooms/x4y64z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
