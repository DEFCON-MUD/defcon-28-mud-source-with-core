inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 34, 0 }));
  set_short( "Corridor - x61y34z0" );
set_objects( DIR+"/monsters/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y35z0.c",
  "south" : DIR+"/rooms/x61y33z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
