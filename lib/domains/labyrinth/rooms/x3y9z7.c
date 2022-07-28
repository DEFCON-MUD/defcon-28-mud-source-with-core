inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 9, 7 }));
  set_short( "Corridor - x3y9z7" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y10z7.c",
  "south" : DIR+"/rooms/x3y8z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
