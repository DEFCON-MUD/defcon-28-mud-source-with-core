inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 13, 6 }));
  set_short( "Hallway - x33y13z6" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y14z6.c",
  "south" : DIR+"/rooms/x33y12z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
