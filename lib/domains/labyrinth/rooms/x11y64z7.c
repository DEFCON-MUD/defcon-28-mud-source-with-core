inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 64, 7 }));
  set_short( "Passage - x11y64z7" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y64z7.c",
  "east" : DIR+"/rooms/x12y64z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
