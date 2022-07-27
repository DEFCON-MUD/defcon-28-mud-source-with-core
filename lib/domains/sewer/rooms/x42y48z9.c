inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 48, 9 }));
  set_short( "Corridor - x42y48z9" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y48z9.c",
  "east" : DIR+"/rooms/x43y48z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
