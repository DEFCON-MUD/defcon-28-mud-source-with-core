inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 12, 8 }));
  set_short( "Corridor - x17y12z8" );
set_objects( DIR+"/monsters/hkle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y12z8.c",
  "east" : DIR+"/rooms/x18y12z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
