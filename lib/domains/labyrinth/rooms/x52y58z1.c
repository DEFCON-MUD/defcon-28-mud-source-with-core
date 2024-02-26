inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 58, 1 }));
  set_short( "Corridor - x52y58z1" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y58z1.c",
  "east" : DIR+"/rooms/x53y58z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
