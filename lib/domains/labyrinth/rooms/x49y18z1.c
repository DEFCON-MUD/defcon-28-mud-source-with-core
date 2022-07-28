inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 18, 1 }));
  set_short( "Corridor - x49y18z1" );
set_objects( DIR+"/npc/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y18z1.c",
  "east" : DIR+"/rooms/x50y18z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
