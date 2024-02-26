inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 44, 7 }));
  set_short( "Hallway - x15y44z7" );
set_objects( DIR+"/monsters/th.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y44z7.c",
  "north" : DIR+"/rooms/x15y45z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
