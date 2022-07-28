inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 16, 4 }));
  set_short( "Hallway - x17y16z4" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y16z4.c",
  "south" : DIR+"/rooms/x17y15z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
