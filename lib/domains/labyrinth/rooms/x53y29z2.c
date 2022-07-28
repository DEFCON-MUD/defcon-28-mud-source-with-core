inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 29, 2 }));
  set_short( "Passage - x53y29z2" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y30z2.c",
  "south" : DIR+"/rooms/x53y28z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
