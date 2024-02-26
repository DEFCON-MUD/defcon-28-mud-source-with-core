inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 15, 9 }));
  set_short( "Corridor - x51y15z9" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y16z9.c",
  "south" : DIR+"/rooms/x51y14z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
