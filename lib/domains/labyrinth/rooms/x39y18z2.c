inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 18, 2 }));
  set_short( "Hallway - x39y18z2" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y19z2.c",
  "south" : DIR+"/rooms/x39y17z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
