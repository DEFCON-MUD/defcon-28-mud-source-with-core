inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 52, 9 }));
  set_short( "Passage - x57y52z9" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y52z9.c",
  "north" : DIR+"/rooms/x57y53z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
