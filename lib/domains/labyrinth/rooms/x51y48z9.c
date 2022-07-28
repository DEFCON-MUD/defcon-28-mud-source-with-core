inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 48, 9 }));
  set_short( "Hallway - x51y48z9" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y48z9.c",
  "east" : DIR+"/rooms/x52y48z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
