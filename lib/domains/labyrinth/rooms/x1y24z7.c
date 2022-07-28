inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 24, 7 }));
  set_short( "Passage - x1y24z7" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y24z7.c",
  "south" : DIR+"/rooms/x1y23z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
