inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 34, 3 }));
  set_short( "Corridor - x15y34z3" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y34z3.c",
  "south" : DIR+"/rooms/x15y33z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
