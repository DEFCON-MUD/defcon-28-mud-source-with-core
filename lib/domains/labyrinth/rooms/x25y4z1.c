inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 4, 1 }));
  set_short( "Corridor - x25y4z1" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y4z1.c",
  "south" : DIR+"/rooms/x25y3z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
