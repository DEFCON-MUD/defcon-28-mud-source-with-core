inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 64, 8 }));
  set_short( "Passage - x18y64z8" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y64z8.c",
  "east" : DIR+"/rooms/x19y64z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
