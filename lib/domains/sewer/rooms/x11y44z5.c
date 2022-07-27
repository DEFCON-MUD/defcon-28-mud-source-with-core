inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 44, 5 }));
  set_short( "Hallway - x11y44z5" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y44z5.c",
  "south" : DIR+"/rooms/x11y43z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crappy sales material in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
