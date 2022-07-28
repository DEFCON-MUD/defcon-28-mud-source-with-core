inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 52, 4 }));
  set_short( "Passage - x11y52z4" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y52z4.c",
  "north" : DIR+"/rooms/x11y53z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
