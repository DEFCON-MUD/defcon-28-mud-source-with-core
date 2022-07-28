inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 23, 9 }));
  set_short( "Hallway - x23y23z9" );
set_objects( DIR+"/npc/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y24z9.c",
  "south" : DIR+"/rooms/x23y22z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
