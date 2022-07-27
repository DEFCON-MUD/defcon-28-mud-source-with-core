inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 56, 7 }));
  set_short( "Hallway - x31y56z7" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y56z7.c",
  "east" : DIR+"/rooms/x32y56z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
