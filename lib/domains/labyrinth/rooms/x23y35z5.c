inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 35, 5 }));
  set_short( "Hallway - x23y35z5" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y36z5.c",
  "south" : DIR+"/rooms/x23y34z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
