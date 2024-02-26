inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 51, 3 }));
  set_short( "Corridor - x61y51z3" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y52z3.c",
  "south" : DIR+"/rooms/x61y50z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
