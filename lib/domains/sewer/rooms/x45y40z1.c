inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 1 }));
  set_short( "Hallway - x45y40z1" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y40z1.c",
  "east" : DIR+"/rooms/x46y40z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
