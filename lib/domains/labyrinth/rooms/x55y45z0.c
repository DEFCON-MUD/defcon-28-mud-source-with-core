inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 45, 0 }));
  set_short( "Corridor - x55y45z0" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y46z0.c",
  "south" : DIR+"/rooms/x55y44z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
