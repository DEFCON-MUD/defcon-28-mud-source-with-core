inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 62, 6 }));
  set_short( "Passage - x17y62z6" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y62z6.c",
  "south" : DIR+"/rooms/x17y61z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
