inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 8 }));
  set_short( "Passage - x23y38z8" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y38z8.c",
  "east" : DIR+"/rooms/x24y38z8.c",
  "south" : DIR+"/rooms/x23y37z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
