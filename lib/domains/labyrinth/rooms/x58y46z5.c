inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 46, 5 }));
  set_short( "Corridor - x58y46z5" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y46z5.c",
  "east" : DIR+"/rooms/x59y46z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
