inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 20, 5 }));
  set_short( "Corridor - x17y20z5" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y20z5.c",
  "south" : DIR+"/rooms/x17y19z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
