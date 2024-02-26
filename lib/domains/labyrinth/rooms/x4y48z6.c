inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 48, 6 }));
  set_short( "Hallway - x4y48z6" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y48z6.c",
  "east" : DIR+"/rooms/x5y48z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
