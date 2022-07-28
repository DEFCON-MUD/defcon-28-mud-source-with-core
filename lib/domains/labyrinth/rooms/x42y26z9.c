inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 26, 9 }));
  set_short( "Corridor - x42y26z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y26z9.c",
  "east" : DIR+"/rooms/x43y26z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
