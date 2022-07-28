inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 1 }));
  set_short( "Corridor - x59y52z1" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y52z1.c",
  "east" : DIR+"/rooms/x60y52z1.c",
  "north" : DIR+"/rooms/x59y53z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
