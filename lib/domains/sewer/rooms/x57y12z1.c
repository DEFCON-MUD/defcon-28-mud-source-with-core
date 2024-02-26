inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 1 }));
  set_short( "Hallway - x57y12z1" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y12z1.c",
  "north" : DIR+"/rooms/x57y13z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the glorzo in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
