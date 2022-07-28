inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 46, 5 }));
  set_short( "Hallway - x31y46z5" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y47z5.c",
  "south" : DIR+"/rooms/x31y45z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
