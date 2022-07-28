inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 42, 1 }));
  set_short( "Passage - x32y42z1" );
set_objects( DIR+"/npc/baboon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y42z1.c",
  "east" : DIR+"/rooms/x33y42z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
