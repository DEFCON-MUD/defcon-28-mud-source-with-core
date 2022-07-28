inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 17, 8 }));
  set_short( "Corridor - x13y17z8" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y18z8.c",
  "south" : DIR+"/rooms/x13y16z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
