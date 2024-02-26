inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 8, 6 }));
  set_short( "Corridor - x17y8z6" );
set_objects( DIR+"/monsters/rattlesnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y8z6.c",
  "north" : DIR+"/rooms/x17y9z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
