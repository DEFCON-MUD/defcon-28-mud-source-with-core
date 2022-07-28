inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 38, 7 }));
  set_short( "Hallway - x39y38z7" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y38z7.c",
  "south" : DIR+"/rooms/x39y37z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
