inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 35, 2 }));
  set_short( "Corridor - x13y35z2" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y36z2.c",
  "south" : DIR+"/rooms/x13y34z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
