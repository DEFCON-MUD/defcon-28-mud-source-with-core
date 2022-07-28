inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 60, 8 }));
  set_short( "Passage - x42y60z8" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y60z8.c",
  "east" : DIR+"/rooms/x43y60z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
