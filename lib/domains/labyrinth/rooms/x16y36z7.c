inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 36, 7 }));
  set_short( "Passage - x16y36z7" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y36z7.c",
  "east" : DIR+"/rooms/x17y36z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
