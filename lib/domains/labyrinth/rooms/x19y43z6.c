inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 43, 6 }));
  set_short( "Corridor - x19y43z6" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y44z6.c",
  "south" : DIR+"/rooms/x19y42z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
