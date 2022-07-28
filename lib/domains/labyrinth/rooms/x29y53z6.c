inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 53, 6 }));
  set_short( "Hallway - x29y53z6" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y54z6.c",
  "south" : DIR+"/rooms/x29y52z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
