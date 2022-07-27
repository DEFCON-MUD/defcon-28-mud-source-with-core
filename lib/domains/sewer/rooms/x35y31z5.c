inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 31, 5 }));
  set_short( "Hallway - x35y31z5" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y32z5.c",
  "south" : DIR+"/rooms/x35y30z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
