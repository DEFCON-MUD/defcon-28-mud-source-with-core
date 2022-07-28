inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 46, 1 }));
  set_short( "Hallway - x21y46z1" );
set_objects( DIR+"/npc/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y46z1.c",
  "north" : DIR+"/rooms/x21y47z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
