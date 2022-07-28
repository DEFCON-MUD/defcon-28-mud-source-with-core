inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 8 }));
  set_short( "Corridor - x53y8z8" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y8z8.c",
  "east" : DIR+"/rooms/x54y8z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the radioactive waste in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
