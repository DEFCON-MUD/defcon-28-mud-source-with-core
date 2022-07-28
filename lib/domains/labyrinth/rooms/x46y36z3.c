inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 36, 3 }));
  set_short( "Passage - x46y36z3" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y36z3.c",
  "east" : DIR+"/rooms/x47y36z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
