inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 39, 7 }));
  set_short( "Hallway - x59y39z7" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y40z7.c",
  "south" : DIR+"/rooms/x59y38z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
