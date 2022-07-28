inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 52, 4 }));
  set_short( "Hallway - x41y52z4" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y52z4.c",
  "north" : DIR+"/rooms/x41y53z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
