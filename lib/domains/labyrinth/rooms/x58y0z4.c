inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 0, 4 }));
  set_short( "Corridor - x58y0z4" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y0z4.c",
  "east" : DIR+"/rooms/x59y0z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
