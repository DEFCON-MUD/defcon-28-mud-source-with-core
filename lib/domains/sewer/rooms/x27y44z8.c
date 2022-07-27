inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 44, 8 }));
  set_short( "Corridor - x27y44z8" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y45z8.c",
  "south" : DIR+"/rooms/x27y43z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
