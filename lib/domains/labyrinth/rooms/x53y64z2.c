inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 2 }));
  set_short( "Hallway - x53y64z2" );
set_objects( DIR+"/npc/glorzo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z2.c",
  "east" : DIR+"/rooms/x54y64z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
