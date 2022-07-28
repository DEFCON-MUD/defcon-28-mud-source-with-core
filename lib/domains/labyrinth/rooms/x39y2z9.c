inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 2, 9 }));
  set_short( "Hallway - x39y2z9" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y2z9.c",
  "east" : DIR+"/rooms/x40y2z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
