inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 2, 3 }));
  set_short( "Corridor - x38y2z3" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y2z3.c",
  "east" : DIR+"/rooms/x39y2z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
