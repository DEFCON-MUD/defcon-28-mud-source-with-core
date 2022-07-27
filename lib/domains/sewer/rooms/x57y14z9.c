inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 14, 9 }));
  set_short( "Corridor - x57y14z9" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y14z9.c",
  "south" : DIR+"/rooms/x57y13z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
