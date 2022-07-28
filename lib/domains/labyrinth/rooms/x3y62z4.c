inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 62, 4 }));
  set_short( "Hallway - x3y62z4" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y62z4.c",
  "north" : DIR+"/rooms/x3y63z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
