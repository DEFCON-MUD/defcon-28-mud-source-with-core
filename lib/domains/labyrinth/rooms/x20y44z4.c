inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 44, 4 }));
  set_short( "Hallway - x20y44z4" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y44z4.c",
  "east" : DIR+"/rooms/x21y44z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
