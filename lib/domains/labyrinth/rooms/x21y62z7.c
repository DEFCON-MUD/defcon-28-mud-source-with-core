inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 7 }));
  set_short( "Hallway - x21y62z7" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y62z7.c",
  "east" : DIR+"/rooms/x22y62z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
