inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 0 }));
  set_short( "Passage - x23y48z0" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y48z0.c",
  "north" : DIR+"/rooms/x23y49z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
