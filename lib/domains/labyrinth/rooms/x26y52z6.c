inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 52, 6 }));
  set_short( "Hallway - x26y52z6" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y52z6.c",
  "east" : DIR+"/rooms/x27y52z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
