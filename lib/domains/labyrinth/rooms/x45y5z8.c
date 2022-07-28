inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 5, 8 }));
  set_short( "Hallway - x45y5z8" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y6z8.c",
  "south" : DIR+"/rooms/x45y4z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
