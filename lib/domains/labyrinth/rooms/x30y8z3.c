inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 8, 3 }));
  set_short( "Corridor - x30y8z3" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y8z3.c",
  "east" : DIR+"/rooms/x31y8z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
