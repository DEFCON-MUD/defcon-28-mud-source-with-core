inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 23, 5 }));
  set_short( "Corridor - x13y23z5" );
set_objects( DIR+"/monsters/clerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y24z5.c",
  "south" : DIR+"/rooms/x13y22z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
