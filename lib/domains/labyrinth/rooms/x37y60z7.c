inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 60, 7 }));
  set_short( "Passage - x37y60z7" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y60z7.c",
  "east" : DIR+"/rooms/x38y60z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
