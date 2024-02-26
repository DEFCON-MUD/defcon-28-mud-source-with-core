inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 23, 6 }));
  set_short( "Hallway - x55y23z6" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y24z6.c",
  "south" : DIR+"/rooms/x55y22z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
