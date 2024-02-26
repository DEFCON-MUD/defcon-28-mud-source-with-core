inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 46, 6 }));
  set_short( "Hallway - x35y46z6" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y46z6.c",
  "north" : DIR+"/rooms/x35y47z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
