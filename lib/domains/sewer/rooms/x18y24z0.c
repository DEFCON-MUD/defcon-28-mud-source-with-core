inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 24, 0 }));
  set_short( "Hallway - x18y24z0" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y24z0.c",
  "east" : DIR+"/rooms/x19y24z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
