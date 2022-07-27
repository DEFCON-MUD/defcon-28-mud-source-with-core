inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 22, 0 }));
  set_short( "Corridor - x61y22z0" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y22z0.c",
  "north" : DIR+"/rooms/x61y23z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
