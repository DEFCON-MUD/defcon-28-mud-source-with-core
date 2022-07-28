inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 52, 0 }));
  set_short( "Corridor - x34y52z0" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y52z0.c",
  "east" : DIR+"/rooms/x35y52z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
