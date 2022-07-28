inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 35, 4 }));
  set_short( "Corridor - x5y35z4" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y36z4.c",
  "south" : DIR+"/rooms/x5y34z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
