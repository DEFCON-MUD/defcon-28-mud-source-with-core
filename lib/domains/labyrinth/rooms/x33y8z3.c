inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 8, 3 }));
  set_short( "Hallway - x33y8z3" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y8z3.c",
  "east" : DIR+"/rooms/x34y8z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
