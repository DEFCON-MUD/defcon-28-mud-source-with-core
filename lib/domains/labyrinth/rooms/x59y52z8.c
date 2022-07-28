inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 8 }));
  set_short( "Passage - x59y52z8" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y52z8.c",
  "east" : DIR+"/rooms/x60y52z8.c",
  "north" : DIR+"/rooms/x59y53z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
