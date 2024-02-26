inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 36, 0 }));
  set_short( "Hallway - x61y36z0" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y37z0.c",
  "south" : DIR+"/rooms/x61y35z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
