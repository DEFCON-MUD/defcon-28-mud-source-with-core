inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 2, 6 }));
  set_short( "Hallway - x61y2z6" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y2z6.c",
  "north" : DIR+"/rooms/x61y3z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
