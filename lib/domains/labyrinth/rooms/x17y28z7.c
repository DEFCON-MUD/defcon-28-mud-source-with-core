inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 7 }));
  set_short( "Passage - x17y28z7" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y28z7.c",
  "north" : DIR+"/rooms/x17y29z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
