inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 28, 9 }));
  set_short( "Passage - x17y28z9" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y28z9.c",
  "south" : DIR+"/rooms/x17y27z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
