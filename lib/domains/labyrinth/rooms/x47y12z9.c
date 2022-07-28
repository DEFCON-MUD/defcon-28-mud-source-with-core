inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 12, 9 }));
  set_short( "Corridor - x47y12z9" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y13z9.c",
  "south" : DIR+"/rooms/x47y11z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
