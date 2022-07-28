inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 64, 5 }));
  set_short( "Corridor - x7y64z5" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y64z5.c",
  "east" : DIR+"/rooms/x8y64z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
