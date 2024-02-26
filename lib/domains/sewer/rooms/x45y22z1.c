inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 22, 1 }));
  set_short( "Hallway - x45y22z1" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y22z1.c",
  "east" : DIR+"/rooms/x46y22z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
