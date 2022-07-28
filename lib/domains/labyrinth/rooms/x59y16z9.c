inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 9 }));
  set_short( "Passage - x59y16z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z9.c",
  "east" : DIR+"/rooms/x60y16z9.c",
  "north" : DIR+"/rooms/x59y17z9.c",
  "south" : DIR+"/rooms/x59y15z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
