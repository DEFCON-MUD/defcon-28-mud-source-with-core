inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 24, 1 }));
  set_short( "Hallway - x29y24z1" );
set_objects( DIR+"/monsters/er.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y24z1.c",
  "north" : DIR+"/rooms/x29y25z1.c",
  "south" : DIR+"/rooms/x29y23z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
