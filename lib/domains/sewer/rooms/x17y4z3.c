inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 3 }));
  set_short( "Hallway - x17y4z3" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y4z3.c",
  "north" : DIR+"/rooms/x17y5z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
