inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 10, 7 }));
  set_short( "Passage - x15y10z7" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y11z7.c",
  "south" : DIR+"/rooms/x15y9z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
