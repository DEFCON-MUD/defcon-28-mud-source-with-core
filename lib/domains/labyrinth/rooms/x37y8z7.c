inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 8, 7 }));
  set_short( "Hallway - x37y8z7" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y9z7.c",
  "south" : DIR+"/rooms/x37y7z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
