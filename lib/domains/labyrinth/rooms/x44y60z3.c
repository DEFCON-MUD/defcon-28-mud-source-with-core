inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 60, 3 }));
  set_short( "Hallway - x44y60z3" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y60z3.c",
  "east" : DIR+"/rooms/x45y60z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
