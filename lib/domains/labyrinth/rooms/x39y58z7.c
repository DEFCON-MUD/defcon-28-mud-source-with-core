inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 58, 7 }));
  set_short( "Corridor - x39y58z7" );
set_objects( DIR+"/npc/mutatedcockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y58z7.c",
  "north" : DIR+"/rooms/x39y59z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
