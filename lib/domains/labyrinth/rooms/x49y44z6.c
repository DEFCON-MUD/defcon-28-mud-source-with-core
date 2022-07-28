inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 44, 6 }));
  set_short( "Hallway - x49y44z6" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y44z6.c",
  "south" : DIR+"/rooms/x49y43z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the muck in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
