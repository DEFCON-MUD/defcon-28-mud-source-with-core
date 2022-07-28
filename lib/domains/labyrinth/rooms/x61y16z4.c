inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 16, 4 }));
  set_short( "Hallway - x61y16z4" );
set_objects( DIR+"/npc/clerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y16z4.c",
  "south" : DIR+"/rooms/x61y15z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
