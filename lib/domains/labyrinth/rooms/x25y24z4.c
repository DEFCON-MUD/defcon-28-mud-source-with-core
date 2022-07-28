inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 24, 4 }));
  set_short( "Passage - x25y24z4" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y24z4.c",
  "east" : DIR+"/rooms/x26y24z4.c",
  "south" : DIR+"/rooms/x25y23z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
