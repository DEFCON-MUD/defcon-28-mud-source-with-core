inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 6 }));
  set_short( "Corridor - x23y16z6" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y16z6.c",
  "north" : DIR+"/rooms/x23y17z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the radioactive waste in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
