inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 64, 0 }));
  set_short( "Passage - x29y64z0" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y64z0.c",
  "east" : DIR+"/rooms/x30y64z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
