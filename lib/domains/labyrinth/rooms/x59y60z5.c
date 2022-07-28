inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 60, 5 }));
  set_short( "Hallway - x59y60z5" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y61z5.c",
  "south" : DIR+"/rooms/x59y59z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
