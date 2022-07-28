inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 52, 3 }));
  set_short( "Passage - x29y52z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y52z3.c",
  "east" : DIR+"/rooms/x30y52z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
