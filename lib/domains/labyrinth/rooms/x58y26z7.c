inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 26, 7 }));
  set_short( "Passage - x58y26z7" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y26z7.c",
  "east" : DIR+"/rooms/x59y26z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
