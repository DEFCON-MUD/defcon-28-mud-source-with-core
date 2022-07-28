inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 0, 8 }));
  set_short( "Hallway - x35y0z8" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y0z8.c",
  "east" : DIR+"/rooms/x36y0z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
