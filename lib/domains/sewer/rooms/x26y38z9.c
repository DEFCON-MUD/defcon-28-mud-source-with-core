inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 38, 9 }));
  set_short( "Corridor - x26y38z9" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y38z9.c",
  "east" : DIR+"/rooms/x27y38z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
