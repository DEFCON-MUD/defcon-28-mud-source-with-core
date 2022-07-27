inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 44, 2 }));
  set_short( "Hallway - x3y44z2" );
set_objects( DIR+"/monsters/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y44z2.c",
  "south" : DIR+"/rooms/x3y43z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this dump. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
