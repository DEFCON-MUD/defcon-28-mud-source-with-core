inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 30, 7 }));
  set_short( "Passage - x43y30z7" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y31z7.c",
  "south" : DIR+"/rooms/x43y29z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
