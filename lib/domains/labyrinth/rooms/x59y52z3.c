inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 52, 3 }));
  set_short( "Passage - x59y52z3" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y52z3.c",
  "south" : DIR+"/rooms/x59y51z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
