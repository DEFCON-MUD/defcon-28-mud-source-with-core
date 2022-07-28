inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 56, 6 }));
  set_short( "Corridor - x52y56z6" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y56z6.c",
  "east" : DIR+"/rooms/x53y56z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
