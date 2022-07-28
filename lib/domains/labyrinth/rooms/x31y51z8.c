inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 51, 8 }));
  set_short( "Hallway - x31y51z8" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y52z8.c",
  "south" : DIR+"/rooms/x31y50z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
