inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 64, 6 }));
  set_short( "Hallway - x19y64z6" );
set_objects( DIR+"/monsters/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y64z6.c",
  "east" : DIR+"/rooms/x20y64z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
