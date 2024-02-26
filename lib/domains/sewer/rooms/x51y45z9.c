inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 45, 9 }));
  set_short( "Corridor - x51y45z9" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y46z9.c",
  "south" : DIR+"/rooms/x51y44z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
