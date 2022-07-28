inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 57, 5 }));
  set_short( "Hallway - x7y57z5" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y58z5.c",
  "south" : DIR+"/rooms/x7y56z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
