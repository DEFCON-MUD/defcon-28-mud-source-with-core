inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 40, 1 }));
  set_short( "Hallway - x3y40z1" );
set_objects( DIR+"/monsters/atriumrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y41z1.c",
  "south" : DIR+"/rooms/x3y39z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
