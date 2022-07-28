inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 51, 0 }));
  set_short( "Hallway - x29y51z0" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y52z0.c",
  "south" : DIR+"/rooms/x29y50z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
