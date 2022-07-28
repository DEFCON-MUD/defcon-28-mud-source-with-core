inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 62, 6 }));
  set_short( "Hallway - x20y62z6" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y62z6.c",
  "east" : DIR+"/rooms/x21y62z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
