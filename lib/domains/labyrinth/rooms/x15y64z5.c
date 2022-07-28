inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 64, 5 }));
  set_short( "Hallway - x15y64z5" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y64z5.c",
  "east" : DIR+"/rooms/x16y64z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
