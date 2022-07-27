inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 20, 4 }));
  set_short( "Hallway - x54y20z4" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y20z4.c",
  "east" : DIR+"/rooms/x55y20z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
