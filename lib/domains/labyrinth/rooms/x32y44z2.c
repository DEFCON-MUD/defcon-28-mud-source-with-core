inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 44, 2 }));
  set_short( "Passage - x32y44z2" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y44z2.c",
  "east" : DIR+"/rooms/x33y44z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
