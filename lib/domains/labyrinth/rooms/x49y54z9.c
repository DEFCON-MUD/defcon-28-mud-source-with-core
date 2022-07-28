inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 54, 9 }));
  set_short( "Passage - x49y54z9" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y54z9.c",
  "south" : DIR+"/rooms/x49y53z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
