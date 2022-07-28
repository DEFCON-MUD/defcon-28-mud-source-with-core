inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 0, 5 }));
  set_short( "Passage - x59y0z5" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y0z5.c",
  "east" : DIR+"/rooms/x60y0z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
