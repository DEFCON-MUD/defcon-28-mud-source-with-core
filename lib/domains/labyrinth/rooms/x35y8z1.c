inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 8, 1 }));
  set_short( "Hallway - x35y8z1" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y8z1.c",
  "east" : DIR+"/rooms/x36y8z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
