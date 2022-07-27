inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 5 }));
  set_short( "Hallway - x59y52z5" );
set_objects( DIR+"/monsters/torga.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y52z5.c",
  "north" : DIR+"/rooms/x59y53z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
