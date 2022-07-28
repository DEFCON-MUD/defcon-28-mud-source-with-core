inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 62, 6 }));
  set_short( "Hallway - x34y62z6" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y62z6.c",
  "east" : DIR+"/rooms/x35y62z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
