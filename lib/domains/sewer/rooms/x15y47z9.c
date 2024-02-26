inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 47, 9 }));
  set_short( "Hallway - x15y47z9" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y48z9.c",
  "south" : DIR+"/rooms/x15y46z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
