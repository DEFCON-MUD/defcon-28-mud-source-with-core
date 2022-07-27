inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 5 }));
  set_short( "Corridor - x14y64z5" );
set_objects( DIR+"/monsters/eastmaintenaedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z5.c",
  "east" : DIR+"/rooms/x15y64z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
