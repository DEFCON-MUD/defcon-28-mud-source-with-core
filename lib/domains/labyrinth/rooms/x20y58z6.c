inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 58, 6 }));
  set_short( "Hallway - x20y58z6" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y58z6.c",
  "east" : DIR+"/rooms/x21y58z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
