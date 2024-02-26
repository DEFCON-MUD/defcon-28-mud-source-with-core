inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 23, 6 }));
  set_short( "Hallway - x19y23z6" );
set_objects( DIR+"/monsters/ratqueen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y24z6.c",
  "south" : DIR+"/rooms/x19y22z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
