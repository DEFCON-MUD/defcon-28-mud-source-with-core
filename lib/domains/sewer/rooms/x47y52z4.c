inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 52, 4 }));
  set_short( "Corridor - x47y52z4" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y52z4.c",
  "north" : DIR+"/rooms/x47y53z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
