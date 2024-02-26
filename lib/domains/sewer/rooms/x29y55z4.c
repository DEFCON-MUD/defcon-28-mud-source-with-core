inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 55, 4 }));
  set_short( "Hallway - x29y55z4" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y56z4.c",
  "south" : DIR+"/rooms/x29y54z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
