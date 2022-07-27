inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 11, 8 }));
  set_short( "Hallway - x19y11z8" );
set_objects( DIR+"/monsters/vipbouer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y12z8.c",
  "south" : DIR+"/rooms/x19y10z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
