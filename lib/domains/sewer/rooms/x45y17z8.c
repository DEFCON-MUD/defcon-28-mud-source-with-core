inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 17, 8 }));
  set_short( "Corridor - x45y17z8" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y18z8.c",
  "south" : DIR+"/rooms/x45y16z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
