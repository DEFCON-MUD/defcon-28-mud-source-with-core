inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 8 }));
  set_short( "Hallway - x43y52z8" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y52z8.c",
  "east" : DIR+"/rooms/x44y52z8.c",
  "south" : DIR+"/rooms/x43y51z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
