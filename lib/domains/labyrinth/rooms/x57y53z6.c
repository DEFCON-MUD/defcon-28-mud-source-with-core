inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 53, 6 }));
  set_short( "Hallway - x57y53z6" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y54z6.c",
  "south" : DIR+"/rooms/x57y52z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
