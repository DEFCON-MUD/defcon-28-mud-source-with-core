inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 48, 1 }));
  set_short( "Passage - x49y48z1" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y48z1.c",
  "east" : DIR+"/rooms/x50y48z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
