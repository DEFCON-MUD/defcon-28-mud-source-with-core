inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 13, 2 }));
  set_short( "Hallway - x9y13z2" );
set_objects( DIR+"/monsters/hore.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y14z2.c",
  "south" : DIR+"/rooms/x9y12z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
