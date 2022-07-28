inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 17, 9 }));
  set_short( "Passage - x43y17z9" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y18z9.c",
  "south" : DIR+"/rooms/x43y16z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
