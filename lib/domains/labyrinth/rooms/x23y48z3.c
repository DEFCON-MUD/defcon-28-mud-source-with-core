inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 3 }));
  set_short( "Hallway - x23y48z3" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y48z3.c",
  "east" : DIR+"/rooms/x24y48z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
