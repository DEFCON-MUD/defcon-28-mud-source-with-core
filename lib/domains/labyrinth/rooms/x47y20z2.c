inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 20, 2 }));
  set_short( "Corridor - x47y20z2" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y20z2.c",
  "east" : DIR+"/rooms/x48y20z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
