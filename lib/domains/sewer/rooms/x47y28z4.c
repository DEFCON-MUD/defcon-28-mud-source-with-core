inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 28, 4 }));
  set_short( "Hallway - x47y28z4" );
set_objects( DIR+"/monsters/carrierpigeon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y28z4.c",
  "north" : DIR+"/rooms/x47y29z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
