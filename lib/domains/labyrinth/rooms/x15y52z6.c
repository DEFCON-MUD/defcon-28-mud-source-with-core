inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 52, 6 }));
  set_short( "Hallway - x15y52z6" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y52z6.c",
  "east" : DIR+"/rooms/x16y52z6.c",
  "north" : DIR+"/rooms/x15y53z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
