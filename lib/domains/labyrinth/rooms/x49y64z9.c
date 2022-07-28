inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 64, 9 }));
  set_short( "Corridor - x49y64z9" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y64z9.c",
  "east" : DIR+"/rooms/x50y64z9.c",
  "south" : DIR+"/rooms/x49y63z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
