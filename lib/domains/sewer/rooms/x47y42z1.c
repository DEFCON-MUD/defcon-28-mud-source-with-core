inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 42, 1 }));
  set_short( "Hallway - x47y42z1" );
set_objects( DIR+"/monsters/largeheptopsquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y42z1.c",
  "south" : DIR+"/rooms/x47y41z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
