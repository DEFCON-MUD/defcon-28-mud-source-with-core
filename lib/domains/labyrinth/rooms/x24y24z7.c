inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 24, 7 }));
  set_short( "Hallway - x24y24z7" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y24z7.c",
  "east" : DIR+"/rooms/x25y24z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
