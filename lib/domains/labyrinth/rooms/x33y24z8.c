inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 24, 8 }));
  set_short( "Passage - x33y24z8" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y24z8.c",
  "south" : DIR+"/rooms/x33y23z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
