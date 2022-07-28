inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 36, 2 }));
  set_short( "Corridor - x54y36z2" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y36z2.c",
  "east" : DIR+"/rooms/x55y36z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
