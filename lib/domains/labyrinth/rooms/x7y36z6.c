inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 6 }));
  set_short( "Hallway - x7y36z6" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y37z6.c",
  "south" : DIR+"/rooms/x7y35z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
