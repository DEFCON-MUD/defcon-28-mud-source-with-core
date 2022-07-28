inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 46, 1 }));
  set_short( "Passage - x61y46z1" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y46z1.c",
  "south" : DIR+"/rooms/x61y45z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
