inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 35, 1 }));
  set_short( "Passage - x17y35z1" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y36z1.c",
  "south" : DIR+"/rooms/x17y34z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
