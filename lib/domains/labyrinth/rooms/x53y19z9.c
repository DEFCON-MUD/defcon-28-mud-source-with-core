inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 19, 9 }));
  set_short( "Passage - x53y19z9" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y20z9.c",
  "south" : DIR+"/rooms/x53y18z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
