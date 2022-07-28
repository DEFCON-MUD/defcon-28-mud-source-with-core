inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 16, 5 }));
  set_short( "Hallway - x38y16z5" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y16z5.c",
  "east" : DIR+"/rooms/x39y16z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
