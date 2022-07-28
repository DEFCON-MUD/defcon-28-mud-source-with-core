inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 18, 0 }));
  set_short( "Corridor - x52y18z0" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y18z0.c",
  "east" : DIR+"/rooms/x53y18z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
