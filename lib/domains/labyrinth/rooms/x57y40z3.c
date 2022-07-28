inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 40, 3 }));
  set_short( "Passage - x57y40z3" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y40z3.c",
  "east" : DIR+"/rooms/x58y40z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
