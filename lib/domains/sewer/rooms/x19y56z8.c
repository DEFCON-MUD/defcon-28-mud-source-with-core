inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 56, 8 }));
  set_short( "Hallway - x19y56z8" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y57z8.c",
  "south" : DIR+"/rooms/x19y55z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
