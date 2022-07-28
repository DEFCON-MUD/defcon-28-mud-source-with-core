inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 46, 6 }));
  set_short( "Hallway - x3y46z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y46z6.c",
  "south" : DIR+"/rooms/x3y45z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
