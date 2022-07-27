inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 16, 4 }));
  set_short( "Passage - x29y16z4" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y16z4.c",
  "east" : DIR+"/rooms/x30y16z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
