inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 52, 7 }));
  set_short( "Corridor - x43y52z7" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y52z7.c",
  "south" : DIR+"/rooms/x43y51z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
