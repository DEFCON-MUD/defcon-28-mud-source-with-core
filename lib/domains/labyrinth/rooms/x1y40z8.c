inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 8 }));
  set_short( "Corridor - x1y40z8" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y40z8.c",
  "north" : DIR+"/rooms/x1y41z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
