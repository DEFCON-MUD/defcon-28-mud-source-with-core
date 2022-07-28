inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 37, 2 }));
  set_short( "Corridor - x55y37z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y38z2.c",
  "south" : DIR+"/rooms/x55y36z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
