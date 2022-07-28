inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 9 }));
  set_short( "Passage - x21y62z9" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y62z9.c",
  "east" : DIR+"/rooms/x22y62z9.c",
  "south" : DIR+"/rooms/x21y61z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
