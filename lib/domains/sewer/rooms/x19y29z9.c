inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 29, 9 }));
  set_short( "Hallway - x19y29z9" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y30z9.c",
  "south" : DIR+"/rooms/x19y28z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
