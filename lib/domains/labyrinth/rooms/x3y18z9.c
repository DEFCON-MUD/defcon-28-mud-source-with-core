inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 18, 9 }));
  set_short( "Hallway - x3y18z9" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y18z9.c",
  "east" : DIR+"/rooms/x4y18z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
