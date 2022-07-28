inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 24, 0 }));
  set_short( "Hallway - x18y24z0" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y24z0.c",
  "east" : DIR+"/rooms/x19y24z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
