inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 56, 9 }));
  set_short( "Corridor - x61y56z9" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y57z9.c",
  "south" : DIR+"/rooms/x61y55z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
