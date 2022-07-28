inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 14, 6 }));
  set_short( "Corridor - x59y14z6" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y14z6.c",
  "south" : DIR+"/rooms/x59y13z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
