inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 46, 6 }));
  set_short( "Passage - x17y46z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y46z6.c",
  "north" : DIR+"/rooms/x17y47z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
