inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 3 }));
  set_short( "Passage - x21y14z3" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y14z3.c",
  "south" : DIR+"/rooms/x21y13z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
